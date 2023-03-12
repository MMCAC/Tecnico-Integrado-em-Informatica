#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Uma floricultura gostaria de fazer um algoritmo que pudesse calcular o valor total de
vendas de cada planta no dia. Criar um algoritmo que deixe cadastrar 50 tipos de plantas
(identificadas por um código numérico inteiro). Para cada planta, o cadastrar a
quantidade e o valor unitário. Apresentar a matriz com os valores e o total calculado de
cada planta.
*/

int main()
{
    int v[50][4];
    int i;
    int j;

    for(i = 0; i < 50; i++)
    {
        printf("Inform the code of the plant %d: ",i+1);
        scanf("%d",&v[i][0]);

        printf("Inform how many plants are the same type of the plant %d: ",v[i][0]);
        scanf("%d",&v[i][1]);

        printf("Inform the unitary value of the plant %d (integrate): ",v[i][0]);
        scanf("%d",&v[i][2]);

        v[i][3] = v[i][2]*v[i][1];
    }
    system("CLS");

    printf("---------------PLANTS---------------");

    for(j = 0; j < 50; j++)
    {
        printf("\nCode of the plant %d: %d",j+1,v[j][0]);
        printf("\nQuantity of the plant %d(%d): %d",j+1,v[j][0],v[j][1]);
        printf("\nTotal value: %d \n",v[j][3]);
        printf("--------------------------------");
    }

    return 0;
}
