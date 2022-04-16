/*
	1. Escribe un programa que lea de la entrada estandar dos numeros
	y muestre en la salida su suma, resta, multiplicacion y division.
*/

#include<iostream>

using namespace std;

int main(){
	int num_1, num_2;
	
	cout<<"\n Ingrese el primer numero entero: "; cin>>num_1;
	cout<<"\n Ingrese el segundo numero entero: ";cin>>num_2;
	
	cout<<endl<<"Su suma es: "<<num_1+num_2<<endl;
	cout<<endl<<"Su resta es: "<<num_1-num_2<<endl;
	cout<<endl<<"Su multiplicacion es: "<<num_1*num_2<<endl;
	cout<<endl<<"Su division es: "<<num_1/num_2<<endl;	
	
	return 0;
}
 