/*
 * Fila Circular estatica
*/
#include <stdio.h>

#define TAM 4

// Definindo a estrutura da nossa fila circular
typedef struct {
	int items[TAM];
	int cabeca;
	int cauda;
	int tamanho;
} circQueue;

// Iniciar fila
void iniciaFila(circQueue *fila) {
	fila->cabeca = 0;
	fila->cauda = 0;
	fila->tamanho = 0;
}

// Inserir elemento
void inserirElem(circQueue *fila, int elem) {
	if (fila->tamanho == TAM) {
		printf("\nA fila esta cheia...\n\n");
	} else {
		// Verificacao para "circularidade"
		if (fila->cauda == (TAM -1)) {
			fila->cauda = 0;
			fila->items[TAM-1] = elem;
			fila->tamanho++;
		} else {
			fila->items[fila->cauda] = elem;
			printf("\nItem adicionado: Fila[%d]=%d\n\n", fila->cauda, elem);
			fila->cauda++; // Pula para proxima posicao
			fila->tamanho++;
		}
	}
}

// TODO: Imprimindo lista

// Remover elemento
void removerElem(circQueue *fila) {
	if (fila->tamanho == 0) {
		printf("\nA fila esta vazia...\n\n");
	} else {
		// Verificacao para "circularidade"
		if (fila->cabeca == (TAM-1)) {
			fila->cabeca == 0;
			fila->tamanho--;
			printf("\nRemocao efetuada com sucesso. Cabeca=%d/Tamanho=%d\n\n", fila->cabeca, fila->tamanho);
		} else {
			fila->cabeca++;
			fila->tamanho--;
			printf("\nRemocao efetuada com sucesso. Cabeca=%d/Tamanho=%d\n\n", fila->cabeca, fila->tamanho);
		}
	}
}



int main() {
	// Declarando nossa fila e iniciando-a
	circQueue fila;
	iniciaFila(&fila);
	
	// Declarando as demais variaveis necessarias
	int x, menu = 0;
	
	// Menu principal
	do {
		printf("____________________________________________________________\n");
		printf("-= QUEUE MENU =-\n\n");
		printf("1 - Para adicionar um item.\n");
		printf("2 - Para remover um item.\n");
		printf("3 - Para imprimir a fila em sua totalidade.\n");
		printf("0 - Para encerrar o programa\n");
		scanf("%i", &menu);

		switch (menu)
		{
		case 1:
			printf("\nInserir um valor:\n");
			printf("Insira o valor que quer adicionar na fila: ");
			scanf("%i", &x);
			inserirElem(&fila, x);
			break;
		case 2:
			printf("\nRemover:\n");
			removerElem(&fila);
			break;
		case 3:
			printf("\nImprimir:\n");
			//imprimeLista(&fila);
			break;
		case 0:
			printf("\nVoce escolheu encerrar o programa...\n");
			break;
		default:
			printf("\nEscolha uma opcao valida...\n");
			break;
		}
	} while (menu != 0);
	
	return 0;
}
