#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que receba 6 n�meros inteiros e mostre:
� Os n�meros pares digitados;
� A soma dos n�meros pares digitados;
� Os n�meros �mpares digitados;
� A quantidade de n�meros �mpares digitados
*/

int main()
{
    int v[6];
    int i;
    int qp = 0;

    for(i = 0; i < 6; i++)
    {
        printf("Inform the number: ");
        scanf("%d",&v[i]);
    }
    system("CLS");

    for(i = 0; i < 6; i++)
    {
        if(v[i]%2 == 0)
        {
            printf("Pair numbers:");
            printf(" %d",v[i]);
            printf("\n");
        }
    }

    for(i = 0; i < 6; i++)
    {
        if(v[i]%2 != 0)
        {
            printf("\nOdd numbers:");
            printf(" %d",v[i]);

            qp += 1;
        }
    }
    printf("\n\nQuantity of odd numbers: %d", qp);

    return 0;
}
