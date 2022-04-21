// 13. Hacer un programa que realice la serie fibonacci -> 0 1 1 2 3 5 8 13...n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int num, a = 0, b = 1, contain = 0;
  
  cout<<endl<<"Hacer un programa que realice la serie fibonacci -> 0 1 1 2 3 5 8 13...n "<<endl;

  do{
    cout<<endl<<"Ingresa un numero mayor a 3: "; cin>>num;
  }while(num < 3 );

  cout<<endl<<endl;

  cout<<"0 1 ";
  for(int i = 1; i <= num; i++){
    contain = a + b;
    a = b;
    b = contain;
    
    cout<<contain<<" ";
  }

  cout<<endl;
  system("pause");
  return 0;
}
