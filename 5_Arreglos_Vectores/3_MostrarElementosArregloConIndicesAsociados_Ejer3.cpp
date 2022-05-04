/*
 * 3. Escribe un programa que lea de la entrada estandar un vector de numeros y muestre
 * en la salida estandar los numeros del vector con sus indices asociados.
 * */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int numeros[100], n;

  cout<<"Digite el numero de elementos que va a tener el arreglo: "; cin>>n;

  for (int i = 0; i<n ; i++) {
    cout<<"Digite un numero: "; cin >> numeros[i]; // Guardando todos los elementos del vector
  }
  
  cout<<"\n\n";
  //Ahora mostramos en la salida estandar los elementos y sus indices asociados

  for (int i = 0; i<n; i++) {
    cout<<i<<" -> "<<numeros[i]<<endl;
  }

  system("pause");
  return 0;
}
