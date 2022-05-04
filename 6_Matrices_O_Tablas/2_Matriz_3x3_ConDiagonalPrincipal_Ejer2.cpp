/*
 * 2. Realize un programa que defina una matriz de 3x3 y escriba un ciclo para que
 * muestre la diagonal principal de la matriz
 * */

#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
  int matriz_3x3[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  // Matriz Completa

  cout<<endl<<"Matriz 3x3 completa con los numeros de la diagonal principal marcados. \n"<<endl;
  for (int i = 0; i<3; i++) {
    for (int j = 0; j<3; j++) {
      if ((i == 0 && j == 0) || (i == 1 &&  j == 1) || (i == 2 && j == 2)) {
        cout<<"'"<<matriz_3x3[i][j]<<"'";
      }
      else{
        cout<<" "<<matriz_3x3[i][j]<<" ";
      }
    }
    cout<<"\n";
  }
  cout<<"\n\n";

  // Sacando los numeros de la diagonal principal de la matriz_3x3 
  cout<<endl<<"Numeros de la diagonal principal de la matriz 3x3: \n"<<endl;
  for (int i = 0; i<3; i++) {
    for (int j = 0; j<3; j++) {
      if ((i == 0 && j == 0) || (i == 1 &&  j == 1) || (i == 2 && j == 2)) {
        cout<<matriz_3x3[i][j]<<" ";
      }
      else{
        cout<<" ";
      }
    }
    cout<<"\n";
  }

  getch();
  return 0;
}
