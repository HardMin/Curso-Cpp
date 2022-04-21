/*
 * 6. Escriba un programa que Calcule x^y, donde tanto 'x' como 'y' son enteros positivos,
 * sin utilizar la funcion pow.
 * */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int x, y, mult = 1;
  
  cout<<endl<<"Escriba un programa que Calcule x^y, donde tanto 'x' como 'y' son enteros positivos,";
  cout<<endl<<"sin utilizar la funcion pow.";

  cout<<"\n\n";

  cout<<endl<<"Ingrese un numero entero para el valor de x: "; cin>>x;

  do {
    cout<<endl<<"Ingrese un numero entero mayor que 1 para el valor de y: "; cin>>y;
  }while (y <= 1);

  for(int i = 0; i < y; i++){
    mult *= x; 
    cout<<endl<<"Potencia de "<<x<<"^"<<i+1<<": "<<mult<<endl;
  };
  cout<<"\n\n";

  cout<<"El resultado de: "<<x<<"^"<<y<<" es: "<<mult<<endl<<endl;

  system("pause");
  return 0 ;
}
