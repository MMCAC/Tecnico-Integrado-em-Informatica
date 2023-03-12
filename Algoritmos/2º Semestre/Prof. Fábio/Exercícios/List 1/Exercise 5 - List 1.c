#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int v[100];

    printf("Inform the numbers: \n");

    int i;

    for(i = 1; i <= 100; i++)
    {
        scanf("%d",&v[i]);
    }
    system("CLS");


    printf("After: \n");

    int j;

    for(j = 1; j <= 100; j++)
    {
        if(v[j]%2 != 0)
        {
            v[j] = 1;
        }
        else
        {
            v[j] = 0;
        }

        printf("%d \n",v[j]);
    }
    return 0;
}
