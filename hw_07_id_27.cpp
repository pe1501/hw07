/*
Author:   Haruso Violeta
Date:     today
Version:  1.0

  Homework 07
  Este programa realiza el cifrado tipo cesar de un mensaje dado por el usuario.
	
*/

#include <iostream>

int main(int argc, char **argv)
{
	int n = 255;
	char cadena [n];
	//int base = 'a';
	int key;
	std::cout<< "Este programa despliega el mensaje cifrado dado por el usuario  \n";
	std::cout<< "\nEscribe el mensaje a cifrar: \n\n";
	std::cin>> cadena;
	std::cout<< "Escriba un numero que sera la clave para hacer el cifrado \n";
	std::cin>> key;

	for ( int i=0; cadena[i] !='\0'; i++)
		
		cadena[i] = ((int)cadena[i] + key) % 255;
	
	std::cout<<"El mensaje cifrado es:   " << cadena;
	
	return 0;
}