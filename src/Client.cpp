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

#include "Client.h"

namespace Communication {

Client::~Client() {
    if (m_doesOwnSocket) {
        delete m_currentSocket;
    }
}

Client::Client(baseSocket* ServerSocket) {
    if (ServerSocket->isBound()) {
        throw MsgException(
            "The destination is already connected or bound. Must be "
            "disconnected first.");
    }
    m_currentSocket = ServerSocket;
    m_doesOwnSocket = false;
}

Client::Client(IP ip, Port portNo, UINT socketType, UINT familyType) {
    m_currentSocket = new baseSocket(ip, portNo, socketType, familyType);
    m_doesOwnSocket = true;
}

Client::Client(SocketStructure* connectionDestination) {
    m_currentSocket = new baseSocket(*connectionDestination);
    m_doesOwnSocket = true;
}

bool Client::connect() {
    // std::clog << "Starting Connect..." << std::endl;

    // std::clog << "Creating Socket..." << std::endl;
    if (!createSocket(
            *m_currentSocket)) {  // create the socket and check for errors
        throw MsgException("Socket creation failed.");
    }

    // std::clog << "Connecting socket..." << std::endl;
    if (!connectSocket(*m_currentSocket)) {  /// call connect on the socket and
                                             /// check for errors
        // std::clog << "Socket connection failed." << std::endl;
        // std::clog << "Closing socket." << std::endl;
        closeSocket(*m_currentSocket);
        // std::clog << "Creation of connection failed." << std::endl;
        throw MsgException("Socket connection failed.");
    }
    // std::clog << "Connected successfully!" << std::endl;
    return true;
}

bool Client::disconnect() {
    bool res = closeSocket(*m_currentSocket);
    if (res) {
        m_currentSocket = new baseSocket();
        m_doesOwnSocket = true;
    }
    return res;
}

bool Client::disconnect(baseDataBuffer& DataToSend) {
    send(DataToSend);
    bool res = closeSocket(*m_currentSocket);
    if (res) {
        m_currentSocket = new baseSocket();
        m_doesOwnSocket = true;
    }
    return res;
}

bool Client::disconnect(std::string DataToSend) {
    send(DataToSend);
    bool res = closeSocket(*m_currentSocket);
    if (res) {
        m_currentSocket = new baseSocket();
        m_doesOwnSocket = true;
    }
    return res;
}

bool Client::setSocket(baseSocket* destinationSocket) {
    if (destinationSocket->isBound()) {
        throw MsgException("The new destination socket is bound.");
    }
    m_currentSocket = destinationSocket;
    m_doesOwnSocket = false;
    return true;
}

baseDataBuffer* Client::receive(UINT lentoAccept, INT flags) {
    return receiveData(*m_currentSocket, lentoAccept, flags);
}

baseDataBuffer* Client::receive(UINT lenToAccept) {
    return receiveData(*m_currentSocket, lenToAccept, 0);
}
baseDataBuffer* Client::receive() {
    return receiveData(*m_currentSocket, 256, 0);
}

UINT Client::send(std::string data, INT flags) {
    baseDataBuffer newBuffer(data);
    return sendData(*m_currentSocket, newBuffer, flags);
}

UINT Client::send(std::string data) {
    baseDataBuffer newBuffer(data);
    return sendData(*m_currentSocket, newBuffer, 0);
}

UINT Client::send(baseDataBuffer& data, INT flags) {
    return sendData(*m_currentSocket, data, flags);
}
UINT Client::send(baseDataBuffer& data) {
    return sendData(*m_currentSocket, data,0);
}



baseSocket* Client::getSocket() { return m_currentSocket; }

void Client::relinquishOwnership() { m_doesOwnSocket = false; }

void Client::transferOwnership() { m_doesOwnSocket = true; }

bool Client::doesOwnSocket() { return m_doesOwnSocket; }
}
