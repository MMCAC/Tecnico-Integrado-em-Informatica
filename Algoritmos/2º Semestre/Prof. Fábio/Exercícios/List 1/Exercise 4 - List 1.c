#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int v1[50];
    int v2[50];
    int sum = 0;

    printf("Inform the fifth numbers of the first vector: \n");

    for(i = 0; i < 50; i++)
    {
        scanf("%d",&v1[i]);
        sum = sum + v1[i];
    }
    system("CLS");


    printf("Inform the fifth numbers of the seconds numbers: \n");

    for(j = 0; j < 50; j++)
    {
        scanf("%d",&v2[j]);
        sum = sum + v2[j];
    }
    system("CLS");

    printf("The sum of the one hundred numbers: %d \n",sum);

    return 0;
}
