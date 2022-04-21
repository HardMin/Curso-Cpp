/*
 * 3. Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados
 *  de los 10 primeros enteros mayores que cero.
 */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
  int sum;

  cout<<endl<<"Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados";
  cout<<endl<<"de los 10 primeros enteros mayores que cero.";

  for(int i = 1; i <= 10; i++){
    sum += pow(i, 2);
  };
  
  cout<<endl<<"El resultado de la suma es: "<<sum; // The results 385.

  cout<<"\n\n";
  system("pause");

  return 0;
}
