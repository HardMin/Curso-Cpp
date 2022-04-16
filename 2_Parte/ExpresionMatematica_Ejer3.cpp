/*
3. Escribe la siguiente expresion como expresion en C++
*/

#include<iostream>

using namespace std;

/*
Expresion

	  	  b
	a +  ---
		  c
  -------------   = 
  		  e
	d +  ---
		  f
  	
*/

int main(){
	
	float a,b,c,d,e,f, resultado = 0;
	char msj[30] = "Ingresa el dato ";
	
	cout<<endl<<msj<<"a: "; cin>>a; //Primer etapa
	cout<<endl<<msj<<"b: "; cin>>b; 
	cout<<endl<<msj<<"c: "; cin>>c;
	
	cout<<endl<<msj<<"d: "; cin>>d; //Segunda etapa
	cout<<endl<<msj<<"e: "; cin>>e;
	cout<<endl<<msj<<"f: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	
	cout.precision(3);
	cout<<"\nResultado: "<<resultado;
	 
	return 0;
}