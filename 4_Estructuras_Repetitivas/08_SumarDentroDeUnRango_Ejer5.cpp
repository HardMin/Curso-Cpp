/*
 * 5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el
 * rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores
 * mayores a 0 introducidos.
 * */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int num, sum = 0;

  do{
    cout<<endl<<"Ingrese un numero: "; cin>>num;
    if(num > 0){
      sum += num;
    }
  }while(num != 0 && (num < 20 || num > 30));
  
  cout<<"\n\n";

  cout<<"La suma de los numeros introducidos mayores que cero es: "<<sum<<endl;

  getch();
  return 0;
}
