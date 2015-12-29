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

#include "IP.h"

namespace Communication {

IP::IP() { m_ipAddress = DEFAULT_IP_ADDRESS; }

IP::IP(UINT ipAddress) { this->m_ipAddress = htonl(ipAddress); }

IP::IP(std::string ipAddress) { setIPS(ipAddress); }

bool IP::setIPH(UINT hostOrderIP) {
    this->m_ipAddress = htonl(hostOrderIP);
    return true;
}

bool IP::setIPN(UINT networkOrderIP) {
    m_ipAddress = networkOrderIP;
    return true;
}

UINT IP::getIPH() const { return ntohl(m_ipAddress); }

UINT IP::getIPN() const { return m_ipAddress; }

bool IP::setIPDomainName(std::string domainName, std::string service) {
    const char *hostname = domainName.c_str();
    char *ip = nullptr;
    int sockfd;
    struct addrinfo hints, *servinfo, *p;
    struct sockaddr_in *h;
    int rv;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;  // use AF_INET6 to force IPv6
    hints.ai_socktype = SOCK_STREAM;

    if ((rv = getaddrinfo(hostname, service.c_str(), &hints, &servinfo)) != 0) {
        std::cerr << "Error trying to get IP from domain name.";
        return false;
    }

    for (p = servinfo; p != NULL; p = p->ai_next) {
        h = reinterpret_cast<sockaddr_in *>(p->ai_addr);
        strcpy(ip, inet_ntoa(h->sin_addr));
    }

    freeaddrinfo(servinfo);
    std::string theIP(ip);
    return this->setIPS(theIP);
}

bool IP::setIPS(std::string stringIP) {
    UINT ohC;
    if (inet_pton(AF_INET, stringIP.c_str(), &ohC) == 1) {
        m_ipAddress = ohC;
        return true;
    } else {
        throw MsgException("Invalid StringIP.");
    }
}

std::string IP::getIPS() const {
    UINT ip = getIPH();
    unsigned char bytes[4];
    bytes[0] = ip & 0xFF;
    bytes[1] = (ip >> 8) & 0xFF;
    bytes[2] = (ip >> 16) & 0xFF;
    bytes[3] = (ip >> 24) & 0xFF;
    char buff[100];
    snprintf(buff, sizeof(buff), "%d.%d.%d.%d", bytes[3], bytes[2], bytes[1],
             bytes[0]);
    std::string buffAsStdStr = buff;
    return buffAsStdStr;
}

bool IP::isValid() const {
    return (m_ipAddress != DEFAULT_IP_ADDRESS && m_ipAddress != 0);
}
}
