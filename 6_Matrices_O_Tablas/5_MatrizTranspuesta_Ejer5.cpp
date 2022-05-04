/**
 * 5. Realice un programa que lea una matriz de 3x3 y cee su matriz transpuesta.
 * La matriz transpuesta es aquella en la que la columna i era la fila i de la matriz original
 *
 *  | 1 2 3 |       | 1 4 7 |
 *  | 4 5 6 |  ---> | 2 5 8 |
 *  | 7 8 9 |       | 3 6 9 |
 */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int numeros[3][3];


  //Ingresando numeros en la matriz

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j ++) {
      cout<<endl<<endl<<"Ingrese un numero: ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
    }
  }

  // Mostrar matriz original
  cout<<endl<<"Mostrar matriz original "<<endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j ++) {
      cout<<numeros[i][j]<<" ";
    }
    cout<<"\n";
  }


  // Mostrar Matriz Transpuesta
  cout<<endl<<"Mostrar matriz transpuesta"<<endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j ++) {
      cout<<numeros[j][i]<<" ";
    }
    cout<<"\n";
  }


  cout<<"\n\n";

  system("pause");
  return 0;
}
