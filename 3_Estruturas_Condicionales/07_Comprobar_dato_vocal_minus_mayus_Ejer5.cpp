/*
5. Escriba un programa que lea de la entrada estandar un caracter e indique en la salida
estandar si el caracter es una vocal minuscula o no
*/

#include <iostream>

using namespace std;

int main()
{
    char msj;

    cout << endl
         << "Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no" << endl;

    cout << "Ingrese una Caracter: "; cin >> msj;


    //METODO 1
    cout<<endl<<endl<<"Metodo 1"<<endl;
    if(msj == 'a' || msj == 'e' || msj == 'i' || msj == 'o' || msj == 'u'){
        cout<<endl<<"Es una vocal minuscula"<<endl;
    }
    else{
        cout<<endl<<"No es una vocal minuscula"<<endl;
    };

    //METODO 2
    cout<<endl<<endl<<"Metodo 2"<<endl;
    switch (msj){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<endl<<"Es una vocal minuscula"<<endl; break;    
    default:  cout<<endl<<"No es una vocal minuscula"<<endl; break;
    };

    cout << "\n\n";

    return 0;
}
