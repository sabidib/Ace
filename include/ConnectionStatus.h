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

#ifndef H_CONNECTION_STATUS_H
#define H_CONNECTION_STATUS_H

#include "GenHeader.h"

namespace Communication {

/**
 * @brief      A class that represents a connections status. This class is used
 * in the base socket class to describe the current state of the socket.
 */
class ConnectionStatus {
    friend class baseGateway;

   public:
    ConnectionStatus();

    bool isSendingData() const;
    bool isReceivingData() const;
    bool isListening() const;
    bool isBound() const;
    bool isConnected() const;
    bool isAssigned() const;
    STATUS getStatus() const;

   private:
    void setIsSendingData(bool isSendingData);
    void setIsReceivingData(bool isReceivingData);
    void setIsListening(bool isListening);
    void setIsBound(bool isBound);
    void setIsConnected(bool isConnected);
    void setIsAssigned(bool isAssigned);

    /// A state bool representing if the object is sending data.
    bool m_isSendingData;
    /// A state bool representing if the object is receiving data.
    bool m_isReceivingData;
    /// A state bool representing if the object is currently listening.
    bool m_isListening;
    /// A state bool representing if the object is currently bound the socket
    /// defined in m_DestinationSocket.
    bool m_isBound;
    /// A state bool representing if the object is currently connected to the
    /// socket defined in m_DestinationSocket.
    bool m_isConnectedToDestinationSocket;
    /// A state bool representing if the object is currently connected to the
    /// socket defined in m_ConnetedSocket.
    bool m_isConnected;
    /// A state bool represent if the object has a socketID currently assigned
    /// to it
    bool m_isAssigned;

    /// A detailed state on m_ConnectedSocket.
    STATUS m_status;
};
}

#endif