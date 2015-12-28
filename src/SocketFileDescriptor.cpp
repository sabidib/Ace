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

#include "SocketFileDescriptor.h"

namespace Communication {

SocketFileDescriptor::SocketFileDescriptor() {
    m_socketFileId = DEFAULT_SOCKET_UINT;
}
bool SocketFileDescriptor::setSocketID(UINT set) {
    m_socketFileId = set;
    return true;
}
UINT SocketFileDescriptor::getSocketID() const { return m_socketFileId; }
bool SocketFileDescriptor::isValid() const {
    return socketisValid(m_socketFileId);
}

bool SocketFileDescriptor::socketisValid(UINT Sock) const { return (Sock > 0); }
}