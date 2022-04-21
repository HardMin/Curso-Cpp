/*
8. Escribe un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto
numero e indicar si el numero coincide con alguno de los introducidos con anterioridad.
*/

#include<iostream>

using namespace std;

int main(){
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;

    cout<<endl<<"Escribe un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto";
    cout<<endl<<"numero e indicar si el numero coincide con alguno de los introducidos con anterioridad.\n\n";

    cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"\nIngrese el segundo numero: "; cin>>num2;
    cout<<"\nIngrese el tercer numero: "; cin>>num3;

    cout<<"\n\nIngrese el cuarto numero para verificar si coincide con los anteriores: "; cin>>num4;
    
    if(num4 == num1){
        cout<<"\nEs igual al primer numero. "<<num4<<" == "<<num1<<" true";
    }
    else if(num4 == num2){
        cout<<"\nEs igual al segundo numero. "<<num4<<" == "<<num2<<" true";
    }
    else if(num4 == num3){
        cout<<"\nEs igual al tercer numero. "<<num4<<" == "<<num3<<" true";
    }
    else{
        cout<<"\nNo es igual ninguno de los anteriores ";
        cout<<endl<<num4<<" == "<<num1<<" false";
        cout<<endl<<num4<<" == "<<num2<<" false";
        cout<<endl<<num4<<" == "<<num3<<" false";
    }

    cout<<"\n\n";

    return 0;
}