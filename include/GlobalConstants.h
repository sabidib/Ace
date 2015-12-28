/* * Ace - A c++ networking library
 * Copyright (C) 2012, 2016 Samy Abidib
 *
 * This file is part of Ace.
 *
 * Ace is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Ace is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Ace.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef H_GLOBAL_CONSTANTS
#define H_GLOBAL_CONSTANTS

#include "PlatformHeader.h"

namespace Communication {

UINT const MAX_BUFFER_LENGTH = 65536;

INT const DEFAULT_CLIENTTYPE = SOCK_STREAM;
INT const DEFAULT_CLIENTFAMILY = AF_INET;

std::string const LOCALHOST_STRING = "127.0.0.1";
UINT const LOCALHOST_HOST = 16820416;  /// 127.0.0.1
INT const MAX_TO_SEND = 65536;
INT const SERVER_PORT_STRING = "12030" INT const MAX_BACKLOG = 20;

enum STATUS {
    CONNECTED = 2,
    DISCONNECTED,
    TIMEDOUT,
    WAITING,
    SENDING,
    RECEIVING,
    LISTENING
};
}

#endif
