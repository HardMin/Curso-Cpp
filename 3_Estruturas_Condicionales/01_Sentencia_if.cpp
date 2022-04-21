/*
    La sentencia if

    if(condicion){
        Intrucciones 1;
    }
    else{
        Instrucciones 2;
    }
*/

// C++

#include<iostream>

using namespace std;

int main(){

    float num1, num2 = 5;

    cout<<endl<<"Ingresa el valor de num1: "; cin>>num1;

    if(num1 == num2){
        cout<<"\nnum1 es igual a num2\n"<<endl;
    }
    else{
        cout<<"\nnum1 no es igual a num2\n"<<endl;
    }

    return 0;
}


