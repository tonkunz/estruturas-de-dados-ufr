/*
* Pilha estática.
* LIFO - Last In First Out:
* último a entrar, primeiro a sair
*/
#include <stdio.h>

#define TAM 5

/*
 * Definição do nosso registro
*/
typedef struct
{
	int items[TAM];
	int topo;
} stack;

/*
 * Função de inserção de item na pilha:
 * Aqui a função insere um item na pilha,
 * caso a mesma não esteja cheia
*/
void empilha(stack *p, int x)
{
	if (p->topo >= TAM - 1)
		printf("\nPilha esta cheia.\n\n");
	else
	{
		p->topo++;
		p->items[p->topo] = x;
		printf("\nValor inserido com sucesso\n\n");
	}
}

/*
 * Função de remoção de item da pilha:
 * Aqui a função decrementa o topo, caso a
 * pilha não esteja vazia.
*/
void desempilha(stack *p)
{
	if (p->topo == -1)
		printf("Pilha esta vazia...\n\n");
	else
	{
		p->topo--;
		printf("Topo Decrementado...\n\n");
	}
}

/*
 * Função de impressão da pilha:
 * Aqui imprimimos do topo a 0, caso a pilha
 * não esteja vazia.
*/
void imprime(stack *p)
{
	int i;

	if (p->topo == -1)
		printf("Pilha esta vazia...\n\n");
	else
	{
		for (i = p->topo; i >= 0; i--)
		{
			printf("Pilha[%i] = %i\n", i, p->items[i]);
		}
		printf("\n\n");
	}
}

int main()
{
	// Declarando nossa pilha
	stack pilha;
	// Declarando as demais variáveis
	int x, menu = 0;

	/*
	 * Iniciando nossa pilha setando o topo, já
	 * que a mesma pode vir com "lixo" de memória
	*/
	pilha.topo = -1;

	do
	{
		printf("____________________________________________________________\n");
		printf("-= STACK MENU =-\n\n");
		printf("1 - Para empilhar.\n");
		printf("2 - Para desempilhar.\n");
		printf("3 - Para imprimir a pilha\n");
		printf("0 - Para encerrar o programa\n");
		scanf("%i", &menu);

		switch (menu)
		{
		case 1:
			printf("\nEmpilhar:\n");
			printf("Insira o valor que quer empilhar: ");
			scanf("%i", &x);
			empilha(&pilha, x); // As funções recebem o endereço da pilha
			break;
		case 2:
			printf("\nDesempilhar\n");
			desempilha(&pilha); // As funções recebem o endereço da pilha
			break;
		case 3:
			printf("\nImprimir:\n");
			imprime(&pilha); // As funções recebem o endereço da pilha
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
