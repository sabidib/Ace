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






namespace
{
#ifdef TESTING
#ifdef SOCKET_TESTING

#include "baseGatewayTEST.h"


TEST(testCreateSocket)
{
    baseGateway* test = new baseGateway();
    baseSocket* testSocket = new baseSocket();
    baseSocketInfo* testSocketInfo = new baseSocketInfo();

    std::string teststr;



    UINT IP1 = 3232235621; ///192.0.0.101
    UINT IP2 = 953847861;  ///56.218.144.53
    UINT IP4 = 84984984;    ///5.16.196.152
    UINT IP5 = 3425648;     ///0.52.69.112
    UINT IP6 = 2130706433; ///127.0.0.1
    UINT IP7 = 2134512954; ///127.58.21.58

    short Port1 = 5584;
    short Port2 = 48;
    short Port3 = 0;
    short Port5 = 239;

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



    testSocketInfo->SetInfo(IP6,Port1,Family1, Type1);
    testSocket->SetSocketInfo(*testSocketInfo);
    INT result1 = test->CreateSocket(*testSocket);
    CHECK_EQUAL(true, result1);
    CHECK( testSocket->GetSocket() != DEFAULT_SOCKET);
    CHECK( testSocket->GetSocket() > -1);




}


TEST(testBindSocket){
     baseGateway* test = new baseGateway();
    baseSocket* testSocket = new baseSocket();
    baseSocketInfo* testSocketInfo = new baseSocketInfo();

    std::string teststr;



    UINT IP1 = 3232235621; ///192.0.0.101
    UINT IP2 = 953847861;  ///56.218.144.53
    UINT IP4 = 84984984;    ///5.16.196.152
    UINT IP5 = 3425648;     ///0.52.69.112
    UINT IP6 = 16777343; ///127.0.0.1
    UINT IP7 = 2134512954; ///127.58.21.58

    short Port1 = 5584;
    short Port2 = 48;
    short Port3 = 0;
    short Port5 = 239;

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


testSocketInfo->SetInfo((IP6),Port1,Family1, Type1);
testSocket->SetSocketInfo(*testSocketInfo);
INT result1 = test->CreateSocket(*testSocket);
CHECK_EQUAL(true, result1);
CHECK( testSocket->GetSocket() != DEFAULT_SOCKET);
CHECK( testSocket->GetSocket() > -1);

INT result2 = test->BindSocket(*testSocket);
CHECK_EQUAL(true,result2);

}


TEST(testListenForConnections){
     baseGateway* test = new baseGateway();
    baseSocket* testSocket = new baseSocket();
    baseSocketInfo* testSocketInfo = new baseSocketInfo();
    baseServer* testServer = new baseServer(20, test);
    std::string teststr;



    UINT IP1 = 3232235621; ///192.168.0.101
    UINT IP2 = 1694542016;  ///101.0.168.192
    UINT IP4 = 84984984;    ///5.16.196.152
    UINT IP5 = 3425648;     ///0.52.69.112
    UINT IP6 = 2130706433; ///127.0.0.1
    UINT IP7 = 2134512954; ///127.58.21.58

    USHORT  Port1 = htons(5584);
    short Port2 = 26658;
    short Port3 = 0;
    short Port5 = 239;

    INT Family1 = PF_INET;
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

    INT result1 = testSocketInfo->SetInfo(0,Port1,Family2,Type1);
    CHECK_EQUAL(true, result1);

    INT result4 = test->CreateSocket(*(testServer->SourceSocket));
    CHECK_EQUAL(true, result4);

    INT result2 = test->BindSocket(*(testServer->SourceSocket));
    CHECK_EQUAL(true,result2);

    INT result3 = test->ListenForConnections(*testServer);
    CHECK_EQUAL(true,result3);
}

TEST(testAcceptandConnectConnection){
     baseGateway* test = new baseGateway();
    baseSocket* testSocket = new baseSocket();
    baseSocket* testSocket2 = new baseSocket();
    baseSocketInfo* testSocketInfo = new baseSocketInfo();
    baseSocketInfo* testSocketInfo2 = new baseSocketInfo();
    baseServer* testServer = new baseServer(20, test);
    baseClient* testClient = new baseClient(test);

    std::string teststr;



    UINT IP1 = 3232235621; ///192.168.0.101
    UINT IP2 = 1694542016;  ///101.0.168.192
    UINT IP4 = 84984984;    ///5.16.196.152
    UINT IP5 = 3425648;     ///0.52.69.112
    UINT IP6 = INADDR_ANY; ///127.0.0.1 in big endian mode
    UINT IP7 = 16777343; ///127.0.0.1 in little endian mode

    USHORT  Port1 = 53269;
    short Port2 = 26658;
    short Port3 = 0;
    short Port5 = 239;

    INT Family1 = PF_INET;
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

    INT result1 = testServer->SourceSocket->m_SocketInfo->SetInfo(IP6,Port1,Family2,Type1);
    CHECK_EQUAL(true, result1);

    INT result4 = test->CreateSocket(*(testServer->SourceSocket));
    CHECK_EQUAL(true, result4);

    INT result2 = test->BindSocket(*(testServer->SourceSocket));
    CHECK_EQUAL(true,result2);

    INT result3 = test->ListenForConnections(*testServer);
    CHECK_EQUAL(true,result3);

    INT result5 = test->AcceptConnection(*testServer);
    CHECK_EQUAL(true,result5);


    INT result6 = test->CloseSocket(*(testServer->SourceSocket),0);
    CHECK_EQUAL(true, result6);


    INT result7 = test->CloseSocket(*(testServer->ConnectedClients[0]),0);
    CHECK_EQUAL(true,result7);


}

TEST(testSendDataAndReceiveDataFromServer){
     baseGateway* test = new baseGateway();
    baseSocket* testSocket = new baseSocket();
    baseSocketInfo* testSocketInfo = new baseSocketInfo();
    baseServer* testServer = new baseServer(20, test);

    std::string teststr;



    UINT IP1 = 3232235621; ///192.168.0.101
    UINT IP2 = 1694542016;  ///101.0.168.192
    UINT IP4 = 84984984;    ///5.16.196.152
    UINT IP5 = 3425648;     ///0.52.69.112
    UINT IP6 = INADDR_ANY; ///127.0.0.1 in big endian mode
    UINT IP7 = 16777343; ///127.0.0.1 in little endian mode

    USHORT  Port1 = 53269;
    short Port2 = 26658;
    short Port3 = 0;
    short Port5 = 239;

    INT Family1 = PF_INET;
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

    INT result1 = testServer->SourceSocket->m_SocketInfo->SetInfo(IP6,Port1,Family2,Type1);
    CHECK_EQUAL(true, result1);

    INT result4 = test->CreateSocket(*(testServer->SourceSocket));
    CHECK_EQUAL(true, result4);

    INT result2 = test->BindSocket(*(testServer->SourceSocket));
    CHECK_EQUAL(true,result2);

    INT result3 = test->ListenForConnections(*testServer);
    CHECK_EQUAL(true,result3);

    INT result5 = test->AcceptConnection(*testServer);
    CHECK_EQUAL(true,result5);





    baseDataBuffer* DataToSend = new baseDataBuffer();
    char data [20];
    srand(10);
    for(int i = 0; i < 20; i++){
        data[i] = i+5;
    }


    DataToSend->setByteArray(data,20);

    INT resultA =  test->SendData(*testServer,0,*DataToSend,0);
    CHECK_EQUAL(DataToSend->GetSizeOfData(), resultA);



    INT result7 = test->CloseSocket((*testServer->ConnectedClients[0]),0);
    CHECK_EQUAL(true,result7);




    INT result8 = test->AcceptConnection(*testServer);
    CHECK_EQUAL(true, result8);

    INT result9 = test->ReceiveData(*testServer,1);
    CHECK_EQUAL(true,result9);





    INT result10 = test->CloseSocket((*testServer->ConnectedClients[1]),0);
    INT result6 = test->CloseSocket((*testServer->SourceSocket),0);
    CHECK_EQUAL(true, result6);



    for(int i = 0; i < result9; i ++)
    cout << testServer->m_data[1].getByteArray()[i];


}








#endif //SOCKET_TESTING defined

#endif //TESTING defiend




}




