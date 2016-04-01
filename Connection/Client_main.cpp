#include "Client.h"
#include "SocketException.h"
#include <iostream>
#include <string>

int mainClient(int argc, int argv[]){
	try{
		Client client_socket ("localhost", 30000);

		std::string reply;
		try{
			client_socket << "mensaje de prueba";
			client_socket >> reply;
		}
		catch(SocketException&) {}

		std::cout << "Hemos recibido esta respuesta del servidor:\n\""<< reply << "\"\n";;
	}
	catch (SocketException& e){
		std::cout << "Excepción fue capturado:" << e.description() << "\n";
	}

	return 0;
}


