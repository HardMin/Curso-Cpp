/*
 * 12. Hacer un programa que calcule el Resultado de la siguiente expresion: 1-2+3-4+5-6...n
 * */
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int num, results = 0;

  cout<<endl<<"Hacer un programa que calcule el Resultado de la siguiente expresion: 1-2+3-4+5-6...n "<<endl;

  do{
    cout<<endl<<"Ingresa el numero par mayor a 2: "; cin>>num;
  }while(num < 2 && num % 2 != 0);

  results = (num/2)-num;

  cout<<endl<<endl;
  for(int i = 1; i <= num; i++){
    if(i % 2 == 0){
      if(i == num){
        cout<<i-1<<"-"<<i<<" = "<<results;
      }
      else{
        cout<<i-1<<"-"<<i<<" + ";
      };
    };
  };

  
  cout<<endl<<"\nEl Resultado es: "<<results<<endl<<endl;
  
  system("pause");

  return 0;
}



