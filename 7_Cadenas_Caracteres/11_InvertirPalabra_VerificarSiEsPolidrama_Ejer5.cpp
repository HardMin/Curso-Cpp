// Hacer un programa que determine si una palabra es polindrama

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
  char cad[20];
  char polindroma[20];

  cout<<"Ingrese una palabra para saber si es polindroma: "; cin.getline(cad, 20, '\n');

  strcpy(polindroma, cad);
  strrev(polindroma);
  if (strcmp(cad, polindroma) == 0) {
    cout<<"Es una palapra polindroma";
  }
  else {
    cout<<"No es una palabra polindroma";
  }

  getch();
  return 0;
}
