/*
 * calcularCostos.c
 *
 *  Created on: 12 abr 2022
 *      Author: LitionGeek
 */

#include "calcularCostos.h"

float calcularDescuento(float precioAerolinea,float descuento){
	float precioConDescuento = 0;
	if(precioAerolinea > 0 && descuento>0){
		precioConDescuento = precioAerolinea*descuento;
	}
//	else{
//		printf("\nEl/los valores ingresados son menores a cero , recibido %.2f",precioAerolinea);
//	}

	return precioConDescuento;
}

void calcularInteres(float precioAerolinea,float interes,float* pResultadoTC){
	float precioConInteres;

	if(precioAerolinea>0 && interes>0){

	}
	else{
		printf("\nEl/los valores ingresados son menores a cero");
	}
	(*pResultadoTC) = (precioAerolinea*interes)+precioAerolinea;
	printf("\nPrecio final %.2f\n",precioConInteres);
}

float recibir(float *valor,float* precio,int precio2){
    int f;
    float buffer;
    printf("Precio: %i",precio2);
    printf("Ingrese elemento:");
    scanf("%f",&buffer);

//    printf("%0.2f ",numero[1]);
    (*precio) = buffer;
    printf("%0.2f ",precio);
}

float calcularCostoEnBTC(float precioBTC,float precioAerolinea){
	float precioEnBTC;
	float precio = 1,costo=2;
	if(precioBTC > 0 && precioAerolinea > 0 ){
		printf("Valor valido------");
		precioEnBTC = precioAerolinea / precioBTC;
	}
		else{
		printf("\nError el monto es menor a cero valor btc %.2f aerolinea %.2f",precioBTC,precioAerolinea);
	}
	return precioEnBTC;
}


float precioPorKM(float costoAerolinea,float kilometros){
	float precioPorKilometro;
	if(costoAerolinea > 0 && kilometros > 0){
		precioPorKilometro = costoAerolinea/kilometros;
	}
//		else{
//		printf("\nEl/los valores ingresados son menores a cero");
//	}
	return precioPorKilometro;
}
