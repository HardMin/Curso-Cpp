// 11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
  int num, potencia = 0;

  cout<<endl<<"Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n ";

  do{
    cout<<endl<<"Ingresa el numero: "; cin>>num;
  }while(num < 2);

  cout<<endl<<endl<<2<<"^"<<num<<" = ";
  for(int i = 1; i <= num; i++){
    
    potencia += pow(2, i);

    if(i == num){
      cout<<2<<"^"<<i<<" = "<<potencia;
    }
    else{
      cout<<2<<"^"<<i<<" + ";
    }
  };

  
  cout<<endl<<"\nEl Resultado es: "<<potencia<<endl<<endl;
  
  system("pause");

  return 0;
}

