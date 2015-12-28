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

#ifndef H_CLIENT_H
#define H_CLIENT_H

#include "GenHeader.h"

#include "SocketStructure.h"
#include "SocketFileDescriptor.h"
#include "baseSocket.h"
#include "baseGateway.h"

namespace Communication {

/**
 * @brief Represents an Internet client. The class is initialized with a
 * destination which can be then be connected to with Client::connect().
 *
 * Data can be sent with Client::send() and received with Client::receive().
 * A new socket can be set without the old one being destroyed by using
 * Client::setSocket(). Finally you can destroy a Client's socket by calling
 * Client::disconnect().
 *
 * When the Client object is destroyed it will delete the current socket
 * it is pointing to unless the socket has been explicitly set. Therefore
 * one must be careful when using Client::getSocket() as the socket may
 * be delete once Client goes out of scope. Functions such as 
 * Client::relinquishOwnership() and Client::transferOwnership() are useful
 * in coercing the Client to handle object destruction. 
 *
 */
class Client : baseGateway {
   public:
    Client(IP ip, Port portNo, UINT socketType = SOCK_STREAM,
           UINT familyType = AF_INET);
    Client(SocketStructure* connectionDestination);
    Client(baseSocket* connectionDestination);

    /**
     * @brief      Destroys the object and if m_doesOwnSocket is true, then it
     * will also delete the current socket.
     */
    ~Client();

    /**
     * @brief      Connects to socket stored in the object by calling the base
     * function baseGateway::createSocket and then connecting the socket with
     * baseGateway::connectSocket().
     *
     * @return     return true if sucesfully connected, false otherwise.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool connect();

    /**
     * @brief      Receives data from the connected socket. This call may block
     * if there is no data to receive. This function makes use of
     * baseGateway::receiveData().
     *
     *
     * @param[in]  lenToAccept  The length in bytes of data to accept
     * @param[in]  flags        Any flags to be used.
     *
     * @return     A pointer to a baseDataBuffer containing the received data.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     *
     */
    baseDataBuffer* receive(UINT lenToAccept = 256, INT flags = 0);

    /**
     * @brief      Sends data in the string to the connected socket. This call
     * may block if the send buffer is full. This function makes use of
     * baseGateway::sendData().
     *
     * @param[in]  data   The data to send.
     * @param[in]  flags  Any flags to set.
     *
     * @return     returns the number of bytes sent by the socket.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    UINT send(std::string data, INT flags = 0);

    /**
     * @brief      Sends the data in baseDataBuffer to the connected socket.
     * This call may block if the send buffer is full. This function makes
     * use of baseGateway::sendData().
     *
     * @param[in]  data   The data buffer to send.
     * @param[in]  flags  Any flags to set.
     *
     * @return     returns the number of bytes sent by the socket.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    UINT send(baseDataBuffer& data, INT flags = 0);

    /**
     * @brief      Disconnects the socket completely. This function can block
     * if there is still data in the socket buffer. This functions calls
     * baseGateway::closeSocket()
     *
     * @return     return true if the socket was successfully disconnected.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool disconnect();

    /**
     * @brief    Disconnects the socket completely but not before sending the
     *  data in the baseDataBuffer. This functions calls Client::send() and then
     *  baseGateway::closeSocket()
     *
     * @param[in] DataToSend The baseDataBuffer to send to the socket.
     *
     * @return   return true if the socket was successfully disconnected.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool disconnect(baseDataBuffer& DataToSend);

    /**
     * @brief    Disconnects the socket completely but not before sending the
     *  data in the DataToSend string. This functions calls Client::send() and
     *  then baseGateway::closeSocket()
     *
     * @param[in] DataToSend The std::string to send to the socket.
     *
     * @return   return true if the socket was successfully disconnected.
     *
     * @throws   MsgException An exception is thrown if any of the requirements
     * for the baseSocket object are not met, or if the operating system call
     * fails.
     */
    bool disconnect(std::string DataToSend);

    /**
     * @brief      Sets the socket for the client to connect to. The socket
     * being set must not be bound. The current socket is not destroyed or
     * disconnected.
     *
     * @param      destinationSocket  A reference to a valid socket.
     *
     * @return     return true if the socket was successfully set.
     */
    bool setSocket(baseSocket* destinationSocket);

    /**
     * @brief      Returns a pointer to the current socket.
     *
     * @return     returns the current socket.
     */
    baseSocket* getSocket();

    /**
     * @brief      Relinquishes ownership of the socket by setting
     * m_doesOwnSocket to false. This stops the socket object from being
     * deleted on object destructions.
     */
    void relinquishOwnership();
    /**
     * @brief      Gives ownership of the socket to the client by setting
     * m_doesOwnSocket to true. This forces the Client destructor to destroy
     * the object.
     *
     */
    void transferOwnership();

    /**
     * @brief      Checks if the Client owns the socket.
     *
     * @return     Returns true if the Client owns the socket, false otherwise.
     */
    bool doesOwnSocket();

   private:
    baseSocket* m_currentSocket;
    bool m_doesOwnSocket;
};
}

#endif
