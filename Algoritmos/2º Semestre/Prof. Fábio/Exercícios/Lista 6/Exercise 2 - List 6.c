#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois
valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa
dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.
*/

int main()
{
    int v[8];
    int x;
    int y;
    int i;

    for(i = 1; i <= 8; i++)
    {
        printf("Inform the number: ");
        scanf("%d",&v[i]);
    }
    system("CLS");


    printf("Inform one position: ");
    scanf("%d",&x);

    printf("Inform another position: ");
    scanf("%d",&y);

    printf("The sum of the numbers in the informed positions: %d",v[x]+v[y]);

    return 0;
}
