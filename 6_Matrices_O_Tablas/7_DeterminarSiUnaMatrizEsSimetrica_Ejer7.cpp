/*
 * 7. Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica
 * si es cuadrada y sies igual a su matriz transpuesta
 *
 *
 * | 8  1  3 |        | 8  1  3 |
 * | 1  7  4 |  -->   | 1  7  4 |
 * | 3  4  9 |        | 3  4  9 |
 *
 * */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
  int numeros[100][100], filas, columnas;
  char band = 'F';

  cout<<endl<<"Digite el numero de filas: "; cin>>filas;
  cout<<endl<<"Digite el numero de columnas: "; cin>>columnas;


  for (int i = 0; i < filas; i++) {
    for (int j = 0; j< columnas; j++) {
      cout<<"Digite un numero ["<<i<<"] ["<<j<<"]: "; cin>>numeros[i][j];
    };
  };

  if (filas == columnas) {
    for (int i = 0; i<filas; i++) {
      for (int j = 0; j<columnas; j++) {
        cout<<" "<<numeros[i][j]<<" ";
        if(numeros[i][j] == numeros[j][i]){
          band = 'V';
        };
      };
      cout<<endl<<endl;
    };
  };

  if (band != 'F') {
    cout<<endl<<endl<<"Es Simetrica";
  }
  else {
    cout<<endl<<endl<<"No es Simetrica";
  };

  getch();
  return 0;
}
