#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Os professores do IFMS desejam saber em qual cidade onde tem um campus, o
combustível é mais barato. Crie um algoritmo que leia, compare e apresente os menores
valores do litro de álcool, gasolina e diesel entre as cidades de Aquidauana, Coxim,
Jardim, Campo Grande, Naviraí, Três Lagoas, Dourados, Nova Andradina, Ponta Porã e
Corumbá.
*/

int main()
{
    float p[10][3];
    int i;
    int j;
    float menA=10;
    float menG=10;
    float menD=10;

    printf("---------------CITIES---------------\n\n(1)Aquidauana\n(2)Coxim\n(3)Jardim\n(4)Campo Grande\n(5)Navirai\n(6)Tres Lagoas\n(7)Dourados\n(8)Nova Andradina\n(9)Ponta Pora\n(10)Corumba\n--------------------------------\n");

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j == 0)
            {
                printf("Inform the price of the alcohol of the city %d: ",i+1);
                scanf("%f",&p[i][j]);
            }
            if(j == 1)
            {
                printf("Inform the price of the gasoline of the city %d: ",i+1);
                scanf("%f",&p[i][j]);
            }
            if(j == 2)
            {
                printf("Inform the price of the diesel of the city %d: ",i+1);
                scanf("%f",&p[i][j]);
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j == 0)
            {
                if(p[i][j] <= menA)
                {
                    menA = p[i][j];
                }
            }
            if(j == 1)
            {
                if(p[i][j] <= menG)
                {
                    menG = p[i][j];
                }
            }
            if(j == 2)
            {
                if(p[i][j] <= menD)
                {
                    menD = p[i][j];
                }
            }
        }
    }
    system("CLS");

    printf("---------------CITIES---------------\n\n(1)Aquidauana\n(2)Coxim\n(3)Jardim\n(4)Campo Grande\n(5)Navirai\n(6)Tres Lagoas\n(7)Dourados\n(8)Nova Andradina\n(9)Ponta Pora\n(10)Corumba\n--------------------------------\n");
    printf("Lowest price of alcohol between the cities: %f\n",menA);
    printf("Lowest price of gasoline between the cities: %f\n",menG);
    printf("Lowest price of diesel between the cities: %f\n",menD);
    return 0;
}
