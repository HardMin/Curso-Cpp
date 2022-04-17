/*
3. Realice un programa que lea un valor entero y determine si se trata de un numero par o impar
*/

#include<iostream>

using namespace std;

int main(){
    int a, b, c, resultado = 0;

    cout<<endl<<"Realice un programa que lea un valor entero y determine si se trata de un numero par o impar.\n";

    cout<<endl<<"Ingresa el valor de a: "; cin>>a;
    cout<<endl<<"Ingresa el valor de b: "; cin>>b;
    cout<<endl<<"Ingresa el valor de c: "; cin>>c;

    if(a == 0){
        cout<<endl<<"\n El valor de 'a' = "<<a<<".";
    }
    else if(a % 2 == 0){
        cout<<endl<<"\nEl valor de 'a' = "<<a<<" es un numero Par";
    }
    else{
        cout<<endl<<"\nEl valor de 'a' = "<<a<<" es un numero Impar";
    }

    if(b == 0){
        cout<<endl<<"\n El valor de 'b' = "<<b<<".";
    }
    else if(b % 2 == 0){
        cout<<endl<<"\nEl valor de 'b' = "<<b<<" es un numero Par";
    }
    else{
        cout<<endl<<"\nEl valor de 'b' = "<<b<<" es un numero Impar";
    }

    if(c == 0){
        cout<<endl<<"\n El valor de 'c' = "<<c<<".";
    }
    else if(c % 2 == 0){
        cout<<endl<<"\nEl valor de 'c' = "<<c<<" es un numero Par";
    }
    else{
        cout<<endl<<"\nEl valor de 'c' = "<<c<<" es un numero Impar";
    }

    
    return 0;

}