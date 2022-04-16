/*
1. Escribe la siguiente expresion como expresion en C++
*/

#include<iostream>

using namespace std;

/*
Expresion

	a
   --- + 1 =
  	b
*/

int main(){
	
	float a, b, resultado = 0;
	
	cout<<"Esta es la expresion matematica a seguir \n\n";
	cout<<" a\n"<<"--- + 1\n"<<" b\n";
	
	cout<<"\n Ingrese el valor 'a': "; cin>>a;
	cout<<"\n Ingrese el valor 'b': "; cin>>b;
	
	resultado = a/b + 1; 
		
	cout<<"\nDespejamos \n\n";
	
	cout<<a<<endl<<"--- + 1\n"<<" "<<b<<endl; //Primera Etapa
	cout<<endl<<a/b<<" + 1\n\n"; //Segunda Etapa
	
	cout.precision(3);
	cout<<"Resultado = "<<resultado; //Tercera Etapa resultado
	
	return 0;
}