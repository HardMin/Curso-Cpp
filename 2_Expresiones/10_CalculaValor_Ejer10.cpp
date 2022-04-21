/*
10. Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma
ax^2 + bx + c = 0, teniendo en cuenta que: 

     -b +/- Raiz_ b^2 - 4 * a * c
x = -------------------------------
                  2 * a


*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float a, b, c, resultado1 = 0, resultado2 = 0;
    char msj[30] = "Ingrese el valor de ";

    cout<<"\n\nEscriba un programa que calcule las soluciones de una ecuacion de segundo grado\n";
    cout<<"de la forma ax^2 + bx + c = 0\n\n";

    cout<<endl<<msj<<"a: "; cin>>a;
    cout<<endl<<msj<<"b: "; cin>>b;
    cout<<endl<<msj<<"c: "; cin>>c;

    resultado1 = (-b + sqrt(pow(b, 2) - 4 * a * c))/(2 * a);
    resultado2 = (-b - sqrt(pow(b, 2) - 4 * a * c))/(2 * a);

    cout<<"\n\nEl primer resultado siendo positivo el signo '+/-' es: "<<resultado1;
    cout<<"\n\nEl segundo resultado siendo negativo el signo '+/-' es: "<<resultado2;

    return 0;
}