#include <stdio.h>
#include <locale.h>

typedef struct {
    int banco, agencia, conta, numCheque;
    double valor;
    char valorExtenso[200], nominal[200], data[10], cliente[200];
} chequeBancario;

int main(){
	setlocale(LC_ALL, "en-US");

	chequeBancario cB;
	printf("Nome do cliente:\n");
	scanf(" %[^\n]s",&cB.cliente);

	printf("\n\nImprimindo o nome do cliente:\n");
	printf("Cliente: %s",cB.cliente);

	return 0;
}
