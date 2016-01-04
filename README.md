![Building](https://travis-ci.com/sabidib/Ace.svg?token=cjyDygCQAkVjSCxqEHxj)
# Ace
Ace is lightweight c++11 networking library. 

## Installation
Installation is simple :
```sh
git clone https://github.com/sabidib/Ace.git
cd Ace;
mkdir build;
cd build;
cmake ..;
make install
```
On unix systems the last line will install `libacecom` to your local libraries include location. If you would like to install it elsewhere then append `INSTALL_ROOT=$INSTALL_DIRECTORY` argument.

##Usage
To use Ace in your project, simply add the header files to your includes directory and make sure to link the library. For example, to compile the client test, cd to the root folder of Ace and run:
```sh
g++ tests/aClient.cpp -lacecom -I../includes --std=c++11 -o aClient.out
```
To create a client and then run 
```sh
g++ tests/aServer.cpp -lacecom -I../includes --std=c++11 -o aServer.out
```
Then open two terminals and run each executable to see the library in action.

Optinally, you can compile aServerAndaClient in one executable:
```sh
g++ tests/aServerAndaClient.cpp -lacecom -I../includes --std=c++11 -o aServerAndaClient.out
```


