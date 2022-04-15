/*
 * mostrarDatos.c
 *
 *  Created on: 12 abr 2022
 *      Author: LitionGeek
 */


void mostrarResultados(float precioEnBTC,float precioTD,float precioTC,float precioPoKilometro){
	printf("\nPrecio Aerolineas: $precio");
	printf("\na)Precio con tarjeta de debito: $%.2f",precioTD);
	printf("\nb)Precio con tarjeta de credito: $%.2f",precioTC);
	printf("\nc)Precio pagando con bitcoin: %.12f BTC",precioEnBTC);
}
