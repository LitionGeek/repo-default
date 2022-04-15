/*
 * calcularCostons.h
 *
 *  Created on: 12 abr 2022
 *      Author: LitionGeek
 */

#ifndef LIBS_CALCULARCOSTOS_H_
#define LIBS_CALCULARCOSTOS_H_

float calcularDescuento(float precioAerolinea,float descuento);
void calcularInteres(float precioAerolinea,float interes,float* puntero);
float calcularCostoEnBTC(float precioBTC,float precioAerolinea);
float precioPorKM(float costoAerolinea,float kilometros);

float recibir(float *valor,float* precio,int);

#endif /* LIBS_CALCULARCOSTOS_H_ */
