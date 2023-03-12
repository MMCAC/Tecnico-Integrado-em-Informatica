#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Considere um vetor de trajet�rias de 9 elementos, onde cada elemento possui o valor do
pr�ximo elemento do vetor a ser lido.
 �ndice 1 2 3 4 5 6 7 8 9
 Valor 5 7 6 9 2 8 4 0 3
Assim, a sequ�ncia da leitura seria 1, 5, 2, 7, 4, 9, 3, 6, 8, 0
Fa�a um algoritmo que seja capaz de ler esse vetor e seguir a trajet�ria.
*/

int main()
{
    int v[9] = {5,7,6,9,2,8,4,0,3};
    int i = 1;

    while(i != 0)
    {
        printf("%d ", i);
        i = v[i-1];
    }
    printf("%d ",i);

    return 0;
}
