#include "Server.h"
#include "SocketException.h"
#include <iostream>
#include <string>


int main(int argc, char* argv[]){
	std::cout << "running.....\n";

	try{
		//crear el socket
		Server server(30000);

		while(true){
			Server new_sock;
			server.accept(new_sock);

			try{
				while(true){
					std::string data;
					new_sock >> data;
					new_sock << data;
				}
			}
			catch (SocketException&){}
		}
	}
	catch (SocketException& e){
		std::cout << "excepcion " << e.description() << "\nExiting.\n";
	}
	return 0;

}
