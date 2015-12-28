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
    if ((ServerSocket->isBound() || ServerSocket->isConnected())) {
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
    std::cerr << "Starting Connect...";

    std::cerr << "Creating Socket...";
    if (!createSocket(
            *m_currentSocket)) {  // create the socket and check for errors
        throw MsgException("Socket creation failed.");
    }

    std::cerr << "Connecting socket...";
    if (!connectSocket(*m_currentSocket)) {  /// call connect on the socket and
                                             /// check for errors
        std::cerr << "Socket connection failed.";
        std::cerr << "Closing socket.";
        closeSocket(*m_currentSocket);
        std::cerr << "Creation of connection failed.";
        throw MsgException("Socket connection failed.");
    }
    std::cerr << "Connected successfully!";
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
        throw MsgException(
            "The new destination socket is bound.");
    }
    m_currentSocket = destinationSocket;
    m_doesOwnSocket = false;
    return true;
}

baseDataBuffer* Client::receive(UINT lentoAccept, INT flags) {
    return receiveData(*m_currentSocket, lentoAccept, flags);
}

UINT Client::send(std::string data, INT flags) {
    baseDataBuffer newBuffer(data);
    return sendData(*m_currentSocket, newBuffer, flags);
}

UINT Client::send(baseDataBuffer& data, INT flags) {
    return sendData(*m_currentSocket, data, flags);
}

baseSocket* Client::getSocket() { return m_currentSocket; }

    
void Client::relinquishOwnership(){
    m_doesOwnSocket = false;
}


void Client::transferOwnership(){
    m_doesOwnSocket = true;
}


bool Client::doesOwnSocket(){
    return m_doesOwnSocket;
}




}


