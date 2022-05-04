/*
 * 3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si Ambas
 * cadenas son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente
 * */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
  char text[20];
  char text2[20];

  cout<<"Digite el primer texto: "; cin.getline(text, 20, '\n');
  cout<<"Digite el segundo texto: "; cin.getline(text2, 20, '\n');

  if (strcmp(text, text2) != 0) {
    if (strcmp(text, text2) > 0) {
      cout<<text<<" es mayor alfabeticamente";
    }
    else{
      cout<<text2<<" es mayor alfabeticamente";
    }
  }
  else{
    cout<<"Ambas son iguales";
  }


  getch();
  return 0;
}
