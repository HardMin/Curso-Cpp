// 10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n!

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int num, factorial = 1;

  cout<<endl<<"Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! ";

  do{
    cout<<endl<<"Ingresa el numero: "; cin>>num;
  }while(num < 2);

  cout<<endl<<endl<<num<<"! = ";
  for(int i = num; 1 <= i; i--){
    factorial *= i;
    if(i == 1){
      cout<<i<<"! = "<<factorial;
    }
    else{
      cout<<i<<"! + ";
    }
  };

  
  cout<<endl<<"\nEl Factorial de "<<num<<"! es: "<<factorial<<endl<<endl;
  
  system("pause");

  return 0;
}

