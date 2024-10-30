#include <stdio.h>
// Arreglos y apuntadores 
void camValor(int *paramtro){
	paramtro[0] = 20;
	paramtro[1] = 40;
	paramtro[2] = 60;
}
int main() {
	int arg[] = {10, 20, 30};
	printf("Valores antes: %d, %d, %d", arg[0], arg[1], arg[2]);
	//Llamamos a la funcion
	camValor(arg);
	printf("\nValores despues: %d, %d, %d", arg[0], arg[1], arg[2]);
	
	return 0;
}

