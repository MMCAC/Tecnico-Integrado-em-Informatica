#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int v[20];
    int i;
    int j;
    int k;
    int aux;

    printf("Inform twenty random numbers: \n");

    for(i = 0; i < 20; i++)
    {
        scanf("%d",&v[i]);
    }
    system("CLS");


    printf("In crescent order: \n");

    for(j = 0; j < 20; j++)
    {
        for(k = j+1; k < 20; k++)
        {
            if(v[j]> v[k])
            {
                aux = v[j];
                v[j] = v[k];
                v[k] = aux;
            }
        }
        printf("%d \n",v[j]);
    }
    return 0;
}
