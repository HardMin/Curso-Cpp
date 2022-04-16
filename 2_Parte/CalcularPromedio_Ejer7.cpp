/*
La Calificacion final de un estudiante es la media ponderada de tres notas:

-La nota de practicas que cuenta un 30% del total.
-La nota teorica que cuenta un 60%.
-La nota de particiones que cuenta el 10% restantes.

Escriba un programa que lea de la entrada estandar las tres notas de un alumno y 
escriba en la salida estandar su nota final.
*/

#include<iostream>

using namespace std;

int main(){
	float nota_1,nota_2,nota_3, result,  practicas=3, teorica=6, particiones=1;
	
	cout<<endl<<"Ingrese la nota de Practicas que es de 3pts: "; cin>>nota_1;
	cout<<endl<<"Ingrese la nota de Teoria que es de 6pts: "; cin>>nota_2;
	cout<<endl<<"Ingrese la nota de Particiones ques es de 1pt: "; cin>>nota_3;
	
	result = nota_1+nota_2+nota_3;
	
	cout<<"Tu nota completa es: "<<result<<" de 10.";
	
	return 0;
}