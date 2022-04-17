/*
4. Comprobar si un numero digitado por el usuario es positivo o negativo.
*/

#include<iostream>

using namespace std;

int main(){
    float a, b, c;

    cout<<endl<<"Comprobar si un numero digitado por el usuario es positivo o negativo.";

    cout<<endl<<"Ingrese el valor de a: "; cin>>a;
    cout<<endl<<"Ingrese el valor de b: "; cin>>b;
    cout<<endl<<"Ingrese el valor de c: "; cin>>c;

    if(a >= 0){
        cout<<endl<<"El valor de 'a' = "<<a<<" es positivo";
    }
    else{
        cout<<endl<<"El valor de 'a' = "<<a<<" es negativo";
    }
    if(b >= 0){
        cout<<endl<<"El valor de 'b' = "<<b<<" es positivo";
    }
    else{
        cout<<endl<<"El valor de 'b' = "<<b<<" es negativo";
    }
    if(c >= 0){
        cout<<endl<<"El valor de 'c' = "<<c<<" es positivo";
    }
    else{
        cout<<endl<<"El valor de 'c' = "<<c<<" es negativo";
    }

    return 0;
}