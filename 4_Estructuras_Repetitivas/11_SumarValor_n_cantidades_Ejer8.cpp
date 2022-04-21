//Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int num, sum = 0;
  
  cout<<endl<<"Escriba un programa que calcule el valor de: 1+3+5+...+2n-1 ";

  do{
    cout<<endl<<"\nIngrese un numero mayor a 2: "; cin>>num;
  }while(num < 2);
  
  cout<<"\n";
  for(int i = 1; i <= num; i+=2){
    sum += i;
  }
  cout<<endl<<"El Resultado es: "<<sum;

  cout<<"\n";

  getch();
  return 0;
}
