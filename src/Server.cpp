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

#include "Server.h"

namespace Communication {

Server::Server(baseSocket* toBind) { setSocket(toBind); }

Server::Server(IP ip, Port portNo, UINT socketType, UINT familyType) {
    m_toBind = new baseSocket(ip, portNo, socketType, familyType);
    m_doesOwnBoundSocket = true;
    m_isServerUp = false;
}

Server::Server(SocketStructure* connectionDestination) {
    m_toBind = new baseSocket(*connectionDestination);
    m_doesOwnBoundSocket = true;
    m_isServerUp = false;
}

bool Server::setSocket(baseSocket* toBind) {
    if (toBind->isConnected()) {
        throw MsgException("The socket is already connected, cannot use it.");
    }
    m_toBind = toBind;
    m_doesOwnBoundSocket = false;
    return true;
}

bool Server::setSocket(IP ip, Port portNo, UINT socketType, UINT familyType) {
    m_toBind = new baseSocket(ip, portNo, socketType, familyType);
    m_doesOwnBoundSocket = true;
    return true;
}

bool Server::setSocket(SocketStructure* connectionDestination) {
    m_toBind = new baseSocket(*connectionDestination);
    m_doesOwnBoundSocket = true;
    return true;
}

Server::~Server() {
    if (m_doesOwnBoundSocket) {
        delete m_toBind;
    }
    for (baseSocket* i : m_connectedClients) {
        delete i;
    }
}

bool Server::startServer() {
    if (!(m_toBind->isValid())) {
        std::cerr << "ERROR: socket to use for server is invalid.";
        return false;
    } else if (m_toBind->isConnected()) {
        std::cerr << "ERROR: socket to use for server is connected.";
        return false;
    }

    if (m_isServerUp) {
        std::cerr << "ERROR: Server is already started";
        return false;
    }

    if (!m_toBind->isBound()) {
        try {
            bindSocket(*m_toBind);
        } catch (Exception::SystemExceptionEINVAL& e) {
        } catch (std::exception& e2) {
            closeSocket(*m_toBind);
            m_toBind = new baseSocket();
            m_doesOwnBoundSocket = true;
            throw e2;
            return false;
        }
    }

    if (!m_toBind->isListening()) {
        try {
            listenForConnections(*m_toBind);
        } catch (std::exception& e) {
            closeSocket(*m_toBind);
            m_toBind = new baseSocket();
            m_doesOwnBoundSocket = true;
            throw e;
            return false;
        }
    }
    m_isServerUp = true;
    return true;
}

const baseSocket* Server::getSocket() { return m_toBind; }

baseSocket* Server::startAccepting() {
    baseSocket* a = acceptConnection(*m_toBind);
    m_connectedClients.push_back(a);
    return a;
}

bool Server::shutdownServer() {
    for (baseSocket* i : m_connectedClients) {
        closeSocket(*i);
    }
    m_connectedClients = std::vector<baseSocket*>();
    closeSocket(*m_toBind);
    m_toBind = new baseSocket();
    m_doesOwnBoundSocket = true;
    return false;
}

std::vector<baseSocket*>* Server::getClientList() {
    return &m_connectedClients;
}

/// namespace Communication
}
