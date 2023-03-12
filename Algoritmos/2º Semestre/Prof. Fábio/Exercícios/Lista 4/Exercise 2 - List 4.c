#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um aplicativo utilizando funções de conversão entre as temperaturas Celsius e
Farenheit.
Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou
Farenheit, depois a conversão escolhida é realizada através de um comando SWITCH.
Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:
C= 5.(F-32)/9
F= (9.C/5) + 32
*/

int main()
{
    int type;
    float temp;
    float F;
    float C;
    int i;

    printf("----------------TEMPERATURE----------------\n\n(1)Celsius\n(2)Farenheit\n\n-------------------------------------------\n\n");
    scanf("%d",&type);
    system("CLS");

    for(i = 0; i < 1000; i++)
    {
        if(type != 1 && type != 2)
        {
            printf("Inform a valid number!\n");
            scanf("%d",&type);
            system("CLS");
        }
    }

    switch(type)
    {
    case 1 :
        printf("Inform the temperature in Celsius: \n");
        scanf("%d",&temp);
        system("CLS");
        F = (9*temp/5) + 32;
        printf("The temperature in Farenheit is equal to: %f",F);
        break;
    case 2 :
        printf("Inform the temperature in Farenheit: \n");
        scanf("%d",&temp);
        system("CLS");
        C = 5*(temp-32)/9;
        printf("The temperature in Celsius is equal to: %f",C);
        break;
    }

    return 0;
}
