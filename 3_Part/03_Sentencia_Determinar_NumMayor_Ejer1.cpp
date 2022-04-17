/*
1.  Escribe un programa que lea dos numeros y determine cual de ellos
    es el mayor.
*/

#include<iostream>

using namespace std;

int main(){

    int a, b;
    char msj[30] = "Ingresa el valor de ";

    cout<<endl<<"Escribe un programa que lea dos numeros y determine cual de ellos es el mayor.\n";

    cout<<endl<<msj<<"a: "; cin>>a;
    cout<<endl<<msj<<"b: "; cin>>b;

    if (a > b){
        cout<<"\nEl valor de 'a' = "<<a<<", es mayor que 'b' = "<<b;
    }
    else{
        cout<<"\nEl valor de 'b' = "<<b<<", es mayor que 'a' = "<<a;
    };
    

    return 0;
}