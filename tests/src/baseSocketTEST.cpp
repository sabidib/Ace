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

#include "baseSocketTEST.h"

#ifdef TESTING
#ifdef SOCKET_TESTING

namespace
{

TEST(testConstructor)
{
    baseSocket* test = new baseSocket();

    CHECK_EQUAL(-1, test->GetSocket());
    CHECK_EQUAL(false, test->isConnected());
    CHECK_EQUAL(false, test->isBound());
    CHECK_EQUAL(false, test->isSendingData());

}

TEST(testGetIPAddressS)
{
    baseSocket* test = new baseSocket();

    baseSocketInfo* InfoHolder = new baseSocketInfo();

    std::string teststr;
    UINT IP1 = 3232235621;
    UINT IP2 = 953847861;
    UINT IP3 = 2130706433;
    UINT IP4 = 84984984;
    UINT IP5 = 3425648;


    short Port1 = 5584;
    short Port2 = 48;
    short Port3 = 0;
    short Port4 = -123;
    short Port5 = 239;
    short Port6 = -1;

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

    INT result1 =  InfoHolder->SetInfo(IP1,Port1,Family1,Type1);
    CHECK_EQUAL(PASS,result1);

    CHECK_EQUAL(InfoHolder->GetIPAddressN(), IP1);
    CHECK_EQUAL(InfoHolder->GetPortN(), Port1);
    CHECK_EQUAL(InfoHolder->GetFamilyOfSocket() , Family1);
    CHECK_EQUAL(InfoHolder->GetTypeOfSocket(), Type1);

    test->SetSocketInfo(*InfoHolder);

    teststr = test->GetIPAddressS();
    CHECK_EQUAL("192.168.0.101", teststr);





    InfoHolder->ResetInfoStructure();
    INT result2 = InfoHolder->SetInfo(IP2,Port1,Family1,Type1);
    CHECK_EQUAL(PASS,result2);

    CHECK_EQUAL(InfoHolder->GetIPAddressN(), IP2);
    CHECK_EQUAL(InfoHolder->GetPortN(), Port1);
    CHECK_EQUAL(InfoHolder->GetFamilyOfSocket() ,Family1);
    CHECK_EQUAL(InfoHolder->GetTypeOfSocket(), Type1);


    test->SetSocketInfo(*InfoHolder);

    teststr= test->GetIPAddressS();
    CHECK_EQUAL("56.218.144.53", teststr);



    INT result3 = InfoHolder->SetInfo(IP3,Port1,Family1,Type1);
    CHECK_EQUAL(PASS,result3);

    CHECK_EQUAL(InfoHolder->GetIPAddressN(), IP3);
    CHECK_EQUAL(InfoHolder->GetPortN(), Port1);
    CHECK_EQUAL(InfoHolder->GetFamilyOfSocket() , Family1);
    CHECK_EQUAL(InfoHolder->GetTypeOfSocket(), Type1);


    test->SetSocketInfo(*InfoHolder);

    teststr = test->GetIPAddressS();
    CHECK_EQUAL("127.0.0.1", teststr);








}


TEST(testisIPValid)
{
    baseSocket* test = new baseSocket();

    baseSocketInfo* InfoHolder = new baseSocketInfo();

    UINT IP1 = 1694542016;
    UINT IP2 = 59595954;
    UINT IP3 = 2130706433;
    INT IP4 = 959595959595;
    INT IP5 = 9595639963;


    short Port1 = 5584;
    short Port2 = 48;
    short Port3 = 0;
    short Port4 = -123;
    short Port5 = 239;
    short Port6 = -1;

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
    INT result1 =  InfoHolder->SetInfo(IP1,Port1,Family1,Type1);
    CHECK_EQUAL(PASS,result1);

    CHECK_EQUAL(InfoHolder->GetIPAddressN(), IP1);
    CHECK_EQUAL(InfoHolder->GetPortN(), Port1);
    CHECK_EQUAL(InfoHolder->GetFamilyOfSocket() , Family1);
    CHECK_EQUAL(InfoHolder->GetTypeOfSocket(), Type1);

    test->SetSocketInfo(*InfoHolder);

    CHECK_EQUAL(true, test->isIPValid());

    InfoHolder->ResetInfoStructure();

    INT result2 = InfoHolder->SetInfo(IP2,Port1,Family1,Type1);
    CHECK_EQUAL(PASS,result2);

    CHECK_EQUAL(InfoHolder->GetIPAddressN(),IP2);
    CHECK_EQUAL(InfoHolder->GetPortN(), Port1);
    CHECK_EQUAL(InfoHolder->GetFamilyOfSocket() ,Family1);
    CHECK_EQUAL(InfoHolder->GetTypeOfSocket(), Type1);


    test->SetSocketInfo(*InfoHolder);

    CHECK_EQUAL(true, test->isIPValid());

    InfoHolder->ResetInfoStructure();
    INT result3 = InfoHolder->SetInfo(IP3,Port1,Family1,Type1);
    CHECK_EQUAL(PASS,result3);

    CHECK_EQUAL(InfoHolder->GetIPAddressN(), IP3);
    CHECK_EQUAL(InfoHolder->GetPortN(), Port1);
    CHECK_EQUAL(InfoHolder->GetFamilyOfSocket() , Family1);
    CHECK_EQUAL(InfoHolder->GetTypeOfSocket(), Type1);


    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(test->isIPValid(), true);


    InfoHolder->ResetInfoStructure();

    INT result4 = InfoHolder->SetIP(IP4);
    CHECK_EQUAL(PASS,result4);

    CHECK_EQUAL(InfoHolder->GetIPAddressN(), IP4);


    test->SetSocketInfo(*InfoHolder);

    CHECK_EQUAL(test->isIPValid(), true);

}



TEST(testSetSocketInfo)
{
    baseSocket* test = new baseSocket();
    baseSocketInfo* InfoHolder = new baseSocketInfo();
    UINT IP1 = 1694542016;
    UINT IP2 = 8484984;
    UINT IP3 = 2130706433;
    UINT IP4 = 8469;
    UINT IP5 = 25648;


    InfoHolder->ResetInfoStructure();
    INT result5 = InfoHolder->SetIP(IP5);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result5);
    bool boolresult5 = test->isIPValid();
    CHECK_EQUAL(boolresult5, true);


    InfoHolder->ResetInfoStructure();
    INT result1 = InfoHolder->SetIP(IP1);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result1);
    bool boolresult1 = test->isIPValid();

    CHECK_EQUAL(boolresult1 , true);



    InfoHolder->ResetInfoStructure();
    INT result2 = InfoHolder->SetIP(IP2);

    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result2);
    bool boolresult2 = test->isIPValid();
    CHECK_EQUAL(boolresult2 , true);


    InfoHolder->ResetInfoStructure();
    INT result3 = InfoHolder->SetIP(IP3);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS, result3);
    bool boolresult3 = test->isIPValid();
    CHECK_EQUAL(boolresult3 , true);


    InfoHolder->ResetInfoStructure();
    INT result4 = InfoHolder->SetIP(IP4);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result4);
    bool boolresult4 = test->isIPValid();
    CHECK_EQUAL(boolresult4 , true);



}



TEST(testGetIPAddressH)
{

    baseSocket* test = new baseSocket();
    baseSocketInfo* InfoHolder = new baseSocketInfo();
   UINT IP1 = 3232235621;
   std::cout << "------------------++++" << IP1 << "++++------";
    UINT IP1host = 1694542016;
    UINT IP2 = 145478999996;
    UINT IP3 = 2130706433;
    UINT IP4 = 2515468; //0.38.98.12 to host should be
    UINT IP4host = 207758848;
    UINT IP5 = 123456; //0.1.226.64 to host should be
    UINT IP5host = 1088553216;
    UINT IP6 = -25648;


    InfoHolder->ResetInfoStructure();
    INT result5 = InfoHolder->SetIP(IP5);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result5);


    result5 = test->GetIPAddressH();
    CHECK_EQUAL(result5, IP5host );


    InfoHolder->ResetInfoStructure();
    INT result1 = InfoHolder->SetIP(IP1);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result1);

    result1 = test->GetIPAddressH();
    CHECK_EQUAL(result1, IP1host );





    InfoHolder->ResetInfoStructure();
    INT result2 = InfoHolder->SetIP(IP2);

    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(true,result2);
    bool boolresult2 = test->isIPValid();
    CHECK_EQUAL(boolresult2 , true );


    InfoHolder->ResetInfoStructure();
    INT result3 = InfoHolder->SetIP(IP3);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result3);
    bool boolresult3 = test->isIPValid();
    CHECK_EQUAL(boolresult3 , true);


    InfoHolder->ResetInfoStructure();
    INT result4 = InfoHolder->SetIP(IP4);
    test->SetSocketInfo(*InfoHolder);
    CHECK_EQUAL(PASS,result4);
    bool boolresult4 = test->isIPValid();
    CHECK_EQUAL(boolresult4 , true);



}


TEST(testGetIPAddressN){

    baseSocket* test = new baseSocket();
    baseSocketInfo* InfoHolder = new baseSocketInfo();
    UINT IP1 = 3232235621;
    UINT IP2 = 145478999996;

    InfoHolder->SetIP(IP1);
    test->SetSocketInfo(*InfoHolder);
    INT result1 = test->GetIPAddressN();
    CHECK_EQUAL(IP1,result1);
    InfoHolder->ResetInfoStructure();

    InfoHolder->SetIP(IP2);
    test->SetSocketInfo(*InfoHolder);
    INT result2 = test->GetIPAddressN();
    CHECK_EQUAL(IP2,result2);

}


TEST(testGetPortH){
    baseSocket* test = new baseSocket();
    baseSocketInfo* InfoHolder = new baseSocketInfo();
    INT Port1 = 943;
    INT Port2 = 4934;
    INT Port3 = -1232;
    UINT Port4 = 65535;
    INT Port4Host = 256;

    InfoHolder->SetPort(Port1);
    test->SetSocketInfo(*InfoHolder);
    USHORT result1 = test->GetPortH();
    CHECK_EQUAL(ntohs(Port1), result1);


    InfoHolder->ResetInfoStructure();
    InfoHolder->SetPort(Port2);
    test->SetSocketInfo(*InfoHolder);
    USHORT result2 = test->GetPortH();
    CHECK_EQUAL(ntohs(Port2),result2);


    InfoHolder->ResetInfoStructure();
    InfoHolder->SetPort(Port3);
    test->SetSocketInfo(*InfoHolder);
    USHORT result3 = test->GetPortH();
    CHECK_EQUAL(ntohs(1), result3);

    InfoHolder->ResetInfoStructure();
    InfoHolder->SetPort(Port4);
    test->SetSocketInfo(*InfoHolder);
    UINT result4 = test->GetPortH();
    CHECK_EQUAL(ntohs(Port4), result4);

}


TEST(testGetSizeOfInfoStructure){
    baseSocket* test = new baseSocket();
    baseSocketInfo* InfoHolder = new baseSocketInfo();
    test->SetSocketInfo(*InfoHolder);

    INT result1 = test->GetSizeOfInfoStructure();
    CHECK_EQUAL(sizeof(struct sockaddr_in),result1);
}

TEST(testGetSocket){
baseSocket* test = new baseSocket();
INT socket1 = 1;
INT socket2 = 3;
INT socket3 = -232;
INT socket4 = 0;
INT socket5 = 2323232;


test->SetSocket(socket1);
CHECK_EQUAL(socket1, test->GetSocket());


test->SetSocket(DEFAULT_SOCKET);
test->SetSocket(socket2);
CHECK_EQUAL(socket2, test->GetSocket());


test->SetSocket(DEFAULT_SOCKET);
test->SetSocket(socket3);
CHECK_EQUAL(DEFAULT_SOCKET, test->GetSocket());


test->SetSocket(DEFAULT_SOCKET);
test->SetSocket(socket4);
CHECK_EQUAL(socket4, test->GetSocket());


test->SetSocket(DEFAULT_SOCKET);
test->SetSocket(socket5);
CHECK_EQUAL(socket5, test->GetSocket());


}







}

#endif //SOCKET_TESTING defined



#endif //TESTING defined







