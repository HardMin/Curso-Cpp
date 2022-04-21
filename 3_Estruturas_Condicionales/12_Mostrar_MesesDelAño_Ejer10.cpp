/*
10. Mostrar los meses del año, pidiendole al usuario un numero entre (1-12),
    y mostrar el mes al que corresponde.
*/

#include<iostream>

using namespace std;

int main(){
    int NumMes;

    cout<<endl<<"Mostrar los meses del año, pidiendole al usuario un numero entre (1-12),";
    cout<<endl<<"y mostrar el mes al que corresponde.\n\n";

    cout<<"Ingresar el numero de mes: "; cin>>NumMes;

    cout<<"\n";
    if(NumMes < 0){
        cout<<endl<<"Debe ingresar un numero entero superior o igual a 1";
    }
    else{
        switch(NumMes){
            case  1: cout<<endl<<"El mes que corresponde es Enero"       ;   break;
            case  2: cout<<endl<<"El mes que corresponde es Febrero"     ;   break;
            case  3: cout<<endl<<"El mes que corresponde es Marzo"       ;   break;
            case  4: cout<<endl<<"El mes que corresponde es Abril"       ;   break;
            case  5: cout<<endl<<"El mes que corresponde es Mayo"        ;   break;
            case  6: cout<<endl<<"El mes que corresponde es Junio"       ;   break;
            case  7: cout<<endl<<"El mes que corresponde es Julio"       ;   break;
            case  8: cout<<endl<<"El mes que corresponde es Agosto"      ;   break;
            case  9: cout<<endl<<"El mes que corresponde es Septiembre"  ;   break;
            case 10: cout<<endl<<"El mes que corresponde es Octubre"     ;   break;
            case 11: cout<<endl<<"El mes que corresponde es Noviembre"   ;   break;
            case 12: cout<<endl<<"El mes que corresponde es Diciembre"   ;   break;

            default: cout<<endl<<"Supero la cantidad definida, solo debe tener [1-12]"; break;
        };
    };
    cout<<"\n\n";

    return 0;
}