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

#include "Client.h"
#include "IP.h"
#include "Port.h"
#include "InternetSocket.h"

#include "UnitTest++/UnitTest++.h"

#ifdef TESTING
#ifdef SOCKET_TESTING

using namespace Communication;
using std::cout;

TEST(testisIPDestValid) {
    IP a = IP("127.0.0.1");
    Port b = Port(23451);
    InternetSocket* c = new InternetSocket(a, b);

    Client* test = new Client(c);
    CHECK_EQUAL(true, test->getSocket()->isIPValid());
    CHECK_EQUAL(true, test->getSocket()->isPortValid());
    delete c;
    delete test;
}

TEST(testIsValid) {
    IP a = IP("127.0.0.1");
    Port b = Port(23453);
    IP c = IP(-1);
    Port d = Port(2324);
    // std::cout  << c.getIPH();

    Client* test = new Client(a, b);

    try {
        Client* test2 = new Client(c, d);
    } catch (std::exception a) {
    }
    CHECK_EQUAL(true, test->getSocket()->isValid());
    CHECK_EQUAL(false, test->getSocket()->isConnected());
}

TEST(testSetDestinationSocket){

Client* test = new Client();

baseSocket* testSocket = new baseSocket();
baseSocketInfo* InfoHolder = new SocketStructure();

    UINT IP1 = 51649884;
    UINT IP2 = 15649685;
    UINT IP3 = 0;
    UINT IP4 = 45581;
    UINT IP5 = 25648;

    USHORT Port1 = 5584;
    USHORT Port2 = 48;
    USHORT Port3 = 0;
    USHORT Port4 = -123;
    USHORT Port5 = 239;
    UINT Port6 = -1;

    INT Family1 = AF_INET;
    INT Family2 = AF_INET;
    INT Family3 = AF_UNSPEC;
    INT Family4 = AF_APPLETALK;
    INT Family5 = -1;
    INT Family6 = 0;

    INT Type1 = SOCK_STREAM;
    INT Type2 = SOCK_DGRAM;
    INT Type3 = SOCK_RAW;
    INT Type4 = SOCK_SEQPACKET;
    INT Type5 = -1;

InfoHolder->ResetInfoStructure();
InfoHolder->SetInfo(IP1,Port1,Family1,Type1);
testSocket->SetSocketInfo(*InfoHolder);
INT result1 = test->SetDestinationSocket(*testSocket);

CHECK_EQUAL(true,result1);
CHECK(testSocket != test->m_DestinationSocket);
CHECK_EQUAL(testSocket->GetIPAddressS(),
test->m_DestinationSocket->GetIPAddressS());

InfoHolder->ResetInfoStructure();
InfoHolder->SetInfo(IP1,Port1,Family5,Type1);
testSocket->SetSocketInfo(*InfoHolder);
INT result2 =test->SetDestinationSocket(*testSocket);

CHECK_EQUAL(true, result2);
CHECK(testSocket != test->m_DestinationSocket);
CHECK(testSocket->GetIPAddressS() ==
test->m_DestinationSocket->GetIPAddressS());

InfoHolder->ResetInfoStructure();
InfoHolder->SetInfo(IP1,Port6,Family1,Type1);
testSocket->SetSocketInfo(*InfoHolder);
INT result3 = test->SetDestinationSocket(*testSocket);

CHECK_EQUAL(true, result3);
CHECK(testSocket != test->m_DestinationSocket);
CHECK(testSocket->GetPortN() == test->m_DestinationSocket->GetPortN());

InfoHolder->ResetInfoStructure();
InfoHolder->SetInfo(IP1,Port1,Family1,Type5);
testSocket->SetSocketInfo(*InfoHolder);
INT result4 = test->SetDestinationSocket(*testSocket);

CHECK_EQUAL(true , result4);
CHECK(testSocket != test->m_DestinationSocket);
CHECK(testSocket->GetIPAddressS() ==
test->m_DestinationSocket->GetIPAddressS());

InfoHolder->ResetInfoStructure();
InfoHolder->SetInfo(IP2,Port1,Family1,Type1);
testSocket->SetSocketInfo(*InfoHolder);
testSocket->m_isConnected = true;
INT result5 = test->SetDestinationSocket(*testSocket);

CHECK_EQUAL(false , result5);
CHECK(testSocket != test->m_DestinationSocket);
CHECK(testSocket->GetIPAddressS() !=
test->m_DestinationSocket->GetIPAddressS());

InfoHolder->ResetInfoStructure();
InfoHolder->SetInfo(IP2,Port1,Family1,Type1);
testSocket->SetSocketInfo(*InfoHolder);
testSocket->m_isBound = true;
INT result6 = test->SetDestinationSocket(*testSocket);

CHECK_EQUAL(false , result6);
CHECK(testSocket != test->m_DestinationSocket);
CHECK(testSocket->GetIPAddressS() !=
test->m_DestinationSocket->GetIPAddressS());

}

#endif  // SOCKET_TESTING defined

#endif  // TESTING defined
