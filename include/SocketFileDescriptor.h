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

#ifndef H_SOCKET_FILE_DESCRIPTOR_H
#define H_SOCKET_FILE_DESCRIPTOR_H
#include "GenHeader.h"
namespace Communication {

UINT const DEFAULT_SOCKET_UINT = 0;


/**
 * @brief      Represents a Socket's file descriptor.
 */
class SocketFileDescriptor {
   public:
    /**
     * @brief      Initializes an empty socket file descriptor with an invalid 
     * files descriptor
     */
    SocketFileDescriptor();

    /**
     * @brief      Sets the files descriptor for the object
     *
     * @param  set   a UINT representing the socket
     *
     * @return     return true if the socket is sucessfully set
     */
    bool setSocketID(UINT set);

    /**
     * @brief      Returns the UINT representing the socket file descriptor
     *
     * @return     A UINT socket file descriptor
     */
    UINT getSocketID() const;
    /**
     * @brief      Checks if the sock is valid ( getSocketID() > 0)
     *
     * @return     returns true if the socket file descriptor is valid.
     */
    bool isValid() const;

   private:
    bool socketisValid(UINT Sock) const;
    UINT m_socketFileId;
};


const SocketFileDescriptor DEFAULT_SOCKET_FILE_DESCRIPTOR;

}
#endif
