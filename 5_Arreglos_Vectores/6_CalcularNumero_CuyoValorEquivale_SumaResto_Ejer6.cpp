/*
 * 6. Escribe un programa que defina un vector de numeros y calcule si existe
 * algun numero en el vector cuyo valor equivale a la suma del resto de numeros
 * del vector.
 * */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int numeros[6] = {1, 2, 3, 4, 5, 6}, suma = 0, igual = 0;

  for (int i = 0; i<6; i++) {
    suma += numeros[i];
  }
  for (int i = 0; i<6; i++) {
    igual = numeros[i];
    if (igual == suma - igual) {
      cout<<endl<<"El elemento: "<<numeros[i]<<" es igual a la suma del resto de los elementos: "<<suma-igual<<endl;
    }
  }
  if(igual != suma - igual){
    cout<<endl<<"El valor de los elementos no iguala la suma de los mismos, la cual es: "<<suma<<endl;
  }

  system("pause");
  return 0;
}
