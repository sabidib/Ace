//
// Ace - A c++ networking library
// Copyright (C) 2012, 2016 Samy Abidib
//
// This file is part of Ace.
//
// Ace is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Ace is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Ace.  If not, see <http://www.gnu.org/licenses/>.
//

#include "baseGateway.h"

namespace Communication {

bool baseGateway::createSocket(baseSocket& SocketToCreate, INT flags) {
    if (!(SocketToCreate.isValid())) {
        throw MsgException("ERROR: SocketToCreate is invalid");
    } else if (SocketToCreate.isBound()) {
        throw MsgException("ERROR: SocketToCreate is already bound");
    } else if (SocketToCreate.isListening()) {
        throw MsgException("ERROR: SocketToCreate is already listening");
    } else if (SocketToCreate.isSendingData() ||
               SocketToCreate.isReceivingData()) {
        throw MsgException(
            "ERROR: SocketToCreate is already receiving or sending data.");
    } else if (SocketToCreate.isConnected()) {
        throw MsgException(
            "WARNING: SocketToCreate was connected"
            "already...Disconnecting it "
            "to reassign it to a new socket.");
        closeSocket(SocketToCreate);
    }

    try {
        OS::_socket(SocketToCreate, flags);
    } catch (MsgException& e) {
        try {
            closeSocket(SocketToCreate);
        } catch (MsgException& e2) {
            throw MsgException(e.what() + std::string("   ") + e2.what());
        }
        throw e;
    }

    if (SocketToCreate.isValid()) {
        SocketToCreate.getConnectionStatus()->setIsAssigned(true);
        return true;
    } else {
        throw MsgException("Something bad happened while creating the socket.");
        closeSocket(SocketToCreate);
    }
}

bool baseGateway::bindSocket(baseSocket& SocketToBind) {
    if (!(SocketToBind.isValid())) {
        throw MsgException("ERROR: SocketToBind is invalid");
    } else if (SocketToBind.isBound()) {
        throw MsgException("ERROR: SocketToBind is already bound");
    } else if (SocketToBind.isListening()) {
        throw MsgException("ERROR: SocketToBind is already listening");
    } else if (SocketToBind.isConnected()) {
        throw MsgException("ERROR: SocketToBind is already connected");
    } else if (SocketToBind.isSendingData() || SocketToBind.isReceivingData()) {
        throw MsgException(
            "ERROR: SocketToBind is already receiving or sending data.");
    } else if (!SocketToBind.isAssigned()) {
        throw MsgException("ERROR: SocketToBind is not an assigned socket.");
    }
    SocketToBind.getConnectionStatus()->setIsBound(true);
    return OS::_bind(SocketToBind);
    ;
}

bool baseGateway::connectSocket(baseSocket& SocketToConnect) {
    if (!(SocketToConnect.isValid())) {
        throw MsgException("ERROR: SocketToConnect is invalid");
    } else if (SocketToConnect.isBound()) {
        throw MsgException("ERROR: SocketToConnect is already bound");
    } else if (SocketToConnect.isListening()) {
        throw MsgException("ERROR: SocketToConnect is already listening");
    } else if (!SocketToConnect.isAssigned()) {
        throw MsgException("ERROR: SocketToConnect is not an assigned socket.");
    } else if (SocketToConnect.isSendingData() ||
               SocketToConnect.isReceivingData()) {
        throw MsgException(
            "ERROR: SocketToConnect is already receiving or sending data.");
    } else if (SocketToConnect.isConnected()) {
        throw MsgException("ERROR: SocketToConnect is already connected");
    }
    try {
        OS::_connect(SocketToConnect);
    } catch (MsgException& e) {
        SocketToConnect.getConnectionStatus()->setIsConnected(false);
        throw e;
    }

    SocketToConnect.getConnectionStatus()->setIsConnected(true);
    return true;
}

bool baseGateway::listenForConnections(baseSocket& SocketToStartListening) {
    if (!(SocketToStartListening.isValid())) {
        throw MsgException("ERROR: SocketToStartListening is invalid");
    } else if (!SocketToStartListening.isBound()) {
        throw MsgException("ERROR: SocketToStartListening is not bound");
    } else if (!SocketToStartListening.isListening()) {
        throw MsgException(
            "ERROR: SocketToStartListening is already listening");
    } else if (SocketToStartListening.isConnected()) {
        throw MsgException(
            "ERROR: SocketToStartListening is already connected");
    } else if (SocketToStartListening.isSendingData() ||
               SocketToStartListening.isReceivingData()) {
        throw MsgException(
            "ERROR: SocketToStartListening is already receiving or sending "
            "data.");
    } else if (!SocketToStartListening.isAssigned()) {
        throw MsgException(
            "ERROR: SocketToStartListening is not an assigned socket.");
    }

    try {
        OS::_listen(SocketToStartListening, MAX_BACKLOG);
    } catch (MsgException& e) {
        SocketToStartListening.getConnectionStatus()->setIsListening(false);
        throw e;
    }

    SocketToStartListening.getConnectionStatus()->setIsListening(true);
    return true;
}

baseSocket* baseGateway::acceptConnection(
    baseSocket& SocketToAcceptConnection) {
    if (!(SocketToAcceptConnection.isValid())) {
        throw MsgException("ERROR: SocketToAcceptConnection is invalid");
    } else if (!SocketToAcceptConnection.isBound()) {
        throw MsgException("ERROR: SocketToAcceptConnection is not bound");
    } else if (!SocketToAcceptConnection.isListening()) {
        throw MsgException("ERROR: SocketToAcceptConnection is not listening");
    } else if (SocketToAcceptConnection.isConnected()) {
        throw MsgException(
            "ERROR: SocketToAcceptConnection is already connected");
    } else if (SocketToAcceptConnection.isSendingData() ||
               SocketToAcceptConnection.isReceivingData()) {
        throw MsgException(
            "ERROR: SocketToAcceptConnection is already receiving or sending "
            "data.");
    } else if (!SocketToAcceptConnection.isAssigned()) {
        throw MsgException(
            "ERROR: SocketToAcceptConnection is not an assigned socket.");
    }

    try {
        baseSocket* SocketToStoreConnection =
            OS::_accept(SocketToAcceptConnection);
        int yes = 1;
        OS::_setsockopt(*SocketToStoreConnection, SOL_SOCKET, SO_REUSEADDR,
                        &yes, sizeof(yes));
        if (SocketToStoreConnection->isValid()) {
            SocketToStoreConnection->getConnectionStatus()->setIsConnected(
                true);
            SocketToStoreConnection->getConnectionStatus()->setIsAssigned(true);
            return SocketToStoreConnection;
        } else {
            return nullptr;
        }
    } catch (std::exception& e) {
        throw e;
    }
}

UINT baseGateway::sendData(baseSocket& SocketToSend, baseDataBuffer& data,
                           INT flags) {
    if (!(SocketToSend.isValid())) {
        throw MsgException("ERROR: SocketToSend is invalid");
    } else if (SocketToSend.isBound()) {
        throw MsgException("ERROR: SocketToSend is bound");
    } else if (SocketToSend.isListening()) {
        throw MsgException("ERROR: SocketToSend is listening");
    } else if (!SocketToSend.isConnected()) {
        throw MsgException("ERROR: SocketToSend is not connected");
    } else if (SocketToSend.isSendingData() || SocketToSend.isReceivingData()) {
        throw MsgException(
            "ERROR: SocketToSend is already receiving or sending data.");
    } else if (!SocketToSend.isAssigned()) {
        throw MsgException("ERROR: SocketToSend is not an assigned socket.");
    }

    if (data.getSizeOfData() > MAX_TO_SEND) {
        throw MsgException("ERROR: Data to send is larger than MAX_TO_SEND");
    }

    UINT lengthToSend = data.getSizeOfData();
    UINT lengthSent = 0;
    UINT offSetIntoData = 0;

    INT response = 0;

    SocketToSend.getConnectionStatus()->setIsSendingData(true);
    while (offSetIntoData < data.getSizeOfData()) {
        try {
            lengthSent =
                OS::_send(SocketToSend, data.getBuffer() + offSetIntoData,
                          lengthToSend, flags);
            offSetIntoData += lengthSent;
            lengthToSend -= lengthSent;
        } catch (MsgException& e) {
            SocketToSend.getConnectionStatus()->setIsSendingData(false);
            throw e;
        }
    }
    SocketToSend.getConnectionStatus()->setIsSendingData(false);
    return lengthSent;
}

baseDataBuffer* baseGateway::receiveData(baseSocket& SocketToReceive,
                                         UINT lenToAccept, INT flags) {
    if (!(SocketToReceive.isValid())) {
        throw MsgException("ERROR: SocketToReceive is invalid");
    } else if (SocketToReceive.isBound()) {
        throw MsgException("ERROR: SocketToReceive is bound");
    } else if (SocketToReceive.isListening()) {
        throw MsgException("ERROR: SocketToReceive is listening");
    } else if (!SocketToReceive.isConnected()) {
        throw MsgException("ERROR: SocketToReceive is not connected");
    } else if (SocketToReceive.isSendingData() ||
               SocketToReceive.isReceivingData()) {
        throw MsgException(
            "ERROR: SocketToReceive is already receiving or sending data.");
    } else if (!SocketToReceive.isAssigned()) {
        throw MsgException("ERROR: SocketToReceive is not an assigned socket.");
    }

    if (lenToAccept > MAX_BUFFER_LENGTH) {
        std::cerr << "ERROR: the number of bytes to accept is larger than "
                     "the maximum length of the buffer.";
        return nullptr;
    }
    char* tempArrayRecv = new char[lenToAccept];

    SocketToReceive.getConnectionStatus()->setIsReceivingData(true);
    try {
        UINT NumBytesRecv =
            OS::_recv(SocketToReceive, tempArrayRecv, lenToAccept, flags);
        SocketToReceive.getConnectionStatus()->setIsReceivingData(false);
        baseDataBuffer* data =
            new baseDataBuffer(tempArrayRecv, NumBytesRecv, false);
        return data;
    } catch (MsgException& e) {
        SocketToReceive.getConnectionStatus()->setIsReceivingData(false);
        throw e;
    }
    return nullptr;
}

bool baseGateway::closeSocket(baseSocket& SocketToClose, INT Flags) {
    if (!SocketToClose.isAssigned()) {
        throw MsgException(
            "ERROR: The socket is not assigned, cannot close an unassigned "
            "socket.");
    }
    try {
        OS::_shutdown(SocketToClose, Flags);
    } catch (Exception::SystemExceptionENOTCONN& e) {
    }
    
    try{
        OS::_close(SocketToClose);
        SocketToClose._resetSocket();
    } catch (MsgException& e) {
        throw e;
    }

    return true;
}

}  /// namespace Communication
