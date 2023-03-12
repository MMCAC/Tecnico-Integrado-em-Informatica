#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um aplicativo utilizando fun��es de convers�o entre as temperaturas Celsius e
Farenheit.
Primeiro o usu�rio deve escolher se vai entrar com a temperatura em C�lsius ou
Farenheit, depois a convers�o escolhida � realizada atrav�s de um comando SWITCH.
Se C � a temperatura em C�lsius e F em farenheit, as f�rmulas de convers�o s�o:
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
