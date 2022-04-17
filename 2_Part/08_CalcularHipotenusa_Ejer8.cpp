/*
 8.   Escriba un programa que lea de la entrada estandar los dos catetos de un
      triangulo reactangulo y escriba en la salida estandar su hipotenusa.

    h2 = a^2 + b^2
    h2 = 5^2 + 6^2
    h2 = 25 + 36
    h2 = 61
    h = √(61)
    h = 7.81
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float a, b, h, resultado = 0;
    char msj[30] = "Ingrese el valor de ";

    cout<<"\n\nEscriba un programa que lea de la entrada estandar los dos catetos de\n";
    cout<<"un triangulo rectangulo y escriba en la salida estandar su hipotenusa.\n\n";

    cout<<"La Formula para encontrar la hipotenusa es la siguiente: h^2 = a^2 + b^2\n\n";
    
    cout<<endl<<msj<<"a: "; cin>>a;
    cout<<endl<<msj<<"b: "; cin>>b;

    h = sqrt(pow(a, 2) + pow(b, 2));
	
	cout.precision(3);
    cout<<endl<<"El valor de la Hipotenusa es: "<<h;

    return 0;
}