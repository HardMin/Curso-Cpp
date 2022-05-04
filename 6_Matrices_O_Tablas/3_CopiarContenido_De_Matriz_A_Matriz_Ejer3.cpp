/*
 * 3. Hacer una matriz de tipo entero de 2 * 2, llenarla de numeros y luego copiar 
 * todo su contenido hacia otra matriz
 */


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int numeros[2][2] = {{1,2}, {3,4}};
  int matriz_2x2[2][2];

  //Copiando el contenido de matriz a matriz
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      //Copiamos el contenido
      matriz_2x2[i][j] = numeros[i][j];

    }
  }

  // Mostrar en terminal
  cout<<endl<<"Matriz de 2 * 2: "<<endl<<endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout<<matriz_2x2[i][j]<<" ";
    }
    cout<<"\n";
  }

  cout<<"\n"<<endl;

  system("pause");
  return 0;
}
