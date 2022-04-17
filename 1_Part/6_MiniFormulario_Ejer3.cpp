/*
Realice un programa que lea de la entrada estandar los siguientes datos
de una persona.

	Edad: dato de tipo entero.
	Sexo: dato de tipo caracater.
	Altura en metro: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estandar.

*/

//#include<iostream>

using namespace std;

int main(){
	
	//variables
	int Edad; 
	char Nombre[20], Sexo[20];
	double Altura;
	
	//entrada de datos
	cout<<"\n Ingrese su Nombre: "; cin>>Nombre;
	cout<<"\n Ingrese su Edad: "; cin>>Edad;
	cout<<"\n Ingrese su Sexo: "; cin>>Sexo;
	cout<<"\n Ingrese su Altura: "; cin>>Altura;
	
	//salida de datos
	cout<<"\n \n Su Nombre registrada es: "<<Nombre;
	cout<<"\n Su Edad registrada es: "<<Edad;
	cout<<"\n Su Sexo registrado es: "<<Sexo;
	cout<<"\n Su Altura en metros registrada es: "<<Altura<<" m"<<endl;	
	
	return 0;

}