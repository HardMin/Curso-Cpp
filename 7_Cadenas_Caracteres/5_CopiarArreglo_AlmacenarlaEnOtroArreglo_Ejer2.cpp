/*
 * 2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su 
 * contenido hacia otro arreglo de caracteres
 * */


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
  char arreglo1[20];
  char arreglo2[20];

  cout<<"Ingrese un texto: "; cin.getline(arreglo1, 20, '\n');

  strcpy(arreglo2, arreglo1);

  cout<<arreglo2;


  getch();
  return 0;

}
