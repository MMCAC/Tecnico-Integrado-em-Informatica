#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define RAND_MAX 6

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf ("Intervalo de n�mero [0, %d] \n",RAND_MAX);
    srand((unsigned)time(NULL));

    for(i = 0; i < 1; i++)
    {
        printf("N�mero aleat�rio: %d",rand()%RAND_MAX);
    }
    return 0;
}
