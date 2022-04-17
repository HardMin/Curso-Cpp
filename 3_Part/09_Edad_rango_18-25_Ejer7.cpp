/*
7. Escriba un programa que solicite una edad (un entero) e indique en la salida
estandar si la edad introducida esta en el rango [18-25].
*/

#include<iostream>

using namespace std;

int main(){

    int edad;

    cout<<endl<<"Escriba un programa que solicite una edad (un entero) e indique en la salida";
    cout<<endl<<"estandar si la edad introducida esta en el rango [18-25].\n\n";

    cout<<endl<<"Ingrese su edad: "; cin>>edad;

    if(edad >= 18 && edad <= 25){
        cout<<endl<<"\nTu edad si estas en el rango definido";
    }
    else{
        cout<<endl<<"\nTu edad no estas en el rango definido";
    }

    cout<<"\n\n";
    
    return 0;
}