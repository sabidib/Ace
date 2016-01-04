#include "Client.h"
#include "Server.h"
#include <thread>
#include <future>



using namespace Communication;


int main(){

	std::string ip = "127.0.0.1";
	std::string port = "200";

	// IPs and Ports are converted to their own objects
	Server* testServer = new Server(ip,port); 

	//Setup the serevr and bind the sockets
	testServer->startServer();
	
	//Ask the server to start accepting
	auto aClientToAccept = std::async(&Server::startAccepting, testServer); 

	//Create a new client pointing to our server
	Client* aClient = new Client(ip,port);
	
	//Try to connect to the server
	aClient->connect();
	
	//The server should accept the new client
	//We ask the future for the return value and 
	baseSocket* theClientOnServer = aClientToAccept.get();
	Client* serversClientConnect = new Client(theClientOnServer);


	//This is the data we're going to send
	std::string toSend = "Hello World!";

	std::cout << "Sending " << toSend << std::endl;
	//Stuff it into a data buffer
	baseDataBuffer dataToSend(toSend);

	//Ask the client to send it asynchronously
	auto dataSendFromServer = std::async(
	  std::launch::async,
	  static_cast<UINT (Client::*)(std::string)>(&Client::send),
	  serversClientConnect, toSend);

	// Receive the data on the other side
	auto dataReceivedFromServer = std::async(
	  static_cast<baseDataBuffer* (Client::*)()>(&Client::receive),
	  aClient);

	UINT lengthOfdataSent = dataSendFromServer.get();
	baseDataBuffer* dataBufferFromServer = dataReceivedFromServer.get();

	std::cout << "Received " << lengthOfdataSent << " bytes of data: " <<  dataBufferFromServer->getBuffer() <<  std::endl;

	aClient->disconnect();
	testServer->shutdownServer();
	
	delete testServer;
	delete aClient;

}