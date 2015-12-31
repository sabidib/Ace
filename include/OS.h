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

#ifndef H_OS_H
#define H_OS_H

#include "GenHeader.h"
#include "baseSocket.h"
#include "SocketStructure.h"
#include "SocketFileDescriptor.h"

#include "ExceptionCreator.h"

namespace Communication {

/**
 * @brief      A simple wrapper class around the OS socket functions. This
 * implementation defines the unix OS functions. Detailed documentation
 * on these functions can be found for the standard unix socket functions.
 *
 * This means that the _socket(...) defined in this class is the same as
 * the unix socket(...) call.
 */
class OS {
   public:
    /**
     * @brief      Registers the socket with the file system.
     *
     * @param      socketToCreate_IN  A valid reference to a baseSocket
     * object.
     * @param  flags_IN           Any flags that could be passed to the
     * OperatingSystem call.
     *
     * return    returns true if the socket is sucessfully registered
     * @throws   MsgException Throws an exception if the operating system call
     * fails.
     */
    static bool _socket(baseSocket& socketToCreate_IN, INT flags_IN = 0);

    /**
     * @brief      Accepts a new connection on a given baseSocket object. This
     * calls will block unless setsockopt is set otherwise.
     *
     * @param      socketToAccceptOn_IN  A  valid, bound and
     * listening baseSocket.
     *
     * @return     Returns a pointer to the baseSocket accepted on the listening
     * socket.
     *
     * @throws   MsgException Throws an exception if the operating system call
     * fails
     */
    static baseSocket* _accept(baseSocket& socketToAccceptOn_IN);

    /**
     * @brief      Connects the socket to the destination described in the
     * baseSocket object.
     *
     * @param      SocketToConnect_IN  A valid, unconnected, and unbound
     * baseSocket.
     *
     * @return     return true if the socket is sucessfully connected,
     * false otherwise.
     *
     * @throws   MsgException Throws an exception if the operating system call
     * fails.
     */
    static bool _connect(baseSocket& SocketToConnect_IN);

    /**
     * @brief      Binds the socket to the given location on the local machine.
     *
     * @param      SocketToBind_IN  A valid, unbound and unconnected
     * baseSocket.
     *
     * @return     returns true if the socket was sucessfully bound.
     * @throws   MsgException Throws an exception if the operating system call
     * fails.
     */
    static bool _bind(baseSocket& SocketToBind_IN);

    /**
     * @brief      Sends data to a socket. This will block if the socket buffer
     * is full.
     *
     * @param  SocketToSend   A reference to a connected or
     * bound socket.
     * @param  array         A pointer to the data
     * @param  len           The length of the data to send in bytes
     * @param  flags         Any flags to set.
     *
     * @return     returns the number of bytes placed in the socket buffer.
     * @throws   MsgException Throws an exception if the operating system call
     * fails.
     */
    static UINT _send(baseSocket& SocketToSend, char* array, UINT len,
                      INT flags);

    /**
     * @brief      Receives data on a socket. This operation will block if
     * there is nothing to read. Unless the socket is set otherwise.
     *
     * @param  SocketToRecv  A reference to a bound or connected baseSocket.
     * @param  tmp           A pointer to a buffer to store the data
     * @param  len           The length of data to accept
     * @param  flags         Any flags to set.
     *
     * @return     returns the number of bytes placed in the tmp buffer.
     * @throws   MsgException   Throws an exception if the operating system call
     * fails.
     */
    static UINT _recv(baseSocket& SocketToRecv, char* tmp, UINT len, INT flags);

    /**
     * @brief      Shutdown the current socket in a manner specified by the
     * flags options.
     *
     * @param      SocketToShutdown  A reference to any valid assigned socket.
     * @param  flags             Flags to set.
     *
     * @return     return true on succesful shutdown of socket.
     * @throws   MsgException   Throws an exception if the operating system call
     * fails.
     */
    static bool _shutdown(baseSocket& SocketToShutdown, INT flags);

    /**
     * @brief      Sets the socket to listen mode so that it can accept new
     * connections.
     *
     * @param      SocketToListenOn  A reference to a valid and bound
     * baseSocket.
     * @param  backlog           the size of the connection backlog.
     *
     * @return          return true if the socket was sucesfully placed in
     * listen mode.
     *
     * @throws   MsgException   Throws an exception if the operating system call
     * fails.
     *
     */
    static bool _listen(baseSocket& SocketToListenOn, INT backlog);

    /**
     * @brief      Sets the socket options for a valid baseSocket.
     *
     * @param      Socket       a refernece to a valid  baseSocket
     * @param[in]  optionLevel  The options level.
     * @param[in]  optionName   The options name.
     * @param      setting      The a pointer to the options new value.
     * @param[in]  length       The length of the options value.
     *
     * @return     returns true if the socket option is succesfully set.
     * @throws   MsgException   Throws an exception if the operating system call
     * fails.
     */
    static bool _setsockopt(baseSocket& Socket, INT optionLevel, INT optionName,
                            void* setting, UINT length);

    /**
     * @brief      Returns the socket options for a valid baseSocket.
     *
     * @param      Socket       a refernece to a valid  baseSocket
     * @param[in]  optionLevel  The options level.
     * @param[in]  optionName   The options name.
     * @param[out] setting      An output pointer with the value of the option.
     * @param[out]  length       The length of the output value.
     *
     * @return     returns true if the socket option is succesfully set.
     * @throws   MsgException   Throws an exception if the operating system call
     * fails.
     */
    static bool _getsockopt(baseSocket& Socket, INT optionLevel, INT optionName,
                            void* setting, UINT* length);

    /**
     * @brief      Closes the socket defined by baseSocket. This may block if
     * the
     * socket still have remaining data to send.
     *
     * @param      SocketToClose  A reference to a valid baseSocket object.
     * @return     returns true if the socket is successfully close.
     * @throws   MsgException   Throws an exception if the operating system call
     * fails.
     */
    static bool _close(baseSocket& SocketToClose);

   private:
    static bool _setsockopt(INT fd, INT optionLevel, INT optionName,
                            void* setting, UINT length);
    static bool _getsockopt(INT fd, INT optionLevel, INT optionName,
                            void* setting, UINT* length);
};
}

#endif