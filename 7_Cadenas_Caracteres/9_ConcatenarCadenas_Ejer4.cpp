/*
 * 4. Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra
 * cadena para preguntarle al usuario al final de la primera cadena mostrar el 
 * mensaje completo "Hola que tal (NombreDelUsuario)"
 * */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
  char cad1[] = "Hola que tal ";
  char name[20];

  cout<<"Ingresa tu nombre: "; cin.getline(name, 20, '\n');

  cout<<strcat(cad1, name);



  getch();
  return 0;
}
