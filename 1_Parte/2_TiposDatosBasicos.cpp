//Tipos de datos basicos de C++

#include<iostream>

using namespace std;

int main(){
	
	//variable de numero entero
	int numero_entero = 15;
	//variable de numero flotante
	float numero_flotante = 10.45;
	
	//variable de numero flotante o numero entero
	double numero_double_entero = 163;
	double numero_double_flotante = 163.14156;
	
	//variable string con char
	//Esta variable muestra una sola letra, o la ultima letra de una palabra o oracion
	char letra = '12';

	//salida de datos
	cout<<endl<<numero_entero<<" Salida de numero entero"<<endl;
	cout<<endl<<numero_flotante<<" Salida de numero flotante"<<endl;
	cout<<endl<<numero_double_entero<<" Salida de numero entero con double"<<endl;
	cout<<endl<<numero_double_flotante<<" Salida de numero flotante con double"<<endl;
	
	cout<<endl<<letra<<" Salida de string con char";
	 
	cout<<endl<<"Perfecto :D... 10/4/2022";
	
	
	return 0;
}