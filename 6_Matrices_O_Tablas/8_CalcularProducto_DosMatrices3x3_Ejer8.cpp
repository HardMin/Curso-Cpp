/*
 * 8. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3
 * */

#include<iostream>
#include<conio.h>

using namespace std;


int main(){
  int matriz_1[3][3], matriz_2[3][3];
  /* int matriz_1[3][3] = { */
  /*     {1,2,3}, */
  /*     {4,5,6}, */
  /*     {7,8,9}}, */ 
  /*   matriz_2[3][3] = { */
  /*     {1,2,3}, */
  /*     {4,5,6}, */
  /*     {7,8,9}}; */
  int matriz[3][3], sum = 0;

  cout<<endl<<endl;
  for (int i = 0; i<3; i++) {
    for (int j = 0; j<3; j++) {
      cout<<endl<<"Matriz 1. Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz_1[i][j];
    }
  }
  cout<<endl<<endl;
  for (int i = 0; i<3; i++) {
    for (int j = 0; j<3; j++) {
      cout<<endl<<"Matriz 2. Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz_2[i][j];
    }
  }

  cout<<endl<<endl;
  for (int c = 0; c < 3; c++) {
    for (int i = 0; i<3; i++) {
      for (int j = 0; j<3; j++) {
        sum += matriz_1[c][j] * matriz_2[j][i];
        matriz[c][i] = sum;
      }
      sum = 0;
    }
  }


  for (int i = 0; i<3; i++) {
    for (int j = 0; j<3; j++) {
      cout<<" "<<matriz[i][j]<<" ";
    }
    cout<<endl<<endl;
  }

  getch();
  return 0;
}

