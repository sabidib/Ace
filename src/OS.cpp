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

#include "OS.h"

namespace Communication {

bool OS::_socket(baseSocket& socketToCreate_IN, INT flags_IN) {
    SocketFileDescriptor newSocketDescriptor;
    INT res = socket(static_cast<INT>(socketToCreate_IN.getFamily()),
                     static_cast<INT>(socketToCreate_IN.getType()), flags_IN);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        newSocketDescriptor.setSocketID(static_cast<UINT>(res));
        socketToCreate_IN.setSocketDescriptor(newSocketDescriptor);
        return true;
    }
}

baseSocket* OS::_accept(baseSocket& socketToAccceptOn_IN) {
    UINT nul;
    SocketFileDescriptor NewSocket;
    SocketStructure* clientInfo_OUT = new SocketStructure();
    INT res = accept(
        static_cast<INT>(
            socketToAccceptOn_IN.getSocketFileDescriptor()->getSocketID()),
        reinterpret_cast<sockaddr*>(&(clientInfo_OUT->m_structure)), &nul);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
    } else {
        NewSocket.setSocketID(static_cast<UINT>(res));
        baseSocket* SocketToRet = new baseSocket(*clientInfo_OUT);
        SocketToRet->setSocketDescriptor(NewSocket);
        return SocketToRet;
    }
}

bool OS::_connect(baseSocket& SocketToConnect_IN) {
    INT sockfd = static_cast<INT>(
        SocketToConnect_IN.getSocketFileDescriptor()->getSocketID());
    sockaddr* addrinfo = reinterpret_cast<sockaddr*>(
        &(SocketToConnect_IN.getSocketStructure()->m_structure));
    socklen_t datsize = SocketToConnect_IN.getSocketStructure()->getSize();
    INT res = connect(sockfd, addrinfo, datsize);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        return true;
    }
}

bool OS::_bind(baseSocket& SocketToBind_IN) {
    INT res =
        bind(static_cast<INT>(
                 SocketToBind_IN.getSocketFileDescriptor()->getSocketID()),
             reinterpret_cast<sockaddr*>(
                 &(SocketToBind_IN.getSocketStructure()->m_structure)),
             SocketToBind_IN.getSocketStructure()->getSize());
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        return true;
    }
}

UINT OS::_send(baseSocket& SocketToSend, char* array, UINT len, INT flags) {
    INT res = send(
        static_cast<INT>(SocketToSend.getSocketFileDescriptor()->getSocketID()),
        array, len, flags);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return 0;
    } else {
        return static_cast<UINT>(res);
    }
}

UINT OS::_recv(baseSocket& SocketToRecv, char* tmp, UINT len, INT flags) {
    INT res = recv(
        static_cast<INT>(SocketToRecv.getSocketFileDescriptor()->getSocketID()),
        tmp, len, flags);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return 0;
    } else {
        return static_cast<UINT>(res);
    }
}

bool OS::_shutdown(baseSocket& SocketToShutdown, INT flags) {
    INT res =
        shutdown(static_cast<INT>(
                     SocketToShutdown.getSocketFileDescriptor()->getSocketID()),
                 flags);

    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        return true;
    }
}

bool OS::_listen(baseSocket& SocketToListenOn, INT backlog) {
    INT res =
        listen(static_cast<INT>(
                   SocketToListenOn.getSocketFileDescriptor()->getSocketID()),
               backlog);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        return true;
    }
}

bool OS::_setsockopt(baseSocket& Socket, INT optionLevel, INT optionName,
                     void* setting, UINT length) {
    INT res = setsockopt(
        static_cast<INT>(Socket.getSocketFileDescriptor()->getSocketID()),
        optionLevel, optionName, setting, length);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        return true;
    }
}


bool OS::_getsockopt(baseSocket& Socket, INT optionLevel, INT optionName,
                     void* setting, UINT* length) {
    INT res = getsockopt(
        static_cast<INT>(Socket.getSocketFileDescriptor()->getSocketID()),
        optionLevel, optionName, setting, length);
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        return true;
    }
}


bool OS::_close(baseSocket& SocketToClose) {
    INT res = close(static_cast<INT>(
        SocketToClose.getSocketFileDescriptor()->getSocketID()));
    if (res == -1) {
        throw ExceptionCreator::getAnException(errno);
        return false;
    } else {
        return true;
    }
}
}