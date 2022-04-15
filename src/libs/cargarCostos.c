/*
 * cargarCostos.c
 *
 *  Created on: 12 abr 2022
 *      Author: LitionGeek
 */

#include "cargarCostos.h"
#include "calcularCostos.h"

void cargarCostos(float *precioAerolinea,float descuento,float interes,float precioBTC,float kilometros,float *precioFinalTD,float *precioFinalTC,float *precioFinalBTC,float *precioFinalPoKilometro){
	*precioFinalTD = calcularDescuento(precioAerolinea[0],descuento);
//	*precioFinalTC = calcularInteres(20000,0.10);
//	*precioFinalBTC = calcularCostoEnBTC(precioBTC,precioAerolinea[0]);
//	*precioFinalPoKilometro = precioPorKM(precioAerolinea[0],kilometros) ;
//	printf("\nprecio en btc cargar %.2f\n",precioFinalBTC);
//	*precioFinalTD = calcularDescuento(precioAerolinea[1],descuento);
//	*precioFinalTC = calcularInteres(precioAerolinea[1],interes);
//	*precioFinalBTC = calcularCostoEnBTC(precioBTC[1],precioAerolinea);
//	*precioFinalPoKilometro = precioPorKM(precioAerolinea[1],kilometros);
	printf("\nprecioFinalTC %.2f\n",precioFinalTC);
}


void cargaForzada(){

}
