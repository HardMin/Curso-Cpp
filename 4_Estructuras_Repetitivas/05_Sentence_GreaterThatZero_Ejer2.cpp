/*
2. Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un cero.
En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores
mayores que cero leidos
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numZero, count = 0;

	do{
		cout<<"\nInsert a number: "; cin>>numZero;
		if (numZero > 0)
		{
			count++;
		}

	}while(numZero != 0);

	cout<<endl<<"El total de numeros mayores que 0 es: "<<count<<endl;

	system("pause");
	return 0;
}