/*
 * libreria.c
 *
 *  Created on: 11 abr 2022
 *      Author: LitionGeek
 */

#include "obtenerDatos.h"
#include "validaciones.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "mostrarMensajes.h"

float pedirKilometros(char mensajeKilometros[]){
	int kilometroValido = 1;
	char bufferKilometraje[20];
	float bufferNum;
	setbuf(stdout,NULL);
	//	do{
	printf("\n%s",mensajeKilometros);
	fflush(stdin);
	scanf("%f",&bufferNum);
	//		if(isdigit(bufferNum) )
	//			printf("\nERROR.Valor invalido %s",bufferKilometraje);
	//	}while(isdigit(bufferNum));
	//	bufferNum = (float)*bufferKilometraje;

	printf("kilometraje: %.2f",bufferNum);
	return bufferNum;
	//	strcpy(kilometraje,bufferKilometraje);


}

void pedirPrecio(char mensajeAerolinea[],char mensajePrecio[],float *precios,char *aerolineasValidas){
	float buffer;
	int aerolinea;
	int largo= strlen(aerolineasValidas);
//	printf("Largo %i",largo);
	aerolinea = menuAerolinea(*mensajeAerolinea,*aerolineasValidas);
	printf("Aerolinea ingresada : %i",aerolinea);
	printf("\n%s",mensajePrecio);
	scanf("%f",&buffer);
	precios[aerolinea-1] = buffer;
	printf("precio cargado : %.2f",precios[aerolinea-1]);
//	printf("Cargado ... %.2f",buffer);
}




