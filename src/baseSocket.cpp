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

#include "baseSocket.h"

namespace Communication {

baseSocket::baseSocket(){}

baseSocket::baseSocket(SocketStructure ServerInfo)
    : m_socketStructure(ServerInfo), m_socketDescriptorWasSet(false) {}

baseSocket::baseSocket(IP ip, Port portNo, UINT socketType, UINT familyType)
    : m_socketDescriptorWasSet(false) {
    m_socketStructure = SocketStructure(ip, portNo, socketType, familyType);
}

IP baseSocket::getIP() const { return m_socketStructure.getIP(); }

Port baseSocket::getPort() const { return m_socketStructure.getPort(); }

UINT baseSocket::getType() const { return m_socketStructure.getType(); }

UINT baseSocket::getFamily() const { return m_socketStructure.getFamily(); }

std::string baseSocket::getIPS() const { return m_socketStructure.getIPS(); }

void baseSocket::setSocketDescriptor(
    SocketFileDescriptor socketFileDescriptor) {
    m_socketDescriptor = socketFileDescriptor;
    m_socketDescriptorWasSet = true;
}

void baseSocket::setSocketStructure(SocketStructure socketInfo) {
    m_socketStructure = socketInfo;
}

bool baseSocket::isIPValid() const { return m_socketStructure.isIPValid(); }

bool baseSocket::isPortValid() const { return m_socketStructure.isPortValid(); }

bool baseSocket::isValid() const {
    bool isStructureValid = m_socketStructure.isValid();
    if (m_socketDescriptorWasSet) {
        bool isDescriptorValid = m_socketDescriptor.isValid();
        return isDescriptorValid && isStructureValid;
    } else {
        return isStructureValid;
    }
}

SocketFileDescriptor* baseSocket::getSocketFileDescriptor() {
    return &m_socketDescriptor;
}

SocketStructure* baseSocket::getSocketStructure() {
    return &m_socketStructure;
}

ConnectionStatus* baseSocket::getConnectionStatus() {
    return &m_socketStatus;
}


bool baseSocket::isAssigned() const { return m_socketStatus.isAssigned(); }
bool baseSocket::isListening() const { return m_socketStatus.isListening(); }

bool baseSocket::isBound() const { return m_socketStatus.isBound(); }

STATUS baseSocket::getStatus() const { return m_socketStatus.getStatus(); }


bool baseSocket::isConnected() const { return m_socketStatus.isConnected(); }

bool baseSocket::isSendingData() const {
    return m_socketStatus.isSendingData();
}

bool baseSocket::isReceivingData() const {
    return m_socketStatus.isReceivingData();
}

std::string baseSocket::toString() const { return ""; }

void baseSocket::_resetSocket() {
    m_socketDescriptorWasSet = false;
    m_socketDescriptor = SocketFileDescriptor();
    m_socketStatus = ConnectionStatus();
}

}  /// namespace Communication
