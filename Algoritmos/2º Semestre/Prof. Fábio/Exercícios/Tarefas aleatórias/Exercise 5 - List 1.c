#include <stdio.h>
#include <conio.h>

int main()
{
    int v[10];

    printf("Inform the numbers: \n");

    int i;

    for(i = 0; i < 10; i++)
    {
        scanf("%d",&v[i]);
    }

    printf("\n\nAfter: \n");

    int j;

    for(j = 0; j < 10; j++)
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
