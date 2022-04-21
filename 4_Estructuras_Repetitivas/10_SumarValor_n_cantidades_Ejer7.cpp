//7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  float cantidad, sum = 0;

  cout<<endl<<"Escriba un programa que calcule el valor de: 1+2+3+...+n ";
  
  cout<<"\n";

  cout<<"Ingrese el numero de repeticiones de la suma: "; cin>>cantidad;

  cout<<"\n";

  for(int i = 1; i <= cantidad; i++){
    sum += i;
    if(i == cantidad){
      cout<<i<<" = "<<sum;
    }
    else{
      cout<<i<<" + ";
    }
  };


  cout<<"\n"<<endl;
  system("pause");
  return 0;
}
