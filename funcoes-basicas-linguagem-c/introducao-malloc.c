/* Aloca��o din�mica
* Fun��o malloc() "memory allocation":
* A fun��o malloc recebe um tamanho de dado como argumento,
* aloca a mem�ria necess�ria baseada neste par�metro e retorna
* um ponteiro do tipo void apontando para o in�cio do espa�o
* alocado. (ponteiro gen�rico)
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	/* 
	int *ponteiro = malloc(sizeof(int));
	
	* Este � um exemplo comum de aloca��o de mem�ria. Em
	* alguns compiladores isto pode gerar o erro, exigindo
	* o "casting".
	* PS:Para melhor entendimento, consulte o final do c�digo
	*/
	
	// Alocando mem�rica com casting
	int *ponteiroExemplo = (int *) malloc(sizeof(int));
	*ponteiroExemplo = 1000;

	
	// Em alguns casos, o malloc pode falar:
	if (!ponteiroExemplo) {
		printf("\nMalloc falhou e armazenou NULL.\n");
	}
	
	printf("Valor apontador pelo ponteiro: %d", *ponteiroExemplo);
	
	return 0;
}

/* Observa��es finais:
	- Casting: O casting somente � necess�rio em compiladores C++.
		O faz a convers�o autom�tica e segura de ponteiros tipo void para
		qualquer outro tipo sem precisar de casting. Utilizar casting,
		inclusive, pode esconder erros caso voc� n�o incluia todas
		bibliotecas necess�rias. Confira o link:
		https://www.ime.usp.br/~pf/algoritmos/aulas/footnotes/cast.html
		
	- Malloc somente aloca, n�o limpando "lixos de mem�ria.
*/
