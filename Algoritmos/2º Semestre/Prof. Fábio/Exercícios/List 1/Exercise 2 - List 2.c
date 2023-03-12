#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int z;

    printf("Inform how many numbers you'll inform: \n");
    scanf("%d",&z);
    system("CLS");

    int v[z];
    int i;

    printf("Inform the numbers: \n");

    for(i = 0; i < z; i++)
    {
        scanf("%d",&v[i]);
    }
    system("CLS");


    printf("Inverse order: \n");

    int g;

    for(g = z-1; g >= 0; g--)
    {
        printf("%d ",v[g]);
    }

    return 0;
}
