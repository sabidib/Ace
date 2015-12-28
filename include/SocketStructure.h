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

#ifndef H_SOCKET_STRUCTURE_H
#define H_SOCKET_STRUCTURE_H

#include "GenHeader.h"

#include "IP.h"
#include "Port.h"

namespace Communication {

/**
 * @brief      Represents the basic information required to create a socket
 * this includes the IP, the port number, the type of socket and the family
 * of the socket.
 */
class SocketStructure {
    friend class OS;

   public:
    /**
     * @brief      Initializes the socket structure to an empty structure
     */
    SocketStructure();

    /**
     * @brief      Initializes the structure with the given parameters.
     *
     * @param[in]  IPAddress  The ip address of the socket
     * @param[in]  port       The port address of the socket
     * @param[in]  type       The type of socket as defined in "sys/socket.h"
     * @param[in]  family     The family of socket as defined in "sys/socket.h"
     * @throws   MsgException Throws an exception if any of the parameters are
     * invalid.
     */
    SocketStructure(IP IPAddress, Port port, UINT type, UINT family);

    /**
     * @brief      Sets the structure of the socket to the given parameters
     *
     * @param[in]  IPAddress  The ip address of the socket
     * @param[in]  port       The port address of the socket
     * @param[in]  type       The type of socket as defined in "sys/socket.h"
     * @param[in]  family     The family of socket as defined in "sys/socket.h"
     *
     * @throws   MsgException Throws an exception if any of the parameters are
     * invalid.
     */
    void setStructure(IP IPAddress, Port port, UINT type, UINT family);
    /**
     * @brief      Resets the structure to default port number, default IP,
     * family = -1 and type = -1.This will force the structure to fail is
     * isValid() is called.
     */
    void resetStructure();

    /**
     * @brief      Sets the port number of the structure
     *
     * @param[in]  set   The port number to set.
     * @throws   MsgException Throws an exception if the port number is invalid
     */
    void setPort(Port set);

    /**
     * @brief      Sets the IP address of the structure
     *
     * @param[in]  set   The IP address to set.
     * @throws   MsgExceptions Throws an exception if the IP address is invalid.
     */
    void setIP(IP set);

    /**
     * @brief      Sets the family of the structure
     *
     * @param[in]  set   The family to set.
     */
    void setFamily(UINT set);
    /**
     * @brief      Sets the type of the structure
     *
     * @param[in]  set   The type to set.
     */
    void setType(UINT set);

    /**
     * @brief      Gets the string representation of the IP address in the
     * structure.
     *
     * @return   returns the string of the IP address
     * @throws   MsgException throws an exception if the IP address of the
     * string is invalid.
     */
    std::string getIPS() const;

    /**
     * @brief      Returns the Port stored in the structure.
     *
     * @return     A Port object.
     */
    Port getPort() const;

    /**
     * @brief      Returns the IP address of the structure.
     *
     * @return     an IP address object.
     */
    IP getIP() const;

    /**
     * @brief      Returns the type of the structure as defined in
     * "sys/socket.h"
     *
     * @return     return a UINT representing the socket type
     */
    UINT getType() const;

    /**
     * @brief      Returns the family of the structure as defined in
     * "sys/socket.h"
     *
     * @return     return a UINT representing the socket family
     */
    UINT getFamily() const;

    /**
     * @brief      Checks if the port is valid.
     *
     * @return     return true if the port is valid, false otherwise.
     */
    bool isPortValid() const;
    /**
     * @brief      Checks if the IP is valid.
     *
     * @return   return true if IP is valid, false otherwise.
     */
    bool isIPValid() const;

    /**
     * @brief      Checks if the general structure is valid, this includes
     * checking
     * if the port and IP are valid.
     *
     * @return    true if the SocketStructure is valid, false otherwise.
     */
    bool isValid() const;

    /**
     * @brief      Returns the size in bytes of the sockaddr_in structure stored
     * in
     * the SocketStructure object.
     *
     * @return     the size in bytes of the structure
     */
    UINT getSize() const;

    /**
     * @brief      Returns a const pointer of to the sockaddr_in structure.
     *
     * @return     a sockadd_in structure.
     */
    const sockaddr_in* getInternalStructure() const;

   private:
    /**
     * @brief      updates the internal sock_add_in structure.
     */
    void updateStruct();

    IP m_ipAddress;
    Port m_port;

    // the connection type which can take values such as SOCK_STREAM and UDP
    UINT m_connectionType;
    // the family type which can take values such as AF_INT
    UINT m_family;
    // The heart of the code, the sockaddr_in structure
    sockaddr_in m_structure;
};
}
#endif
