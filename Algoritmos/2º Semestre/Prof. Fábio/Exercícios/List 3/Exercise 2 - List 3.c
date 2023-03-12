#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    int np,idade,poltrona;
    char data[10],de[200],para[200],horario[200],nome[200];
}bilhete;

int main()
{
    bilhete passageiro[4];
    float media = 0;
    int j;

    for(j = 0; j < 4; j++)
    {
        setlocale(LC_ALL, "portuguese");

        printf("Informe o número da passagem: ");
        scanf("%d",&passageiro[j].np);
        printf("Informe a data: ");
        scanf(" %[^\n]s",&passageiro[j].data);
        printf("Informe o local de partida: ");
        scanf(" %[^\n]s",&passageiro[j].de);
        printf("Informe o destino: ");
        scanf(" %[^\n]s",&passageiro[j].para);
        printf("Informe o horário: ");
        scanf(" %[^\n]s",&passageiro[j].horario);
        printf("Informe a poltrona: ");
        scanf(" %[^\n]s",&passageiro[j].poltrona);
        printf("Informe a idade: ");
        scanf("%d",&passageiro[j].idade);

        media = media + passageiro[j].idade;

        printf("Informe o nome do passageiro: ");
        scanf(" %[^\n]s",&passageiro[j].nome);
        system("CLS");
    }

    media = media/4;
    printf("Média: &f\n",media);

    for(j = 0; j < 4; j++)
    {
        if(passageiro[j].idade > media)
        {
            printf("O passageiro %s possui idade acima da média! \n",passageiro[j].nome);
        }
    }
    return 0;
}
