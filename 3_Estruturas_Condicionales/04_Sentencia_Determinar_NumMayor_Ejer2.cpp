/*
2. Escriba un programa que lea tres numeros y determine cual de ellos es el mayor.
*/

#include<iostream>

using namespace std;

int main(){

    int a, b, c;

    cout<<endl<<"Escriba un programa que lea tres numeros y determine cual de ellos es el mayor.\n";

    cout<<endl<<"Ingrese el valor de a: "; cin>>a;
    cout<<endl<<"Ingrese el valor de b: "; cin>>b;
    cout<<endl<<"Ingrese el valor de c: "; cin>>c;

    if(a > b && a > c){
        cout<<"\n-- a = "<<a<<" es mayor que b = "<<b<<", y que c = "<<c;
    }
    if(b > a && b > c){
        cout<<"\n-- b = "<<b<<" es mayor que a = "<<a<<", y que c = "<<c;
    }
    else{
        cout<<"\n-- c = "<<c<<" es mayor que a = "<<a<<", y que b = "<<b;
    }


    return 0;
}