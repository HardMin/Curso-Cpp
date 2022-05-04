/*
 * 4. Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector
 * en orden inverso - del ultimo al primer elemento.
 * */


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 9; i>=0; i--) {
    cout<<endl<<i<<" -> "<<numeros[i]<<endl;
  }

  system("pause");
  return 0;
}
