/**
 * 6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3
 */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int matriz_3x3_1[3][3] = {
    { 3,-2, 6},
    { 1, 7, 9},
    {-3, 4, 2}
  };
  int matriz_3x3_2[3][3] = {
    { 8, 1, 3},
    {-6, 1, 1},
    { 2, 1, 7}
  };


  // Mostrando la Matriz A
  cout<<endl<<endl<<"Mostrando la Matriz A: "<<endl<<endl;
  for (int i = 0 ; i < 3; i++) {
    for (int j = 0 ;  j < 3; j++) {
      cout<<matriz_3x3_1[i][j]<<"   ";
    }
    cout<<"\n\n";
  }


  // Mostrando la Matriz B
  cout<<endl<<endl<<"Mostrando la Matriz B: "<<endl<<endl;
  for (int i = 0 ; i < 3; i++) {
    for (int j = 0 ;  j < 3; j++) {
      cout<<matriz_3x3_2[i][j]<<"   ";
    }
    cout<<"\n\n";
  }

  
  // Mostrando la Matriz A y Matriz B
  cout<<endl<<endl<<"Mostrando la Matriz A y Matriz B: "<<endl<<endl;
  for (int i = 0 ; i < 3; i++) {
    for (int j = 0 ;  j < 3; j++) {
      cout<<matriz_3x3_1[i][j]<<" + "<<matriz_3x3_2[i][j]<<"   ";
    }
    cout<<"\n\n";
  }


  // Mostrando la suma de Matriz A y Matriz B
  cout<<endl<<endl<<"Mostrando suma de la Matriz A y Matriz B: "<<endl<<endl;
  for (int i = 0 ; i < 3; i++) {
    for (int j = 0 ;  j < 3; j++) {
      cout<<matriz_3x3_1[i][j]+matriz_3x3_2[i][j]<<"   ";
    }
    cout<<"\n\n";
  }

  cout<<"\n\n";
  getch();
  return 0;
}

