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

#ifndef CONNECTION_H
#define CONNECTION_H

#include "GenHeader.h"

#include "SocketStructure.h"
#include "SocketFileDescriptor.h"
#include "baseSocket.h"
#include "baseGateway.h"

namespace Communication {

/**
 * @brief     Represents the implementation of an internet server. This will bind the
 * given socket to the local machine. The server can be set to listening
 * mode by using the Server::startServer() and can wait for incoming
 * connections with Server::startAccepting(). Finally, the server can be
 * shutdown by using Server::shutdownServer();
 *
 * Ownership of the listening socket can be modified according to the
 * Server::relinquishOwnership() and Server::transferOwnership() functions.
 */
class Server : baseGateway {
   public:
    /**
     * @brief      Initializes the Server object using the toBind socket. The
     * socket must be valid and not connected.
     *
     * @param      toBind  The socket to use.
     */
    Server(baseSocket* toBind);
    Server(IP ip, Port portNo, UINT socketType = SOCK_STREAM,
           UINT familyType = AF_INET);
    Server(SocketStructure* connectionDestination);
    ~Server();

    bool setSocket(baseSocket* toBind);
    bool setSocket(IP ip, Port portNo, UINT socketType = SOCK_STREAM,
                   UINT familyType = AF_INET);
    bool setSocket(SocketStructure* connectionDestination);

    /**
     * @brief      Starts the server by attempting to bind the socket and set it
     * to listening mode. If the socket is already bound and listening, then it
     * will not change their state.
     *
     * @return     returns true if the server was successfully setup.
     *
     * @throws  MsgException Throws an exception if any of the baseGateway
     * functions call a system error.
     */
    bool startServer();

    /**
     * @brief      Attempts to accept a connection from the current socket.
     * the server must have been started, otherwise an exception is thrown.When
     * a client is accepted it is added to the internal client list and then
     * returned to the caller.This function may block if there are no clients
     * to accept.
     *
     * @return     returns the new client connection socket.
     *
     * @throws  MsgException Throws an exception if any of the baseGateway
     * functions call a system error.
     */
    baseSocket* startAccepting();

    /**
     * @brief      Shuts down the server by closing each connected socket and
     * then
     * closing the server socket. This function can block if any of the
     * connected sockets have data left to be received.
     *
     * @return     return true if all sockets have been successfully shutdown
     * and closed.
     *
     * @throws  MsgException Throws an exception if any of the baseGateway
     * functions call a system error.
     *
     */
    bool shutdownServer();  // Destroys all SocketObjects and nothing else,
                            // returns 1 on success

    /**
     * @brief      Returns a constant pointer to the servers listening socket.
     *
     * @return      returns a constant pointer to the baseSocket.
     */
    const baseSocket* getSocket();

    /**
     * @brief      Returns a pointer a vector of all the currently connected 
     * clients.
     *
     * @return     returns a pointer to a vector of baseSocket pointers.
     */
    std::vector<baseSocket*>* getClientList();

    /**
     * @brief      Relinquishes ownership of the socket by setting
     * m_doesOwnBoundSocket to false. This stops the Server from from being
     * deleting the socket on destruction.
     */
    void relinquishOwnership();
    /**
     * @brief      Gives ownership of the socket to the client by setting
     * m_doesOwnBoundSocket to true. This forces the Server destructor to
     * destroy
     * the object.
     *
     */
    void transferOwnership();

    /**
     * @brief      Checks if the Server owns the socket.
     *
     * @return     Returns true if the Server owns the socket, false otherwise.
     */
    bool doesOwnSocket();

   private:
    baseSocket* m_toBind;
    std::vector<baseSocket*> m_connectedClients;
    bool m_doesOwnBoundSocket;
    bool m_isServerUp;
};

}  /// namespace Communication

#endif
