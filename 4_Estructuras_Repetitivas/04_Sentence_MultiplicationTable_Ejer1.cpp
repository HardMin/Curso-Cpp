/*
1. Realice un programa que solicite de la entrada estandar un entero del 1
al 10 y muestre en la salida estandar su tabla de multiplicar.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int num;

    cout<<endl<<"Realice un programa que solicite de la entrada estandar un entero del 1";
    cout<<endl<<"al 10 y muestre en la salida estandar su tabla de multiplicar.";

    do{
        cout<<endl<<"\nInsert the value from the num: "; cin>>num;
    }while(num < 1 || num > 10);

    for(int i = 1; i <= 20; i++){
        cout<<endl<<num<<" x "<<i<<" = "<<num*i<<endl;
    }

    system("pause");
    return 0;
}