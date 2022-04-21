//9. Escriba un programa que calcule el valor de: 1*2*3*4*...*n (factorial de un numero)

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int num, mult = 1;

  do{
    cout<<endl<<"Ingresa el numero: "; cin>>num;
  }while(num < 2);
  
  cout<<endl<<endl<<num<<"! = ";
  for(int i = 1; i <= num; i++){
    mult *= i;
    if(num == i){
      cout<<i<<" = "<<mult;
    }
    else{
      cout<<i<<" * ";
    }
  }
  
  cout<<endl<<"\nEl Factorial de "<<num<<"! es: "<<mult<<endl<<endl;
  
  system("pause");
  return 0;
}


