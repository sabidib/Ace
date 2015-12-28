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

#include "SocketStructure.h"

namespace Communication {

SocketStructure::SocketStructure() { resetStructure(); }

SocketStructure::SocketStructure(IP ipAddress, Port port, UINT type,
                                 UINT family) {
    setStructure(ipAddress, port, type, family);
}

void SocketStructure::resetStructure() {
    m_structure.sin_port = DEFAULT_PORT_NUMBER;
    m_structure.sin_addr.s_addr = DEFAULT_IP_ADDRESS;
    m_family = 0;
    m_connectionType = 0;
}

void SocketStructure::setStructure(IP ipAddress, Port port, UINT type,
                                   UINT family) {
    if (!ipAddress.isValid()) {
        throw MsgException("Invalid IP Address");
    }

    if (!port.isValid()) {
        throw MsgException("Invalid Port Address");
    }

    if (!(family <= AF_MAX)) {
        throw MsgException("Invalid family for socket structure.");
    }

    if (!(type <= 5)) {
        throw MsgException("Invalid type for socket structure;");
    }

    m_port = port;
    m_ipAddress = ipAddress;
    m_family = family;
    m_connectionType = type;
    updateStruct();
}

void SocketStructure::setPort(Port set) {
    if (set.isValid()) {
        m_port = set;
        updateStruct();
    } else {
        throw MsgException("Invalid Port");
    }
}

void SocketStructure::setIP(IP set) {
    if (set.isValid()) {
        m_ipAddress = set;
        updateStruct();
    } else {
        throw MsgException("Invalid IP");
    }
}
void SocketStructure::setFamily(UINT set) { m_family = set; }
void SocketStructure::setType(UINT set) { m_connectionType = set; }

std::string SocketStructure::getIPS() const { return m_ipAddress.getIPS(); }

void SocketStructure::updateStruct() {
    m_structure.sin_family = m_family;
    m_structure.sin_port = m_port.getPortN();
    m_structure.sin_addr.s_addr = m_ipAddress.getIPN();
    memset(&(m_structure.sin_zero), 0, 8);
}

Port SocketStructure::getPort() const { return m_port; }
IP SocketStructure::getIP() const { return m_ipAddress; }
UINT SocketStructure::getType() const { return m_connectionType; }
UINT SocketStructure::getFamily() const { return m_family; }
bool SocketStructure::isPortValid() const { return m_port.isValid(); }
bool SocketStructure::isIPValid() const { return m_ipAddress.isValid(); }
bool SocketStructure::isValid() const { return isPortValid() && isIPValid(); }
UINT SocketStructure::getSize() const { return sizeof(m_structure); }

const sockaddr_in* SocketStructure::getInternalStructure() const {
    return &m_structure;
}
}
