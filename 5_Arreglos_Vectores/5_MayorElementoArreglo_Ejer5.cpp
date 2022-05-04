/*
 * 5. Desarrolle un programa que lea de la entrada estandar un vector de enteros
 * y determine el mayor elemento del vector.
 * */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int numeros[100], n, mayor = 0;

  cout<<"Digite un numero de elementos que quiere en el arreglo: "; cin>>n;

  cout<<"\n\n";
  for (int i = 0; i<n; i++) {
    cout<<i+1<<". Digite un numero: "; cin>>numeros[i];
    cout<<endl;
    
    if(numeros[i] >= mayor){
      mayor = numeros[i];
    }
  }
  cout<<"\n\n";

  for (int i = 0; i < n; i++) {
    cout<<i<<" -> "<<numeros[i]<<endl;
  }

  cout<<"\n\n";

  cout<<"El elemento mayor del array es: "<<mayor;

  getch();
  return 0;
}
