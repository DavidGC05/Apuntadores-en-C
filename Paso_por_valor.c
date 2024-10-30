#include <stdio.h>
// Paso por valor

void cambioValor (int parametro){
	parametro = 30;
	
}
int main() {
	
	int argumento = 10;
	printf("\nArgumento antes de llamar la funcion y paso por valor: %d", argumento);
	
	// LLamamos a la funcion
	cambioValor(argumento);
	printf("\nDespues de llamar funcion y realizar paso por valor: %d", argumento);
	return 0;
}

