#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int m[5][5];
    int m2[5][5];
    int i;
    int j;

    printf("Inform a matrix 5x5: \n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&m[i][j]);

            m2[i][j] = m[i][j];
        }
    }
    system("CLS");

    int aux;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == 1)
            {
                aux = m[i][j];
                m[i][j] = m[i+3][j];
                m[i+3][j] = aux;
            }
        }
    }

    printf("A. \n");

    int f;
    int g;


    for(f = 0; f < 5; f++)
    {
        for(g = 0; g < 5; g++)
        {
            printf("[ %d ]",m[f][g]);
        }
        printf("\n");
    }

    int q;
    int w;
    int aux2;

    for(q = 0; q < 5; q++)
    {
        for(w = 0; w < 5; w++)
        {
            if(q == 0)
            {
                aux2 = m[w][q];
                m[w][q] = m[w][q+3];
                m[w][q+3] = aux2;
            }
        }
    }

    printf("\nB. \n");

    int a;
    int b;

    for(a = 0; a < 5; a++)
    {
        for(b = 0; b < 5; b++)
        {
            printf("[ %d ]",m[a][b]);
        }
        printf("\n");
    }

    int o;
    int p;
    int aux3;
    int gh = 4;

    for(o = 0; o < 5; o++)
    {
        for(p = 0; p < 5; p++)
        {
            if(o == p)
            {
                aux3 = m[o][p];
                m[o][p] = m[gh][p];
                m[gh][p] = aux3;
                gh--;
            }
        }
    }

    printf("\nC. \ D. \n");

    int ma;
    int mb;

    for(ma = 0; ma < 5; ma++)
    {
        for(mb = 0; mb < 5; mb++)
        {
            printf("[ %d ]",m[ma][mb]);
        }
        printf("\n");
    }
    return 0;
}
