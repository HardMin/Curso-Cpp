/*
 * 2. Escribe un programa que defina un vector de numeros y calcule la multiplicacion
 * acumulada de sus elementos
 * */


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int numeros[] = {1, 2, 3, 4, 5}, mult = 1;

  for (int i = 0; i<5; i++) {
    mult *= numeros[i];
  }
  cout<<"La multiplicacion es: "<<mult<<endl;

  system("pause");
  return 0;
}
