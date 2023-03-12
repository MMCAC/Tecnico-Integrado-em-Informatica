#include <stdio.h>
#include <stdlib.h>

/*
    FILE:Ponteiro para arquivo. A fun��o deste ponteiro � "apontar" a localiza��o de um registro;
    fopen:Utilizado para trabalhar com um arquivo, a primeira opera��o � abrir este arquivo;
    fprintf:A fun��o fprintf armazena dados em um arquivo. Seu funcionamento � muito semelhante ao printf, a diferen�a principal � a exist�ncia de um par�metro para informar o arquivo onde os dados ser�o armazenados.
    fclose:Utilizado para o fechamento de arquivo;

*/
int main(){
    FILE *arq;
    char texto[100];

    arq = fopen("arquivo.txt","w");

    if(arq == NULL){
        printf("Erro!");
        return 1;
    }

    printf("Plagiando o facebook... \nComo esta se sentindo hoje?:");
    scanf(" %[^\n]s",texto);

    fprintf(arq, "%s", texto);

    fclose(arq);

    printf("Sucesso!");
    system("pause");
    return 0;
}
