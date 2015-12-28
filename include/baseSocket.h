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

#ifndef H_SOCK_H
#define H_SOCK_H

#include "GenHeader.h"
#include "SocketStructure.h"
#include "SocketFileDescriptor.h"
#include "ConnectionStatus.h"

namespace Communication {

/**
 * @brief      Represents a basic socket. This class combines the
 * SocketStructure and SocketFileDescriptors together and is the basic
 * unit of cppcom.
 */
class baseSocket {
   public:

    baseSocket();
    /**
     * @brief      Initializes a socket according to the given parameters
     *
     * @param[in]  IPAddress  The ip address of the socket
     * @param[in]  port       The port address of the socket
     * @param[in]  type       The type of socket as defined in "sys/socket.h"
     * @param[in]  family     The family of socket as defined in "sys/socket.h"
     * @throws   MsgException Throws an exception if any of the parameters are
     * invalid.
     */
    baseSocket(IP ip, Port portNo, UINT socketType, UINT familyType);

    /**
     * @brief      Initializes a socket according to a SocketStructure object.
     *
     * @param[in]  serverInfo  a valid SocketStructure object.
     */
    baseSocket(SocketStructure serverInfo);

    /**
    * @brief      Gets the string representation of the IP address in the
    * socket.
    *
    * @return   returns the string of the IP address
    * @throws   MsgException throws an exception if the IP address of the string
    * is invalid.
    */
    std::string getIPS() const;
    /**
      * @brief      Returns the Port stored in the socket.
      *
      * @return     A Port object.
      */
    Port getPort() const;
    /**
       * @brief      Returns the IP address of the socket.
       *
       * @return     an IP address object.
       */
    IP getIP() const;
    /**
       * @brief      Returns the type of the socket as defined in
     * "sys/socket.h"
       *
       * @return     return a UINT representing the socket type
       */
    UINT getType() const;
    /**
        * @brief      Returns the family of the socket as defined in
     * "sys/socket.h"
        *
        * @return     return a UINT representing the socket family
        */
    UINT getFamily() const;

    /**
     * @brief      Returns a reference to the SocketStructure.
     *
     * @return     a SocketStructure reference
     */
    SocketStructure* getSocketStructure();

    /**
     * @brief      Returns pointer to the file descriptor.
     *
     * @return   returns a SocketFileDescriptor
     */
    SocketFileDescriptor* getSocketFileDescriptor();

    /**
     * @brief      Sets the file descriptor for the socket
     *
     * @param[in]  socketFileDescriptor  a valid socket file descriptor.
     */
    void setSocketDescriptor(SocketFileDescriptor socketFileDescriptor);

    /**
     * @brief      Sets the socket structure for this socket.
     *
     * @param[in]  socketInfo  a valid SocketStructure object.
     */
    void setSocketStructure(SocketStructure socketInfo);

    /**
     * @brief      Checks if the sockets IP is valid
     *
     * @return     return true if the ip is valid false otherwise
     */
    bool isIPValid() const;
    /**
     * @brief      checks if the sockets Port is valid.
     *
     * @return     return true if the port is valid, false otherwise.
     */
    bool isPortValid() const;

    /**
     * @brief    Checks if the IP and port are valid. If the socket file
     * descriptor has been set, then it also checks if the socket file descriptor is valid.
     *
     * @return     returns true all IP and port and (in the case it is set) the
     * file descriptor as well.
     */
    bool isValid() const;

    /**
     * @brief      Checks if the socket has been assigned to a file descriptor.
     *
     * @return     returns true if it has been assigned, false otherwise.
     */
    bool isAssigned() const;
    /**
     * @brief      Checks if the socket has been set to listen.
     *
     * @return     returns true if it is listening, false otherwise
     */
    bool isListening() const;

    /**
     * @brief      Checks if the socket has been bound.
     *
     * @return     returns true if it is bound, false otherwise.
     */
    bool isBound() const;

    /**
     * @brief      Check if the socket has been connected.
     *
     * @return     returns true if it has been connected, false otherwise.
     */
    bool isConnected() const;

    /**
     * @brief      Checks if the socket is currently sending data.
     *
     * @return     returns true if the socket is sending data, false otherwise
     */
    bool isSendingData() const;

    /**
     * @brief      Checks if the socket is currently receiving data.
     *
     * @return     returns true if the socket is sending data, false otherwise.
     */
    bool isReceivingData() const;

    /**
     * @brief      Gets the complete status of the socket.
     *
     * @return     returns a STATUS enum representing the state of the socket.
     */
    STATUS getStatus() const;

    /**
     * @brief      Gets the complete connection status object.
     *
     * @return     Returns a connection status object that represents the
     * complete state of the socket.
     */
    ConnectionStatus* getConnectionStatus();

    /**
     * @brief      Creates a string representation of the socket.
     *
     * @return     Return a string representation of the socket.
     */
    std::string toString() const;

    /**
     * @brief    Resets the socket. Sets the socket descriptor to a default
     * object and sets the status to a new status, however it does not reset the
     * SocketStructure
     * object.
     */
    void _resetSocket();

   private:
    SocketStructure m_socketStructure;
    ConnectionStatus m_socketStatus;
    SocketFileDescriptor m_socketDescriptor;
    bool m_socketDescriptorWasSet;
};
}

#endif
