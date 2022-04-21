/*
    La sentencia switch

    switch(expresion){
        case Literal1:
            Conjunto de intrucciones1;
            break;
        case Literal2:
            Conjunto de intrucciones2;
            break;
        case Literal3:
            Conjunto de intrucciones3;
            break;
        case Literal4:
            Conjunto de intrucciones4;
            break;
        default:
            Conjunto de intrucciones por defecto;
            break;
    }
*/

#include<iostream>

using namespace std;

int main(){
    int num = 4;

    cout<<"\nIngrese un valor del al 1-5: "; cin>>num;

    switch(num){
        case 1:
            cout<<"\nEl valor es 1";
            break;
        case 2:
            cout<<"\nEl valor es 2";
            break;
        case 3:
            cout<<"\nEl valor es 3";
            break;
        case 4:
            cout<<"\nEl valor es 4";
            break;
        case 5:
            cout<<"\nEl valor es 5";
            break;
        default:
            cout<<"\nEl valor es superior a 5";
            break;
    };

    return 0;
};