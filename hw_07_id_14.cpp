// Author:OSCAR GARCI AVILA
// Date:3/23/2015
// Version:0.1

/*
  Homework DD  07para  this task encrypts a work and password entered by the user
  this assignment ...
*/

#include <iostream>//biblioteca entrada y salida estandar
#include <string.h>//biblioteca para arreglos
#define MAX 128 //difine un valor constante de 128 llamado max
	int x;//varable x
    int i=0;//varable i
	char cadena[MAX];//declaramos un arreglo para ingresar el texto 
int main(){
	std::cout<<"ENCRIPTACION METODO CESAR"<<std::endl;//iprimimos el titulo
	std::cout<<"INTRODUCE UNA PALABRA:    ";//damos intruccion al usuario
	std::cin>>cadena;//para que teclee el texto
	std::cout<<"INDTRODUCE UN NUMERO:    ";//numero de espacios que se adelanta el abecedario
	std::cin>>x;//leemos el numero
	for (i=0;i<MAX;i++){//barremos el texto
    cadena[i]=cadena[i]+x;//hacemos la encriptacion
}
    std::cout<<"LA PALABRA ENCRIPTADA ES:  "<<cadena;//imprimimos la frase encriptada
	return 0;	
}
