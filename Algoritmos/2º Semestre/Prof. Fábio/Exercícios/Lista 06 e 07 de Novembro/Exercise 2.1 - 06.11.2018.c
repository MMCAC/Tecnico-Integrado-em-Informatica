#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float m[12][4];
    int i;
    int j;
    float soma[12];
    float st = 0;

    for(i = 0; i < 12; i++)
    {
        soma[i] = 0;
        for(j = 0; j < 4; j++)
        {
            printf("Inform how many cash you made in the month %d in the week %d: ",i+1,j+1);
            scanf("%f",&m[i][j]);
            soma[i] = soma[i] + m[i][j];
            st = st + m[i][j];
        }
        system("CLS");
    }

    printf("Total of the cash in the months: \n");

    for(i = 0; i < 12; i++)
    {
            printf("Month %d: %f \n",i+1,soma[i]);
    }

    printf("\n\nWeeks: \n");

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Total of the cash in the week %d: %f \n",i+1,m[i][j]);
        }
    }

    printf("\n\nYear: \n");
    printf("The total of cash in the year: %f",st);
    return 0;
}
