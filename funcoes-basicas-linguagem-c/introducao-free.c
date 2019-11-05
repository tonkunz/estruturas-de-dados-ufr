/* Aloca��o din�mica
* Fun��o free()
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	// Alocando mem�rica com casting
	int *ponteiroExemplo = (int *) malloc(sizeof(int));
	
	*ponteiroExemplo = 1000;
	
	printf("Valor apontado pelo ponteiro: %d\n", *ponteiroExemplo);
	
	free(ponteiroExemplo);
	
	printf("Resultado pos-free de ponteiro: %d", *ponteiroExemplo);
	
	return 0;
}

/* Observa��es finais:
	- free somente desaloca, n�o limpando "lixos de mem�ria.
	
	- Ponteiros continuam apontando para os endere�os desalocados.
*/
