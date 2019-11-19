/*
 - Pilha dinamicamente encadeada
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura da célula da pilha
typedef struct celula{
	int elemento;
	struct celula *prox;
} Celula;

// Estrutura da Pilha
typedef struct pilha{
	Celula *topo;	
} Pilha;

// Definição das funções
Pilha* criaPilha();
bool pilhaVazia(Pilha *pilha);
void empilha(Pilha *pilha, int x);
void desempilha(Pilha *pilha);
void imprimePilha(Pilha *pilha);

/*
 * Função criaPilha:
 * Esta função é do tipo Pilha, pois retornará uma pilha devidamente
 * inicializada, ou seja, com tamanho 0 e o topo apontado para NULL.
*/
Pilha* criaPilha() {
	// Aloca memória e retorna um ponteiro do tipo Pilha (casting)
	Pilha *pilha = (Pilha *) malloc(sizeof(Pilha));
	
	// Define os valores iniciais
	pilha->topo = NULL;
	
	// Retorna a nova estrutura
	return pilha;
}

/*
 * Função pilhaVazia (isEmpty)
*/
bool pilhaVazia(Pilha *pilha) {
  return (pilha->topo == NULL);
}

/*
 * Função empilhar (push):
*/
void empilha(Pilha *pilha, int x) {
	Celula *nova = (Celula *) malloc(sizeof(Celula));
	
	nova->elemento = x;
	nova->prox = pilha->topo;
	
	pilha->topo = nova;
}

/*
 * Função desempilhar (pop):
*/
void desempilha(Pilha *pilha) {
  Celula *aux;

  if (pilhaVazia(pilha)) {
    printf("\n\nPilha vazia...\n\n");
  } else {
    aux = pilha->topo;
    pilha->topo = aux->prox;
    free(aux);
  }
}

/*
 * Função imprimePilha (print):
*/
void imprimePilha(Pilha *pilha) {
  Celula *celula = pilha->topo;

  printf("Pilha: \"");
  while(celula != NULL) {
    printf("%d ", celula->elemento);
    celula = celula->prox;
  }
  printf("\"\n\n\n");
}

int main() {
	// Cria um ponteiro para lista recebendo o retorno da função createList()
	Pilha *p = criaPilha();
	
	// Demais variáveis
	int x, menu;

  do {
    printf("=== PILHA DINAMICA === \n\n");
    printf("1 - empilha / 2 - desempilha / 0 - encerra: ");
    scanf("%d", &menu);
    switch(menu){
      case 1:
        printf("\nEmpilha: \n\n");
        printf("Insira valor: ");
        scanf("%d", &x);
        empilha(p, x);
        imprimePilha(p);
        break;
      case 2:
        printf("\nDesempilha: \n\n");
        desempilha(p);
        imprimePilha(p);
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