/*
12. Hacer un menu que considere las siguientes opciones:

    case 1: Cubo de un numero.
    case 2: Numero par o impar.
    case 3: Salir.

*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    int num, option;
    
    cout<<endl<<"Hacer un menu que considere las siguientes opciones:";
    cout<<"\n";

    cout<<endl<<"Ingresa el numero: "; cin>>num;

    cout<<endl<<"1. Cubo de un numero.";
    cout<<endl<<"2. Numero par o impar.";
    cout<<endl<<"3. Salir.";
    cout<<endl<<"Opcion: "; cin>>option;


    cout<<"\n";
    switch(option){
        case 1:
            cout<<endl<<"El numero "<<num<<" al cubo es "<<pow(num, 2);
            cout<<endl<<"Saliendo...";
            break;
        case 2:
            if(num % 2 == 0){
                cout<<endl<<"El numero "<<num<<" es Par.";
            }
            else{
                cout<<endl<<"El numero "<<num<<" es Impar.";
            }
            cout<<endl<<"Saliendo...";
            break;
        case 3:
            cout<<endl<<"Saliendo...";
            break;
    }

    cout<<"\n\n";

    return 0;
}