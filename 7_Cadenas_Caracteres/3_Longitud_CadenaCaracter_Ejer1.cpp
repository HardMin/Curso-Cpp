/*
 * 1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego
 * verificar la Longitud de la cadana, y si esta supera a 10 caracteres mostrarla en pantalla,
 * caso contrario no mostrarla
 * */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
  int length;
  char text[20];

  cout<<"Ingrese un texto: "; cin.getline(text, 20, '\n');
  length = strlen(text);


  if(length > 10){
    cout<<length;
  }
  cout<<endl<<endl;

  system("pause");
  return 0;
}
