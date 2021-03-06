//
// Ace - A c++ networking library
// Copyright (C) 2012, 2016 Samy Abidib
//
// This file is part of Ace.
//
// Ace is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Ace is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Ace.  If not, see <http://www.gnu.org/licenses/>.
//

#include "ConnectionStatus.h"

namespace Communication {

ConnectionStatus::ConnectionStatus()
    : m_isSendingData(false),
      m_isReceivingData(false),
      m_isListening(false),
      m_isBound(false),
      m_isConnectedToDestinationSocket(false),
      m_isConnected(false),
      m_status(DISCONNECTED) {}

bool ConnectionStatus::isSendingData() const { return m_isSendingData; }

bool ConnectionStatus::isReceivingData() const { return m_isReceivingData; }

bool ConnectionStatus::isListening() const { return m_isListening; }

bool ConnectionStatus::isBound() const { return m_isBound; }

bool ConnectionStatus::isConnected() const { return m_isConnected; }

bool ConnectionStatus::isAssigned() const { return m_isAssigned; }

void ConnectionStatus::setIsSendingData(bool in_isSendingData) {
    m_status = STATUS::SENDING;
    m_isSendingData = in_isSendingData;
}

void ConnectionStatus::setIsReceivingData(bool in_isReceivingData) {
    m_status = STATUS::RECEIVING;
    m_isReceivingData = in_isReceivingData;
}

void ConnectionStatus::setIsListening(bool in_isListening) {
    m_status = STATUS::LISTENING;
    m_isListening = in_isListening;
}

void ConnectionStatus::setIsBound(bool in_isBound) { m_isBound = in_isBound; }

void ConnectionStatus::setIsConnected(bool in_isConnected) {
    m_status = STATUS::CONNECTED;
    m_isConnected = in_isConnected;
}

void ConnectionStatus::setIsAssigned(bool in_isAssignedSocket) {
    m_isAssigned = in_isAssignedSocket;
}

STATUS ConnectionStatus::getStatus() const { return m_status; }
}
