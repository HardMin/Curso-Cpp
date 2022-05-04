// Comparar cadenas - function strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
  char palabra1[] = "Hola";
  char palabra2[] = "Hol3";

  if (strcmp(palabra1, palabra2) != 0) {
    cout<<"No son iguales";
  }
  else{
    cout<<"Ambas son iguales";
  }



  getch();
  return 0;
}
