/*
6. Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar
si el caracer es una vocal minuscula, es una vocal mayuscula o no es una vocal.
*/

#include<iostream>

using namespace std;

int main(){
    char msj;

    cout<<endl<<"Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar";
    cout<<endl<<"si el caracer es una vocal minuscula, es una vocal mayuscula o no es una vocal.\n";

    cout<<endl<<"Ingrese un caracter: "; cin>>msj;

    //METODO 1
    cout<<endl<<endl<<"Metodo 1"<<endl;
    if(msj == 'a' || msj == 'e' || msj == 'i' || msj == 'o' || msj == 'u'){
        cout<<endl<<"Es una vocal minuscula"<<endl;
    }
    else if(msj == 'A' || msj == 'E' || msj == 'I' || msj == 'O' || msj == 'U'){
        cout<<endl<<"Es una vocal mayuscula"<<endl;
    }
    else{
        cout<<endl<<"No es una vocal"<<endl;
    };

    //METODO 2
    cout<<endl<<endl<<"Metodo 2"<<endl;
    switch (msj){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<endl<<"Es una vocal minuscula"<<endl; break; 
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': cout<<endl<<"Es una vocal mayuscula"<<endl; break; 
    default:  cout<<endl<<"No es una vocal"<<endl; break;
    };

    cout<<"\n\n";

    return 0;
}