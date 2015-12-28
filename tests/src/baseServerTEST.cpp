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


#ifdef TESTING
#ifdef SOCKET_TESTING

#include "baseServerTEST.h"

namespace {



TEST(testConstructor){
baseGateway* testGate = new baseGateway();
int testMaxBackLog = 100;
bool DataSemantic[MAX_CONNECTED_CLIENTS];


baseServer* test = new baseServer(testMaxBackLog, testGate);

CHECK(test->SourceSocket != 0);
CHECK_EQUAL(test->SourceSocket->GetIPAddressN(), LOCALHOST_NETWORK );
CHECK_EQUAL(test->SourceSocket->GetPortN(), SERVER_PORT);
CHECK_EQUAL(test->SourceSocket->GetTypeOfSocket(), SOCK_STREAM);
CHECK_EQUAL(test->SourceSocket->GetFamilyOfSocket(), AF_INET);

CHECK_EQUAL(test->m_MaxBackLog, testMaxBackLog);
CHECK_EQUAL(false, test->ServerIsUp);
CHECK_EQUAL(false, test->isListening);

for(int i = 0; i < MAX_CONNECTED_CLIENTS; i++){
DataSemantic[i] = false;
}
CHECK_ARRAY_EQUAL(DataSemantic, test->isSendingData, MAX_CONNECTED_CLIENTS);
CHECK_ARRAY_EQUAL(DataSemantic, test->isReceivingData, MAX_CONNECTED_CLIENTS);

for(int i = 0; i < MAX_CONNECTED_CLIENTS; i++){
CHECK(test->ConnectedClients[i] != 0);
CHECK_EQUAL( DEFAULT_SOCKET , test->ConnectedClients[i]->GetSocket() );
}

CHECK( test->ConnectionGateway != 0 );

}

TEST(testGetHostIPAddressS){
baseGateway* testGate = new baseGateway();
int testMaxBackLog = 100;
baseServer* test = new baseServer(testMaxBackLog, testGate);

std::string result1 = test->GetHostIPAddressS();

CHECK_EQUAL(LOCALHOST_STRING, result1);
}

TEST(testGetIPAddressN){
baseGateway* testGate = new baseGateway();
int testMaxBackLog = 100;
baseServer* test = new baseServer(testMaxBackLog, testGate);

INT result1 = test->GetHostIPAddressN();

CHECK_EQUAL(LOCALHOST_NETWORK, result1);
}

TEST(testStartServer){


}



TEST(testAddClient){
baseGateway* testGate = new baseGateway();
int testMaxBackLog = 100;
baseServer* test = new baseServer(testMaxBackLog, testGate);

baseClient* testClientList[MAX_CONNECTED_CLIENTS];

INT SocketAssignements[MAX_CONNECTED_CLIENTS];
UINT IPAssignements[MAX_CONNECTED_CLIENTS];
USHORT PortAssignements[MAX_CONNECTED_CLIENTS];
INT IndexOfClient[MAX_CONNECTED_CLIENTS];

bool IPAssignementsBool[MAX_CONNECTED_CLIENTS];
bool SocketAssignementsBool[MAX_CONNECTED_CLIENTS];
bool PortAssignementsBool[MAX_CONNECTED_CLIENTS];
bool AddedToClientList[MAX_CONNECTED_CLIENTS];

//Here we do all the assignments that are needed and we also check what is assigned and what isn't
//We also make sure that the AddClient function is actually called here
for(int i = 0; i < MAX_CONNECTED_CLIENTS; i++){
testClientList[i] = new baseClient(testGate);
SocketAssignements[i] = rand()%100 + 5;

while(SocketAssignements[i] == DEFAULT_SOCKET){
SocketAssignements[i] = rand()%100 + 5;
}

IPAssignements[i] = rand() % 42000000;
while(IPAssignements[i] == DEFAULT_IP){
IPAssignements[i] = rand()%65000 + 5;
}

PortAssignements[i] = rand() % 65000 + 5;

while(PortAssignements[i] == DEFAULT_PORT){
PortAssignements[i] = rand()%65000 + 5;
}

SocketAssignementsBool[i] =
testClientList[i]->m_SourceSocket->m_SocketID = SocketAssignements[i];
IPAssignementsBool[i] =
testClientList[i]->m_SourceSocket->m_SocketInfo->SetIP(IPAssignements[i]);
PortAssignementsBool[i] =
 testClientList[i]->m_SourceSocket->m_SocketInfo->SetPort(PortAssignements[i]);
AddedToClientList[i] =
test->AddClient((testClientList[i]->m_SourceSocket));
IndexOfClient[i] = test->m_LastIndexAdded;
}


for(int i = 0; i < MAX_CONNECTED_CLIENTS; i++){
	CHECK_EQUAL(SocketAssignementsBool[i], AddedToClientList[i]);
	CHECK_EQUAL(IPAssignementsBool[i], AddedToClientList[i]);
	CHECK_EQUAL(PortAssignementsBool[i], AddedToClientList[i]);
	if(SocketAssignementsBool[i]){
	CHECK_EQUAL(SocketAssignements[i], test->ConnectedClients[IndexOfClient[i]]->GetSocket());
	}
	if(IPAssignementsBool[i]){

	CHECK_EQUAL(IPAssignements[i], test->ConnectedClients[IndexOfClient[i]]->GetIPAddressN());
	CHECK_EQUAL(ntohl(IPAssignements[i]), test->ConnectedClients[IndexOfClient[i]]->GetIPAddressH() );
	}

if(PortAssignementsBool[i]){
	CHECK_EQUAL(PortAssignements[i], test->ConnectedClients[IndexOfClient[i]]->GetPortN() );
	CHECK_EQUAL(ntohs(PortAssignements[i]), test->ConnectedClients[IndexOfClient[i]]->GetPortH() );
}

}

}












}

#endif //SOCKET_TESTING defined



#endif //TESTING defined






