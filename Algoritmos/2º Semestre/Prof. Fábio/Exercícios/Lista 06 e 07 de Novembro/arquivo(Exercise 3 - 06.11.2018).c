#include <stdio.h>
#include <stdlib.h>

/*
    FILE:Ponteiro para arquivo. A função deste ponteiro é "apontar" a localização de um registro;
    fopen:Utilizado para trabalhar com um arquivo, a primeira operação é abrir este arquivo;
    fprintf:A função fprintf armazena dados em um arquivo. Seu funcionamento é muito semelhante ao printf, a diferença principal é a existência de um parâmetro para informar o arquivo onde os dados serão armazenados.
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
