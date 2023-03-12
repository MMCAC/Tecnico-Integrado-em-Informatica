#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float v[10];
    float media = 0;

    printf("Inform ten notes: \n");


    int i;

    for(i = 0; i < 10; i++)
    {
        scanf("%f",&v[i]);
        media = media + v[i];
    }
    media =  media/10;
    system("CLS");


    int j;

    printf("Note(s) superior(s) than the average note: \n");

    for(j = 0; j < 10; j++)
    {
        if(v[j] > media)
        {
            printf("%f \n",v[j]);
        }
    }



    int k;

    printf("\n\nNote(s) below the average note: \n");

    for(k = 0; k < 10; k++)
    {
        if(v[k] < media)
        {
            printf("%f \n",v[k]);
        }
    }

    return 0;
}
