#include "Client.h"
#include "Server.h"
#include <thread>
#include <future>



using namespace Communication;


int main(){

	std::string ip = "127.0.0.1";
	std::string port = "200";

	// IPs and Ports are converted to their own objects
	Server testServer = Server(ip,port); 

	//Setup the serevr and bind the sockets
	testServer.startServer();
	
	//Ask the server to start accepting
	baseSocket* clientSocket = testServer.startAccepting();

	//Create a new client pointing to our server
	Client aClient = Client(clientSocket);
	
	baseDataBuffer* dataBufferReceived = aClient.receive();


	std::cout << "Received " << dataBufferReceived->getSizeOfData() << " bytes of data: " <<  dataBufferReceived->getBuffer() <<  std::endl;

	testServer.shutdownServer();	

	delete dataBufferReceived;
}