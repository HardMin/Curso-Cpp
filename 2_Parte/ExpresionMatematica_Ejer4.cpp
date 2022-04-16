/*
4. Escribe la siguiente expresion como expresion en C++
*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, resultado = 0;
	char msj[30] = "Ingrese el dato de ";
	
	cout<<endl<<msj<<"a: "; cin>>a;
	cout<<endl<<msj<<"b: "; cin>>b;
	cout<<endl<<msj<<"c: "; cin>>c;
	cout<<endl<<msj<<"d: "; cin>>d;

	resultado = a + (b/(c-d));
	
	cout<<endl<<"Resultado: "<<resultado;
	
	return 0;
}

