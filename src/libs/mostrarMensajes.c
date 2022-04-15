/*
 * mostrarMenu.c
 *
 *  Created on: 12 abr 2022
 *      Author: LitionGeek
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "obtenerDatos.h"
#include "cargarCostos.h"



void menu(){
	char opcion;
	int costoCargados;
	int kilometroCargado;
	char *aerolineas[20];
	float kilometraje;
	float precioFinalBTC,precioFinalTD,precioFinalTC,precioFinalPoKilometro;
	int largo;
	float preciosAerolineaLATAM=0;
	int precioAACargado=0;
	int precioLatamCargado=0;
	float precioAerolineaArgetina=0;
	float descuento = 0.10;
	float interes = 0.25;
	float precioBTC = 4606954.55;

	int aerolineaElegida;
	float precios[2];
	float prcio[2];
	int precioss= 100;
	float interess = 0.10;
	char aerolineasValidas [2][23]= {"Aerolinias Argentinas","LATAM"};
	setbuf(stdout, NULL);
	do{
		printf("\n\n1.Ingresar Kilometros.");
		printf("\n2.Ingresar precio de vuelo.");
		printf("\n3.Calcular todos los costos.");
		printf("\n4.Informar resultados.");
		printf("\n5.Carga forzada de datos.");
		printf("\n6.Salir");
		printf("\nIntroduzca opcion (1-6): \n");
		fflush(stdin);
		opcion = getchar();

		while(opcion > 7 && opcion <1 ){
			printf("Valor ingresado : %c",opcion);
			printf("\nERROR.Introduzca opcion (1-6): ");
			fflush(stdin);
			opcion = getchar();
		}
		switch(opcion){
		case '1':
			kilometroCargado=0;
			kilometraje = pedirKilometros("Ingrese los kilometros: ");
			break;
		case '2':
			pedirPrecio("Ingrese la aerolinea: ","Ingrese el precio: ",precios,aerolineasValidas);
			costoCargados=0;
			break;
		case '3':
			printf("KM %i costos %i",kilometroCargado,costoCargados);
			if(kilometroCargado==0 && costoCargados ==0){
				printf("\nprecios %.2f \n",precios[0]);
				cargarCostos(precios,descuento,interes,precioBTC,kilometraje,&precioFinalTD,&precioFinalTC,&precioFinalBTC,&precioFinalPoKilometro);
			}else{
				printf("\nERROR. Se deben cargar los kilometros y los precios primero.");
				menu();
			}
			break;
		case '4':
			printf("Precio btc %.2f",precioFinalBTC);
			mostrarResultados(precioFinalTC, precioFinalTD,precioFinalTC,precioFinalPoKilometro);
			break;
		case '5':
			calcularInteres(500,0.10,&precioFinalTC);
			printf("\nPRECIO %.2f",precioFinalTC);
//			cargaForzada(kilometraje,);
			break;
		case '6':

			break;
		default:
			printf("\nERROR. El valor ingresado es incorrecto!");
			break;
		}
	}while(opcion != '6');
}

int menuAerolinea(char mensajeAerolinea[],char aerolineasValidas[]){
	int bufferAerolinea;
	do{
		printf("\n1.Aerolineas Argentinas.\n2.LATAM ");
		printf("\nIngrese la aerolinea a cargar el precio: ");
		fflush(stdin);
		scanf("%d",&bufferAerolinea);
		if(bufferAerolinea < 1 && bufferAerolinea > 2){
			printf("\nERROR.La aerolinea no existe. %c",bufferAerolinea);
		}
		printf("Aerolinea seleccionada %c",bufferAerolinea);
	}while(bufferAerolinea < 1 && bufferAerolinea >2);

	return bufferAerolinea;
}

