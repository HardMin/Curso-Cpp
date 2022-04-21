/*
 *
 * 14. En una clase de 5 alumnos se han realizado tres examenes y se require
 * determinar el numero de:
 *
 * a) Alumnos que aprobaron todos los examenes.
 * b) Alumnos que aprobaron al menos un examen.
 * c) Alumnos que aprobaron unicamente el ultimo examen
 *
 * Realice un programa que permita la lectura de los datos y el calculo de las
 * estadisticas.
 * */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  //Alumnos
  /* int a, b, c, d, e; */
  //Examenes
  int exm, contain = 0, a = 0, b = 0, c = 0;

  for (int i = 1; i<=5; i++) {
    cout<<endl<<"Alumno "<<i;
    for(int i = 1; i <= 3; i++){
      cout<<endl<<"\nIngrese la nota N°"<<i<<": "; cin>>exm;
      contain += exm;
    }
    if (contain >= 27) {
      a++;
    }
    else if(contain <= 26 && contain > 15){
      b++;
    }
    else{
      c++;
    }
    contain = 0;
  }
  cout<<"\n\nCantidad de alumnos que aprobaron todos los examenes: "<<a;
  cout<<"\n\nCantidad de alumnos que aprobaron al menos un examen: "<<b;
  cout<<"\n\nCantidad de alumnos que aprobaron unicamente el ultimo examen: "<<c;
  return 0;
}
