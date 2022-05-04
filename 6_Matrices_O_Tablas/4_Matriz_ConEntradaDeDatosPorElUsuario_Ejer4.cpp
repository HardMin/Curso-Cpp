/*
 * 4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios, copiar el contenido
 * a otras matriz y por ultimo mostrarla en pantalla
 * */
 
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
  int numeros[100][100], filas, columnas, NumAleatorios;
  int matriz[100][100];


  cout<<endl;
  cout<<endl<<"Ingrese los numeros de las filas: "; cin>>filas;
  cout<<endl;
  cout<<endl<<"Ingrese los numeros de las columnas: "; cin>>columnas;
  

  srand(time(NULL));

  //Rellenando la matriz 
  for (int i = 0 ; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {

      //Creando Numeros aleatorios
      NumAleatorios= 10 + rand() % (90);

      //Rellenando la matriz
      numeros[i][j] = NumAleatorios;
    }
  }
  
  // Copiar la matriz
  for (int i = 0 ; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      matriz[i][j] = numeros[i][j];
    }
  }

  // Mostrar la matriz
  cout<<endl<<"Mostrando Matriz de "<<filas<<" x "<<columnas<<" :"<<endl<<endl;
  for (int i = 0 ; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout<<matriz[i][j]<<"  ";
    }
    cout<<"\n\n";
  }


  cout<<endl<<"\n";

  system("pause");
  return 0;
}
