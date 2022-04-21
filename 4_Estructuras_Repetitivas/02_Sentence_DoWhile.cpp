/*
    La sentencia do while

    do{
        conjunto de instrucciones;
    }while(expresion logica);
*/

#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
    int i = 10;

    do{
        cout<<i<<endl;
        i--;
    }while(i>=1);

    system("pause"); //Pausa al final y no permite que el ejecutable se cierre automaticamente.
    return 0;
}