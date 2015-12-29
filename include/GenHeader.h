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

#ifndef H_GENHEADER_H
#define H_GENHEADER_H

#include "exception/msgException.h"

/// This defines the Standard Temaplate Library there are defines in General
/// defines that control some of the includes that are in here
#include "STLHeader.h"

/// This defines the types used throughout the project.
#include "typedefs.h"

/// this defines any constants that are needed.
#include "GlobalConstants.h"

/// This defines any includes that must be done if compiling on a specific
/// platform
#include "PlatformHeader.h"

/// This defines program wide functions that are to be utilized
#include "FunctionHeaders.h"

static void print_bytes(const void *object, size_t size)
{
  size_t i;

  printf("[ ");
  for(i = 0; i < size; i++)
  {
    printf("%02x ", (reinterpret_cast<const unsigned char *>(object)) [i] & 0xff);
  }
  printf("]\n");
}



#endif
