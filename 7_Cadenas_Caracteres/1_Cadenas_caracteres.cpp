/*
 * Cadenas de caracteres
 * */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
  char nombre[] = "Diego";
  char nombre2[] = {'D','i','e','g','o'};
  char name[30];

  /* cout<<nombre<<endl; */
  /* cout<<nombre2<<endl; */
  cout<<"Digite su nombre: ";
  cin.getline(name, 20, '\n');

  cout<<name;
  
  getch();
  return 0;
}
