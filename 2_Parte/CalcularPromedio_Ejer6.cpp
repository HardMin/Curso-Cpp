/*
Escribe un programa que lea la nota final de cuatro alumnos y calcule la
nota final media de los cuatros alumnos
*/

#include<iostream>

using namespace std;

int main(){
	float nota_1,nota_2,nota_3,nota_4, total=0;
	char Alumno[30];
	
	
	
	cout<<endl<<"Ingresa tu nombre: "; cin>>Alumno;
	
	cout<<endl<<"Ingresa tu 1ra nota: "; cin>>nota_1;
	cout<<endl<<"Ingresa tu 2da nota: "; cin>>nota_2;
	cout<<endl<<"Ingresa tu 3ra nota: "; cin>>nota_3;
	cout<<endl<<"Ingresa tu 4ta nota: "; cin>>nota_4;
	
	total = nota_1+nota_2+nota_3+nota_4;
	
	cout.precision(3);
	cout<<endl<<"Total de tus notas: "<<total<<endl<<"Tu promedio: "<<total/4<<endl;
	
	//+++++++++++++++++++++++++++++++++++++++++++++++
	
	cout<<endl<<"Ingresa tu nombre: "; cin>>Alumno;
	
	cout<<endl<<"Ingresa tu 1ra nota: "; cin>>nota_1;
	cout<<endl<<"Ingresa tu 2da nota: "; cin>>nota_2;
	cout<<endl<<"Ingresa tu 3ra nota: "; cin>>nota_3;
	cout<<endl<<"Ingresa tu 4ta nota: "; cin>>nota_4;
	
	total = nota_1+nota_2+nota_3+nota_4;
	
	cout.precision(3);
	cout<<endl<<"Total de tus notas: "<<total<<endl<<"Tu promedio: "<<total/4<<endl;
	
	//+++++++++++++++++++++++++++++++++++++++++++++++
	
	cout<<endl<<"Ingresa tu nombre: "; cin>>Alumno;
	
	cout<<endl<<"Ingresa tu 1ra nota: "; cin>>nota_1;
	cout<<endl<<"Ingresa tu 2da nota: "; cin>>nota_2;
	cout<<endl<<"Ingresa tu 3ra nota: "; cin>>nota_3;
	cout<<endl<<"Ingresa tu 4ta nota: "; cin>>nota_4;
	
	total = nota_1+nota_2+nota_3+nota_4;
	
	cout.precision(3);
	cout<<endl<<"Total de tus notas: "<<total<<endl<<"Tu promedio: "<<total/4<<endl;
	
	//+++++++++++++++++++++++++++++++++++++++++++++++
	
	cout<<endl<<"Ingresa tu nombre: "; cin>>Alumno;
	
	cout<<endl<<"Ingresa tu 1ra nota: "; cin>>nota_1;
	cout<<endl<<"Ingresa tu 2da nota: "; cin>>nota_2;
	cout<<endl<<"Ingresa tu 3ra nota: "; cin>>nota_3;
	cout<<endl<<"Ingresa tu 4ta nota: "; cin>>nota_4;
	
	cout.precision(3);
	total = nota_1+nota_2+nota_3+nota_4;
	
	cout<<endl<<"Total de tus notas: "<<total<<endl<<"Tu promedio: "<<total/4<<endl;
	
	return 0;
}