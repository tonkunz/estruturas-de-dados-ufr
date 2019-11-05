// Calloc
#include <stdio.h>

int main() {
	int *ponteiroExemplo;
	
	/* Diferença do calloc x malloc:
	* Com o calloc podemos declarar 5 vezes o tamanho
	* de um tipo de dado, porém limpando os lixos de
	* memória com 0
	*/
	ponteiroExemplo = calloc(5, sizeof(int));
	
	// Imprimindo o resultado do valor apontado por ponteiro
	printf("Valor apontado: %d", *ponteiroExemplo);
	
	// Podemos manipular este ponteiro como um vetor:
	printf("\n\n==== ALOCACAO DE MEMORIA E VETORES ====\n\n");
	
	*(ponteiroExemplo+1) = 10; // Segunda posição recebe 10
	printf("Vetor ponteiroExemplo[%d]: %d\n", 1, *(ponteiroExemplo+1));
	
	// Ou até mesmo de maneira mais direta, como um vetor
	ponteiroExemplo[2] = 20;
	printf("Vetor ponteiroExemplo[%d]: %d\n", 2, ponteiroExemplo[2]);
	
	return 0;
}
