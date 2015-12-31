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

#ifndef H_BASE_GATEWAY_H
#define H_BASE_GATEWAY_H

#include "GenHeader.h"
#include "baseSocket.h"
#include "baseDataBuffer.h"
#include "OS.h"
namespace Communication {

/**
 * @brief      Defines the a base class for any kind of socket management
 * gateway.
 * This wraps the functions in the OS class to make them available for such
 * management gateways.
 */
class baseGateway {
   protected:
    /**
     * @brief      Registers the socket with the operating system.
     * The socket must be valid, unbound , not listening, and not sending or
     * receiving data. If it is connected, then it will be closed and
     * reconnected. This functions makes use of OS::_socket().
     *
     * @param      SocketToCreate  The reference to a valid socket to create.
     * @param  flags           any flags to use in connecting. If no flag is
     * set then flags=0
     *
     * @return     returns true on successful creation.
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool createSocket(baseSocket& SocketToCreate, INT flags /*=0*/);
    bool createSocket(baseSocket& SocketToCreate);

    /**
     * @brief      Binds a registered socket to the location outlined in the
     * baseSocket object. The socket must be valid, assigned, unbound, not
     * listening,
     * not connected, nor should it be sending or receiving data. This
     * function makes use of OS::_bind().
     *
     * @param      SocketToBind  A reference to a valid socket to bind.
     *
     * @return     return true on successful binding.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool bindSocket(baseSocket& SocketToBind);

    /**
     * @brief      Connects a socket to the destination stored in the baseSocket
     * object. The socket must be valid, unbound, not listening, not yet
     * connected, nor should it be sending or receiving any data. This function
     * uses OS::_connect().
     *
     * @param      SocketToConnect  A reference to a valid socket.
     *
     * @return     return true if the socket successfully connects.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool connectSocket(baseSocket& SocketToConnect);

    /**
     * @brief      Sets the socket to listen mode. The socket must be valid,
     * bound, not already listening , not connected nor should it be sending or
     * receiving data already. This function makes use of OS::_listen().
     *
     * @param      SocketToStartListening  A reference to a valid socket.
     *
     * @return     returns true if the socket is set to listening mode.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool listenForConnections(baseSocket& SocketToStartListening);

    /**
     * @brief      Accepts a connection on a socket and returns the new
     * connection. This function may block if the socket is set as a blocking
     * socket. The baseSocket object must be a valid, bound, listening,
     * unconnected socket that is not sending or receiving data. This function
     * makes use of OS::_accept() and OS::_setsockopt().
     *
     * @param      SocketToAcceptConnection  A valid reference to a baseSocket.
     *
     * @return     return a pointer to the new baseSocket connected, or a
     * nullptr if the socket returned was considered invalid.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    baseSocket* acceptConnection(baseSocket& SocketToAcceptConnection);

    /**
     * @brief      Sends the data found in the baseDataBuffer to the destination
     * outlined by the baseSocket object. The socket must be valid, unbound,
     * not listening and not already sending or receiving data. It must
     * be connected. This call may block if the buffer is full. The size of the
     * data in the buffer must be less than MAX_TO_SEND value. This function
     * makes use of OS::_send().
     *
     * @param      SocketToSend  A reference valid socket to send data on.
     * @param      Data          A reference to a valid baseDataBuffer object.
     * @param  FLAGS         Any flags to set. If no flags are set then
     * FLAGS=0
     *
     * @return     returns the number of bytes of data sent through the socket.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     *
     */
    UINT sendData(baseSocket& SocketToSend, baseDataBuffer& Data,
                  INT FLAGS /*=0*/);
    UINT sendData(baseSocket& SocketToSend, baseDataBuffer& Data);
    /**
     * @brief      Receives a baseDataBuffer of length lenToAccept on the socket
     * specified. The socket must be valid, unbound, not listening, and should
     * not be receiving or sending any data. It must be connected. This call
     * may block if there no data in the socket buffer. lenToAccept must be less
     * than the maximum buffer length. This functions makes use of OS::_recv()
     *
     * @param      SocketToReceive  A reference to a valid socket to receive
     * data on
     * @param  lenToAccept      The amount of data to receive. If not set
     * then lenToAccept=0.
     * @param  flags            Any flags to set. IF not set then flags=0.
     *
     * @return     return a baseDataBuffer object containing the received data.
     * It may also return nullptr if there is an error.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     *
     */
    baseDataBuffer* receiveData(baseSocket& SocketToReceive,
                                UINT lenToAccept /*= 256*/, INT flags /*= 0*/);
    baseDataBuffer* receiveData(baseSocket& SocketToReceive, UINT lenToAccept);
    baseDataBuffer* receiveData(baseSocket& SocketToReceive);

    /**
     * @brief      Closes the socket by shutting it down then closing. The
     * socket must be an valid and assigned socket. This call may block
     * if there is still data in the socket buffer. This functions calls
     * both OS::_shutdown() for the flags and makes use of OS::_close to
     * destroy the socket file descriptor.
     *
     * @param      SocketToClose  A reference to a valid socket.
     * @param  FLAGS          A flags to set for shutdown.
     *
     * @return     return true if the socket is successfully destroyed
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool closeSocket(baseSocket& SocketToClose, INT FLAGS = SHUT_RDWR);
};
}

#endif
