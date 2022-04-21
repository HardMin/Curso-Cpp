/*
 * 16. Realice un programa que calcule la descomposicion en factores primos de un numero entero
 *
 *        Por ejemplo: 20 = 2*2*5.
 * */

#include<iostream>
#include<conio.h>

using namespace std;

/* int main(){ */
/*   int num, primos, cantidad = 0, sum, mult, primoMult; */

/*   cout<<endl<<"Realice un programa que calcule la descomposicion en factores primos de un numero entero "<<endl; */

/*   cout<<endl<<"Ingrese el numero: "; cin>>num; */

/*   for(int i = 2; i <= num; i++){ */
/*     if(num % i == 0){ */
/*       primos = i; */
/*       if(primos == 2 || primos % 2 != 0){ */
/*         sum = primos; */
/*         primoMult = primos; */
/*         cantidad = num/primos; */
/*         if(cantidad % 2 == 0){ */
/*           mult = cantidad/2; // 2 */
/*         } */
/*         else{ */
/*           mult = cantidad; */
/*         } */
/*       } */
/*     } */
/*   } */

/*   cout<<"En Suma = "<<num<<" = "; */
/*   for (int i = 1; i <= cantidad; i++) { */
/*     if (i == cantidad) { */
/*       cout<<sum<<" = "<<num; */
/*     } */
/*     else{ */
/*       cout<<sum<<" + "; */
/*     } */
/*   } */

/*   cout<<"\n\nEn Multiplicacion = "<<num<<" = "; */
/*   for (int i = 0; i <= mult; i++) { */
/*     if(cantidad % 2 == 0){ */
/*       if(i == mult){ */
/*         cout<<primoMult<<" = "<<num; */
/*       } */
/*       else{ */
/*         cout<<mult<<" * "; */
/*       } */
/*     } */
/*     else{ */

/*     } */
/*   } */

/*   getch(); */
/*   return 0; */
/* } */

// Realizado por el Profesor de Programacion en C++ en Youtube canal Programacion ATS

int main(){
  int numero;

  cout<<"Digite un numero: ";
  cin>>numero; // input 20

  cout<<"\nDescomprimiendo en factores primos: ";
  for(int i=2; numero>1;i++){ //  i = 2 .. 3 .. 4 .. 5
    while (numero%i==0) { // 2 2 5 
      cout<<i<<" "; // print 2 2 5
      numero /= i; // 20 / 2 = 10 / 2 = 5 / 5 = 1
    }
  }

  cout<<"\n";
  system("pause");
  return 0;
}









