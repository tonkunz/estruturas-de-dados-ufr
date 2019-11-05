// Calloc
#include <stdio.h>

int main() {
	int *ponteiroExemplo;
	
	/* Diferen�a do calloc x malloc:
	* Com o calloc podemos declarar 5 vezes o tamanho
	* de um tipo de dado, por�m limpando os lixos de
	* mem�ria com 0
	*/
	ponteiroExemplo = calloc(5, sizeof(int));
	
	// Imprimindo o resultado do valor apontado por ponteiro
	printf("Valor apontado: %d", *ponteiroExemplo);
	
	// Podemos manipular este ponteiro como um vetor:
	printf("\n\n==== ALOCACAO DE MEMORIA E VETORES ====\n\n");
	
	*(ponteiroExemplo+1) = 10; // Segunda posi��o recebe 10
	printf("Vetor ponteiroExemplo[%d]: %d\n", 1, *(ponteiroExemplo+1));
	
	// Ou at� mesmo de maneira mais direta, como um vetor
	ponteiroExemplo[2] = 20;
	printf("Vetor ponteiroExemplo[%d]: %d\n", 2, ponteiroExemplo[2]);
	
	return 0;
}
