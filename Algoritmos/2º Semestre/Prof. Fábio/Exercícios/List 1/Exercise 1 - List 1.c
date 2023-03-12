#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int z;
    int y;

    printf("Inform the size of your vectors: \n");
    scanf("%d",&z);
    system("CLS");

    y = z+z;

    int v1[z];
    int v2[z];
    int v3[y];
    int i;
    int j;
    int h;
    int u;

    u = 0;

    printf("Inform the numbers of the first vector: \n");

    for(i = 0; i < z; i++)
    {
        scanf("%d",&v1[i]);

        v3[u] = v1[i];
        u++;
    }
    system("CLS");


    printf("Inform the numbers of the second vector: \n");

    for(j = 0; j < z; j++)
    {
        scanf("%d",&v2[j]);

        v3[u] = v2[j];
        u++;
    }
    system("CLS");


    printf("Union: \n");

    for(h = 0; h < y; h++)
    {
        printf("%d \n",v3[h]);
    }

    return 0;
}
