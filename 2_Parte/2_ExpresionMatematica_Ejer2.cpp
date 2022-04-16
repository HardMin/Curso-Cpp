/*
2. Escribe la siguiente expresion matematica como expresion C++
*/

#include<iostream>

using namespace std;

/*
Expresion

	a + b
  ---------
  	c + d
*/


int main(){
	
	float a,b,c,d, resultado = 0;
	char msj[30] = "Ingresa el numero de ";
	
	cout<<endl<<msj<<"a: ";cin>>a;
	cout<<endl<<msj<<"b: ";cin>>b; //Primer bloque
	
	cout<<endl<<msj<<"c: ";cin>>c;
	cout<<endl<<msj<<"d: ";cin>>d; //Segundo bloque
	
	resultado = (a+b)/(c+d);
	
	cout<<endl<<"Resultado: "<<resultado;
	
	return 0;
}