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

#include "Port.h"
namespace Communication {

Port::Port() { this->m_portNumberN = DEFAULT_PORT_NUMBER; }

Port::Port(USHORT port) { m_portNumberN = htons(port); }

Port::Port(std::string port) { setPortS(port); }

USHORT Port::getPortH() const { return ntohs(m_portNumberN); }

USHORT Port::getPortN() const { return m_portNumberN; }

std::string Port::getPortS() const {
    std::stringstream k;
    k << getPortH();
    return k.str();
}

bool Port::isValid() const { return (m_portNumberN != DEFAULT_PORT_NUMBER); }

void Port::setPortH(USHORT HostOrderPort) {
    m_portNumberN = htons(HostOrderPort);
}

void Port::setPortN(USHORT NetworkOrderPort) {
    m_portNumberN = NetworkOrderPort;
}

void Port::setPortS(std::string stringPort) {
    USHORT res = DEFAULT_PORT_NUMBER;
    try {
        res = std::stoi(stringPort);
    } catch (const std::invalid_argument& err) {
        throw MsgException("Could not convert string.");
    } catch (const std::out_of_range& err) {
        throw MsgException("String is not within interger size.");
    }
    m_portNumberN = res;
}


    bool Port::operator==(const Port& other) const {
        return this->m_portNumberN == other.m_portNumberN;
    }



    bool Port::operator!=(const Port& other) const { return !(*this == other); }



}
