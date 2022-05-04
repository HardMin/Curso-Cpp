/*
 * 8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2
 * y muestre el segundo arreglo.
 * */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int InputNums[5];
  int NumbersMult[5];

  cout<<endl<<"Introduzca cinco numeros a continuacion"<<endl;

  // Ingresando numeros
  for (int i = 0; i < 5; i++) {
    cout<<endl<<i+1<<". Digite un numero: "; cin>>InputNums[i];
  }

  // Haciendo la multiplicacion de cada numero del array InputNums
  for (int i = 0; i < 5; i++) {
    NumbersMult[i] = InputNums[i] * 2;
  }

  // Imprimiendo el array NumbersMult con los numeros ya multiplicados y su indice
  cout<<endl<<"Indice  "<<" Elemento"<<endl;
  for (int i = 0; i < 5; i++) {
    cout<<endl<<"   "<<i<<"   ->   "<<NumbersMult[i];
  }

  getch();
  return 0;
}

