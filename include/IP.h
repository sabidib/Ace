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

#ifndef H_IP_H
#define H_IP_H

#include "GenHeader.h"

namespace Communication {

UINT const DEFAULT_IP_ADDRESS = 1;

/**
 * @brief      Represents an IP address. The value can be set as a string,
 *  a network, or host integer.
 */
class IP {
   public:
    IP();
    /**
     * @brief      Constructor
     *
     * @param  ipAddress  A host order UINT representing the IP address.
     */
    IP(UINT ipAddress);
    IP(std::string ipAddress);

    /**
     * @brief      Sets the IP as host order UINT.
     *
     * @param  hostOrderIP  host order uINT to set
     *
     * @return     returns true if a valid host number has been provided
     * false otherwise.
     */
    bool setIPH(UINT hostOrderIP);

    /**
     * @brief      Sets the IP as network order UINT
     *
     * @param  networkOrderIP  The network order UINT to set.
     *
     * @return   return true if a valid network order host is set
     */
    bool setIPN(UINT networkOrderIP);

    /**
     * @brief      Sets the IP from the std::string
     *
     * @param  stringIP  a string representing a valid IP address
     * this can be in the octet format.
     * @throws     MsgException Throws an exception if the string is invalid.
     * @return     return true if the string was successfully parsed
     * and was a valid IP address otherwise, it return false.
     */
    bool setIPS(std::string stringIP);

    /**
     * @brief      Sets the IP from a domain name, this performs a
     * domain name lookup to get the IP address.
     *
     * @param  domainName  The domain name to get the IP for.
     * @param  service     The service to check IP for.
     * @throws     MsgException Throws an exception if the domain is invalid.
     * @return     Return true if the domain name was resolved.
     */
    bool setIPDomainName(std::string domainName, std::string service = "http");

    /**
     * @brief      Returns the host order IP address as a UINT.
     *
     * @return     Host order IP address.
     */
    UINT getIPH() const;
    /**
     * @brief      Returns the network order IP address as a UINT.
     *
     * @return     Network order IP address.
     */
    UINT getIPN() const;
    /**
     * @brief      Returns the string representing the IP address.
     *
     * @return     A std::string IP address.
     */
    std::string getIPS() const;

    /**
     * @brief      Checks if the IP address is valid, this means checking if the
     * IP address is set to DEFAULT_IP_ADRESS, 0 or -1.
     *
     * @return     return true if the IP is valid, false otherwise
     */
    bool isValid() const;

    bool operator==(const IP& other) const {
        return this->m_ipAddress == other.m_ipAddress;
    }
    bool operator!=(const IP& other) const { return !((*this) == other); }

   private:
    /// The host set as a network order integer
    UINT m_ipAddress;
};
}
#endif
