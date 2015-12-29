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

#ifndef H_PORT_H
#define H_PORT_H

#include "GenHeader.h"

namespace Communication {

USHORT const DEFAULT_PORT_NUMBER = 0;

/**
 * @brief      Represents a port number.
 */
class Port {
   public:
    /**
     * @brief      Initializes the port to the default port number( 0 ) .
     */
    Port();
    /**
     * @brief      Initializes the port number as a host order port.
     *
     * @param[in]  port  a USHORT Host order port number.
     */
    Port(USHORT port);

    /**
     * @brief      Initializes the port number using an std::string
     * representing a host order integer.
     *
     * @param[in]  port  A string representing a hsot order integer.
     *
     * @throws   MsgException If the string cannot be converted, if it not
     * within the interger size or if it in not a valid ushort string.
     *
     */
    Port(std::string port);

    /**
     * @brief      Sets the port number as a host order port number.
     *
     * @param[in]  HostOrderPort  The USHORT host order port number.
     */
    void setPortH(USHORT HostOrderPort);

    /**
     * @brief      Sets the port number as a network order port number.
     *
     * @param[in]  NetworkOrderPort  The network order USHORT port number.
     */
    void setPortN(USHORT NetworkOrderPort);

    /**
     * @brief      Given a string for a host order port number, converts it
     * to a host order USHORT and sets it as a port number.
     *
     * @param[in]  StringIP  a string representing a valid USHORT.
     *
     * @throws   MsgException If the string cannot be converted, if it not
     * within the interger size or if it in not a valid ushort string.
     */
    void setPortS(std::string StringIP);

    /**
     * @brief      Returns the port number as host order USHORT.
     *
     * @return     a host order USHORT.
     */
    USHORT getPortH() const;

    /**
     * @brief      Returns the port number as network order USHORT.
     *
     * @return     a network order USHORT.
     */
    USHORT getPortN() const;

    /**
     * @brief      Returns representation of the host order port number in a
     * in a string.
     *
     * @return     an std::string representing the host order port number.
     */
    std::string getPortS() const;

    /**
     * @brief      Checks if the port number is valid.
     *
     * @return   true if the port number is valid, false otherwise
     */
    bool isValid() const;

    bool operator==(const Port& other) const {
        return this->m_portNumberN == other.m_portNumberN;
    }
    bool operator!=(const Port& other) const { return !(*this == other); }

   private:
    /// The host set as a network order integer
    USHORT m_portNumberN;
};
}
#endif
