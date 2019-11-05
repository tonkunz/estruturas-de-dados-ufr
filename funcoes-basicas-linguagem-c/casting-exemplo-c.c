// Exemplo de Casting em C
#include <stdio.h>

int main() {
	int dividendo= 16;
	int divisor = 3;
	float resultado;
	
	// Sem casting
	resultado = dividendo / divisor;
	printf("Sem casting: %d / %d = %f\n", dividendo, divisor, resultado);
	
	// Com casting
	resultado = (float) dividendo / divisor;
	printf("Sem casting: %d / %d = %f\n", dividendo, divisor, resultado);	
	
	return 0;
}

/* Referência
* Link: https://www.ime.usp.br/~pf/algoritmos/aulas/footnotes/cast.html
*/
