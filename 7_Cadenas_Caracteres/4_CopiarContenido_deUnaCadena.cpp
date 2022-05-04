// Copiar el contenido de una cadena a otra - function strcpy[]

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
  char nombre[] = "Diego";
  char nombre2[20];

  strcpy(nombre2, nombre);

  cout<<nombre2;

  getch();
  return 0;
}
