/*
    La sentencia while:

    while(expresion logica){
        conjunto de instrucciones;
    }
 */

#include<iostream>
#include<conio.h> //Libreria conio

using namespace std;

int main(){
    int num = 10;

    while(num >= 1){
        cout<<endl<<num;
        num--;
    }

    getch(); //De la libreria Conio, ayuda a que no se cierre automaticamente el ejecutable.
    return 0;
}