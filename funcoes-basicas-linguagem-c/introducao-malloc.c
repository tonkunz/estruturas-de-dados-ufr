/* Alocação dinâmica
* Função malloc() "memory allocation":
* A função malloc recebe um tamanho de dado como argumento,
* aloca a memória necessária baseada neste parâmetro e retorna
* um ponteiro do tipo void apontando para o início do espaço
* alocado. (ponteiro genérico)
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	/* 
	int *ponteiro = malloc(sizeof(int));
	
	* Este é um exemplo comum de alocação de memória. Em
	* alguns compiladores isto pode gerar o erro, exigindo
	* o "casting".
	* PS:Para melhor entendimento, consulte o final do código
	*/
	
	// Alocando memórica com casting
	int *ponteiroExemplo = (int *) malloc(sizeof(int));
	*ponteiroExemplo = 1000;

	
	// Em alguns casos, o malloc pode falar:
	if (!ponteiroExemplo) {
		printf("\nMalloc falhou e armazenou NULL.\n");
	}
	
	printf("Valor apontador pelo ponteiro: %d", *ponteiroExemplo);
	
	return 0;
}

/* Observações finais:
	- Casting: O casting somente é necessário em compiladores C++.
		O faz a conversão automática e segura de ponteiros tipo void para
		qualquer outro tipo sem precisar de casting. Utilizar casting,
		inclusive, pode esconder erros caso você não incluia todas
		bibliotecas necessárias. Confira o link:
		https://www.ime.usp.br/~pf/algoritmos/aulas/footnotes/cast.html
		
	- Malloc somente aloca, não limpando "lixos de memória.
*/
