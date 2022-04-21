/*
 *
 * 15. Realice un programa que solicite al usuario que piense un numero entero entre el 1 y el 100. El programa debe generar
 * un numero aleatorio en ese mismo rango[1-100], e indicarle al usuario si el numero que digito es menor o mayor al numero
 * aleatorio, asi hasta que lo adivine. Y por ultimo mostrarle el numero de intentos que le llevo.
 *
 * variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
 * */

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
  int num, date, count = 0, subs = 0;

  srand(time(NULL));
  date = 1 + rand() % (100);

  cout<<endl<<date<<endl;
  cout<<endl<<"Debes adivinar el numero, tienes 5 intentos para lograrlo"<<endl;
  do{
    cout<<endl<<"Intenta adivinar el numero, del 1 al 100: "; cin>>num;
    count++;

    if(num != date){
      if(num>date){
        subs = num-date;
      }
      else{
        subs = date-num;
      }
    cout<<endl<<"Estuviste: "<<subs<<" numeros cerca"<<endl;
    }

  }while(num != date && count != 5);
  
  if(num == date){
    cout<<endl<<"Excelente lo has logrado!"<<endl;
    cout<<endl<<"Intentos: "<<count<<endl;
  }
  else{
    cout<<endl<<"Ouh has llegado al limite de intentos!... No lo has logrado, intentalo de nuevo! "<<endl;
    cout<<endl<<"Intentos: "<<count<<endl;

  }

  return 0;
}
