/* Alocação dinâmica
* Função free()
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	// Alocando memórica com casting
	int *ponteiroExemplo = (int *) malloc(sizeof(int));
	
	*ponteiroExemplo = 1000;
	
	printf("Valor apontado pelo ponteiro: %d\n", *ponteiroExemplo);
	
	free(ponteiroExemplo);
	
	printf("Resultado pos-free de ponteiro: %d", *ponteiroExemplo);
	
	return 0;
}

/* Observações finais:
	- free somente desaloca, não limpando "lixos de memória.
	
	- Ponteiros continuam apontando para os endereços desalocados.
*/
