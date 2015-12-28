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

#ifndef H_FUNCTIONHEADERS_H
#define H_FUNCTIONHEADERS_H

#include "GenHeader.h"

#ifdef _WIN32

inline const char* inet_ntop(int af, const void* src, char* dst, int cnt) {
    struct sockaddr_in srcaddr;

    memset(&srcaddr, 0, sizeof(struct sockaddr_in));
    memcpy(&(srcaddr.sin_addr), src, sizeof(srcaddr.sin_addr));

    srcaddr.sin_family = af;
    if (WSAAddressToString((struct sockaddr*)&srcaddr,
                           sizeof(struct sockaddr_in), 0, dst,
                           (LPDWORD)&cnt) != 0) {
        DWORD rv = WSAGetLastError();
        printf("WSAAddressToString() : %d\n", rv);
        return NULL;
    }
    return dst;
}

#endif

#endif
