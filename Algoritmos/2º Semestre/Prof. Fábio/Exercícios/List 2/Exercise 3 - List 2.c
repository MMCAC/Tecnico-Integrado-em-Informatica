#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int m[5][5];

    printf("Inform a matrix 5x5: \n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    system("CLS");

    printf("A. Principal diagonal: \n");

    int a;
    int b;

    for(a = 0; a < 5; a++)
    {
        for(b = 0; b < 5; b++)
        {
            if(a == b)
            {
                printf("%d ",m[a][b]);
            }
        }
    }

    printf("\n\nB.The superior triangle of the principal diagonal: \n");

    int q;
    int w;

    for(q = 0; q < 5; q++)
    {
        for(w = 0; w < 5; w++)
        {
            if((q == 0 && w > 0 )||(q == 1 && w > 1)||(q == 2 && w > 2)||(q == 3 && w > 3)||(q == 4 && w > 4))
            {
                printf("%d ",m[q][w]);
            }
        }
    }

    printf("\n\nC.The lower triangle of the principal diagonal: \n");

    int r;
    int t;

    for(r = 0; r < 5; r++)
    {
        for(t = 0; t < 5; t++)
        {
            if(t < r)
            {
                printf("%d ",m[r][t]);
            }
        }
    }

    int g;
    int h;

    printf("\n\nD. Except the principal diagonal: \n");

    for(g = 0; g < 5; g++)
    {
        for(h = 0; h < 5; h++)
        {
            if(g != h)
            {
                printf("%d ", m[g][h]);
            }
        }
    }

    int y;
    int u;

    printf("\n\nE. Secondary diagonal: \n");

    for(y = 4; y >= 0; y--)
    {
        for(u = 0; u < 5; u++)
        {
            if(y == 4-u)
            {
                printf("%d ",m[y][u]);
            }
        }
    }

    printf("\n\nF.The superior triangle of the secondary diagonal: \n");

    int dl1;
    int dl2;

    for(dl1 = 0; dl1 < 5; dl1++)
    {
        for(dl2 = 0; dl2 < 5; dl2++)
        {
            if(dl1 < 5-dl2-1)
            {
                printf("%d ",m[dl1][dl2]);
            }
        }
    }

    printf("\n\nG.The lower triangle of the secondary diagonal: \n");

    int dl3;
    int dl4;

    for(dl3 = 0; dl3 < 5; dl3++)
    {
        for(dl4 = 0; dl4 < 5; dl4++)
        {
            if(dl3 > 5-dl4-1)
            {
                printf("%d ",m[dl3][dl4]);
            }
        }
    }

    int v1;
    int v2;

    printf("\n\nH. Except the secondary diagonal: \n");

    for(v1 = 0; v1 < 5; v1++)
    {
        for(v2 = 0; v2 < 5; v2++)
        {
            if(4-v1 != v2)
            {
                printf("%d ",m[v1][v2]);
            }
        }
    }

    return 0;
}
