// Fila dinâmica
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura da célula da Fila
typedef struct celula {
	int elemento;
	struct celula *prox;
} Celula;

// Estrutura da Fila
typedef struct fila {
	Celula *cabeca;
	Celula *cauda;
} Fila;

// Definição das funções
Fila* criarFila();
bool filaVazia(Fila *fila);
void addCelula(Fila *fila, int x);
void removeCelula(Fila *fila);
void imprimeFila(Fila *fila);

/*
 * Função criaFila:
 * Esta função é do tipo Fila, pois retornará uma pilha devidamente
 * inicializada, ou seja, com cabeca e cauda apontadas para NULL.
*/
Fila* criarFila() {
	// Aloca a nova fila na memória e retorna o ponteiro
	Fila *fila = (Fila *) malloc(sizeof(Fila));
	
	// Inicio os valores
	fila->cabeca = NULL;
	fila->cauda = NULL;
	
	// Retorna a fila devidamente criada
	return fila;
}

/*
 * Função filaVazia (isEmpty)
*/
bool filaVazia(Fila *fila) {
	return (fila->cabeca == NULL);
}
 
/*
 * Função enfileirar:
*/
void addCelula(Fila *fila, int x) {
	Celula *nova = (Celula *) malloc(sizeof(Celula));
	
	nova->elemento = x;
	nova->prox = NULL;
	
	if (fila->cabeca == NULL) {
		fila->cabeca = nova;
		fila->cauda = nova;
	} else {
		fila->cauda->prox = nova;
		fila->cauda = nova;
	}
}

// Função de remoção na cabeça
void removeCelula(Fila *fila) {
	Celula *aux = fila->cabeca;
	
	if (filaVazia(fila)) {
		printf("\nFila vazia...\n\n");
	} else { 
		if(aux != NULL && aux->prox == NULL){
			fila->cabeca = NULL;
			fila->cauda = NULL;
			free(aux);
		} else {
			fila->cabeca = aux->prox;
			free(aux);
			printf("\nElemento removido...\n\n");
		}
	}
}

// Função de imprimir Fila
void imprimeFila(Fila *fila) {
	Celula *aux = fila->cabeca;
	
	printf("Fila: \"");
	while(aux != NULL) {
		printf("%d  ", aux->elemento);
		aux = aux->prox;
	}
	printf("\"\n\n\n");
}

int main() {
	// Cria um ponteiro do tipo fila que recebe a alocação da nova fila
	Fila *f = criarFila();
	
	// Demais variáveis
	int x, menu;
	
  do {
    printf("=== FILA DINAMICA === \n\n");
    printf("1 - Adiciona valor / 2 - Remove / 0 - encerra: ");
    scanf("%d", &menu);
    switch(menu){
      case 1:
        printf("\nEnfileira: \n\n");
        printf("Insira valor: ");
        scanf("%d", &x);
        addCelula(f, x);
        imprimeFila(f);
        break;
      case 2:
        printf("\nRemove: \n\n");
        removeCelula(f);
        imprimeFila(f);
        break;
      case 0:
        printf("\nVoce encerrou o programa...\n\n");
        break;
      default:
        printf("\nOpcao invalida...\n\n");
    }
  } while(menu != 0);
	
	return 0;
}
