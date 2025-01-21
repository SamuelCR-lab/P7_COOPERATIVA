#include <stdio.h>
#include <stdlib.h>
/*
	Trabajo realizado por Arnau y Samuel
*/

void ajustar_tamanio(int ** puntero_a_puntero, int tamanio){
	*puntero_a_puntero = (int *) realloc(*puntero_a_puntero,tamanio * sizeof(int));
}

void intercambiarValores(int * primero, int * numero_m){
	int posicion = *primero;
	*primero = *numero_m;
	*numero_m = posicion;
}

int encontrar_menor(int const * numero1, int n){
	int menor = numero1[0];
	for (int i = 1; i < n; i++){//
		if (menor > numero1[i]){
			menor = numero1[i];
		}
	}
	return menor;
}

int main(){
	int exit;
	int vueltas = 0;
	int * numeros;
	printf("Escribe cuantos numeros quieras y escribe exit para salir\n");
	numeros = (int *) malloc(sizeof(int));
	do{
		vueltas++;
		ajustar_tamanio(&numeros, vueltas);
		//numeros = (int *) realloc(numeros, vueltas * sizeof(int));
		exit = scanf(" %d", &numeros[vueltas-1]);
	}while(exit != 0);

	for(int i = 0; i < vueltas; i++){
	encontrar_menor(numeros, vueltas);
	}
	free(numeros);
return 0;
}
