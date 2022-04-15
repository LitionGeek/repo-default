/*
 * validaciones.c
 *
 *  Created on: 12 abr 2022
 *      Author: LitionGeek
 */

#include <string.h>
#include <stdio.h>

int validarDatos(char cadenaNumero[20]){
	int largoCadena = strlen(cadenaNumero);
	int puntoEncontrado = 0;
	printf("Validando");
	for(int i = 0; i<largoCadena ; i++){
		if(largoCadena==1 && cadenaNumero[i]=='0'){
			return 1;
		}else{
			if(!isdigit(cadenaNumero[i])){
				return 1;
			}else{
				if(cadenaNumero[i]=='.'){
					if(puntoEncontrado = 1){
						return 1;
					}else{
						puntoEncontrado = 1;
					}
				}
			}
		}

	}
	return 0;
}
