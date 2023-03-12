#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("Inform a matrix 5x5: \n");

    int i;
    int j;
    int SI = 0;
    int v[5][5];

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&v[i][j]);

        }
    }
    system("CLS");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(v[i][j]%2 != 0)
            {
                SI = SI + v[i][j];
            }
        }
    }
    printf("The sum of the prime numbers is: %d \n\n",SI);

    int q;
    int w;
    int SC = 0;

    for(q = 0; q < 5; q++)
    {
        for(w = 0; w < 5; w++)
        {
            if(w < 4)
            {
                SC = SC + v[w][q];
            }
            if(w == 4)
            {
                SC = SC + v[w][q];

                printf("The sum of the column %d is %d \n",q+1,SC);

                SC = 0;
            }
        }
    }

    int a;
    int b;
    int SL = 0;

    printf("\n");

    for(a = 0; a < 5; a++)
    {
        for(b = 0; b < 5; b++)
        {
            if(b<4)
            {
                SL = SL + v[a][b];
            }
            if(b==4)
            {
                SL = SL + v[a][b];

                printf("The sum of the line %d is %d \n",a+1,SL);

                SL = 0;
            }
        }
    }
    return 0;
}
