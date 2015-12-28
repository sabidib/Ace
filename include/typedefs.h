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

#ifndef H_TYPEDEF_H
#define H_TYPEDEF_H

typedef uint32_t UINT;
typedef int32_t INT;
typedef unsigned short int USHORT;
typedef short SHORT;
typedef long LONG;

#ifdef _WIN64

#endif

#ifdef _WIN32

#endif

#ifdef __APPLE__
#ifdef TARGET_OS_IPHONE
// iOS device
#endif
#ifdef TARGET_IPHONE_SIMULATOR
// iOS Simulator
#endif
#ifdef TARGET_OS_MAC

#endif
#endif

#ifdef __linux

#endif

#ifdef __unix  // all unices not caught above

#endif

#ifdef __posix
// POSIX this... is NEVER going to happen
#endif

#endif