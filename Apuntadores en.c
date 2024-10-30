#include <stdio.h>

int main(int argc, char *argv[]) {
	//Copia de la referencia de memoria (Apuntadores) 
	int a = 20;
	printf("Valor a: %d", a);
	//Definimos una variable apuntador
	int *b = &a;
	// Modificamos el valor de a o *b
	// *variable -> Desreferencia
	*b = 40;
	// Imprimir los valores
	printf("\nValor de a = %d", a);
	printf("\nValor de b = %d", *b);
	//Imprimimos direcciones de memoria
	printf("\nReferencia de memoria de a = %p", &a);
	printf("\nReferencia de apuntador de b = %p", b);
	printf("\nReferencia de memoria de b = %p", &b);
	return 0;
}

