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

#ifndef H_PLATFORM_HEADER_H
#define H_PLATFORM_HEADER_H

#ifdef _WIN64
#include <WinSock2.h>
#include <ws2tcpip.h>
#endif

#ifdef _WIN32
#include <WinSock2.h>
#include <ws2tcpip.h>
#endif

#ifdef __APPLE__
#include "TargetConditionals.h"

#ifdef TARGET_OS_IPHONE
// iOS device
#endif

#ifdef TARGET_IPHONE_SIMULATOR
// iOS Simulator
#endif

#ifdef TARGET_OS_MAC
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <netinet/in.h>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>  // linux
#endif

#endif

#ifdef __linux
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>  // linux
#include <netdb.h>
#endif

#ifdef __unix  // all unices not caught above
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>

#endif

#ifdef __posix

#endif

enum PLATFORM {
    LINUX32 = 1,  /// 1

    LINUX64,  /// 2

    UNIX32,  /// 3

    UNIX64,  /// 4

    WIN32,  /// 5

    WIN64,  /// 6

    IOS,  /// 7

    MAC,  /// 8

    ANDROID32,  /// 9

    ANDROID64,  /// 10

    BLACKBERRY  /// 11
};

#endif
