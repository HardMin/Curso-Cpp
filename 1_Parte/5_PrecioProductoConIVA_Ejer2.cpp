/*

Escribe un programa que lea de la entrada estandar el precio de un 
producto y muestre en la salida estandar el precion del producto al
aplicarle el IVA

*/

#include<iostream>

int main(){
	
	double precio, IVA;
	char producto[12] = "Harina Pan";
	precio = 2;
	IVA = 0.3;
	
	std::cout<<" Me Compre una Harina pan, y esta es la factura \n";
	
	std::cout<<"\n Producto: '"<<producto<<"'\n Costo: "<<precio<<"$\n IVA: "<<IVA<<"% \n Total: "<<precio*IVA+precio<<"$";
	
	return 0;
}


