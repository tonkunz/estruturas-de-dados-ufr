/*
* Entendendo a função sizeof
*/
#include <stdio.h>

int main() {
	int inteiroExemplo; // 4 bytes (Pode variar com a arquitetura)
	
	// Imprimindo o tamanho dos dados
	printf("==== SIZE OF PRIMITIVE TYPES ====\n\n");
	printf("Tamanho de um inteiro(sizeof): %li\n", sizeof(inteiroExemplo));
	// Podemos passar diretamente o tipo de dado
	printf("Tamanho de um double(sizeof): %li\n", sizeof(double));
	
	// E funciona com vetor? olhe abaixo
	double vetorExemplo[10];
	printf("\n\n==== SIZE OF ARRAYS ====\n\n");
	printf("Tamanho de um vetor(sizeof): %li\n", sizeof(vetorExemplo));	
	
	// E com estruturas? acompanhe
	
	// Definindo a estrutura
	struct structExemplo {
		int a;
		int b;
		int c;
	};
	
	struct structExemplo registroExemplo;
	printf("\n\n==== SIZE OF STRUCTS ====\n\n");
	printf("Tamanho de um vetor(sizeof): %li\n", sizeof(registroExemplo));		
	
	return 0;
}
