/*
5. Escribe un fragmento de programa que intercambie los valores de dos
variables.
*/

#include<iostream>

using namespace std;

int main(){
	float a = 10, b = 5, aux;
	
	cout<<endl<<"el valor de a: "<<a;
	cout<<endl<<"el valor de b: "<<b;
	
	cout<<endl<<"Intercambio";
	aux = a;
	a = b;
	b = aux;
	
	cout<<endl<<"el valor de a: "<<a;
	cout<<endl<<"el valor de b: "<<b;
	
	return 0;
}