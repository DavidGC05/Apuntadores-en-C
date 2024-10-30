#include <stdio.h>
// Paso por referencia
void cambioValor(int *parametro){
	*parametro = 80;
}
int main() {
	int argumento = 20;
	printf("Valor argumento antes de la funcion: %d", argumento);
	
	cambioValor(&argumento);
	printf("\nValor despues de paso por referencia: %d", argumento);
	return 0;
}

