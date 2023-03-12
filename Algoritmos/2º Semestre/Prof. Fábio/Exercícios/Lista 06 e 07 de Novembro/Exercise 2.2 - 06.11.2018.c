#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float v[5];
    int x;
    int i;
    int j;
    float media = 0;

    printf("Inform the real numbers: \n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f",&v[i]);
        media = media + v[i];
    }

    media = media/5;

    system("CLS");

    printf("Choose one number: \n\n(1)Normal\n(2)Reverse\n(3)Average\n\n");
    scanf("%d",&x);
    system("CLS");

    if(x == 1)
    {
        for(i = 0; i < 5; i++)
        {
            printf("%f ",v[i]);
        }
    }
    if(x == 2)
    {
        for(j = 4; j >= 0; j--)
        {
            printf("%f ",v[j]);
        }
    }
    if(x == 3)
    {
        printf("The average: %f",media);
    }
    if(x != 1 && x != 2 && x != 3)
    {
        printf("Inform a valid number!\n");
        scanf("%d",&x);
    }

    return 0;
}
