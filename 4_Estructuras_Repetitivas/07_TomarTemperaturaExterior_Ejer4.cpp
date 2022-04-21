/*
 * 4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo
 * de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la
 * temperatura mas alta y la mas baja.
 * */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  float temperatura, temperatura_baja = 0, temperatura_media = 0, temperatura_alta = 0;

  for (int i = 0; i < 24; i+=4) {
    cout<<endl<<"Ingrese la temperatura de la hora "<<i<<":00 es : "; cin>>temperatura;
    cout<<"\n";

    if(temperatura > temperatura_alta){
      temperatura_baja = temperatura_media;
      temperatura_media = temperatura_alta;
      temperatura_alta = temperatura;
    }
    else if(temperatura > temperatura_media && temperatura < temperatura_alta){
      temperatura_baja = temperatura_media;
      temperatura_media = temperatura;
    }
    else{
      temperatura_baja = temperatura;
    }

  cout<<endl<<"\nTemperatura alta  actual es modificada por: "<<temperatura_alta<<" °C";
  cout<<endl<<"\nTemperatura media actual es modificada por: "<<temperatura_media<<" °C";
  cout<<endl<<"\nTemperatura baja  actual es modificada por: "<<temperatura_baja<<" °C";
  cout<<"\n";
  }


  cout<<endl<<"\nTemperatura mas alta es: "<<temperatura_alta<<" °C";
  cout<<endl<<"\nTemperatura media es: "<<temperatura_media<<" °C";
  cout<<endl<<"\nTemperatura mas baja es: "<<temperatura_baja<<" °C";
  cout<<"\n\n";
  
  system("pause");
  return 0;
}
