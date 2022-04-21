/*
9. Realice un programa que calcule el valor que toma la siguiente funcion para unos
valores dados de x e y.

             Raiz_x
f(x,y) = ---------------
            y^2 - 1
*/  


#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float x, y, resultado = 0;
    char msj[30] = "Ingrese el valor de: ";

    cout<<"\n\nRealice un programa que calcule el valor que toma la siguiente funcion\n";
    cout<<"para unos valores dados de x e y.\n";

    cout<<endl<<msj<<"x: "; cin>>x;
    cout<<endl<<msj<<"y: "; cin>>y;

    resultado = (sqrt(x))/(pow(y, 2) - 1);
    
    cout.precision(3);
    cout<<endl<<"El resultado es: "<<resultado;
    
    return 0;
}