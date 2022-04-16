//lectura o entrada de datos

#include<iostream>

using namespace std;

int main(){
//	int numero;
//	float numero;
	double numero;
		
	cout<<"\n Digite un numero: ";
	
	/*
		cin se utiliza para hacer una entrada de datos por consola
		y la entrada se envia o guarda en la variable indicada
		en este caso, en la variable numero
	*/
	cin>>numero;
	
	//salida de dato
	cout<<"\nEl numero que digito es: "<<numero;
	
	return 0;
}