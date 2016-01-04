#include "Client.h"
#include <thread>
#include <future>
#include <chrono>
#include <thread>


using namespace Communication;


int main(){
	std::string ip = "127.0.0.1";
	std::string port = "200";
	//Create a new client pointing to our server
	Client aClient = Client(ip,port);
	

	while(true){
		try{
			aClient.connect();	
			std::cout << "Connected to server, about to send data" << std::endl;
			break;
		} catch (Exception::SystemExceptionECONNREFUSED& e){
			std::cout << "Connection refused, keep trying!" << std::endl; 
		}	
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	}

	std::string datString = "Hello World!";
	//stuff the data we want to send in a base data buffer
	baseDataBuffer a = baseDataBuffer(datString);


	std::cout << "Sending data" << std::endl;
	//This ensures all the data is sent
	INT lenSent = aClient.send(a);

	
	aClient.disconnect();
}