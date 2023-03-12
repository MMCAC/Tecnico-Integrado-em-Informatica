#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Construa um algoritmo que leia um conjunto de números inteiros para preencher uma matriz
//10x10 e a partir daí, gere um vetor com os maiores elementos de cada linha e outro vetor
//com os menores elementos de cada coluna

int main()
{
        int i;
        int j;
        int m[3][3];

        printf("Inform a matrix 10x10: \n");

        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                scanf("%d",&m[i][j]);
            }
        }
        system("CLS");

        int MaL[3];
        int k;
        int l;

        printf("The biggest numbers of each line: \n");

        for(k = 0; k < 3; k++)
        {
            for(l = 0; l < 3; l++)
            {
                int aux_Mal = m[0][0];

                if(m[k][l] > aux_Mal && l < 3)
                {
                    aux_Mal = m[k][l];
                    MaL[k] = aux_Mal;
                }
                if(m[k][l] > aux_Mal && l == 3)
                {
                    aux_Mal = m[k][l];
                    MaL[k] = aux_Mal;
                }
            }
            printf("%d ",MaL[k]);
        }


        int MeC[3];
        int q;
        int w;
        int z = 0;

        printf("\n\nThe smallest numbers of each column: \n");

        for(q = 0; q < 3; q++)
        {
            for(w = 0; w < 3; w++)
            {
                int aux_MeC = m[0][q];

                if(m[w][q] < aux_MeC && w < 2)
                {
                    aux_MeC = m[w][q];
                    MeC[q] = aux_MeC;
                }
                if(m[w][q] < aux_MeC && w == 2)
                {
                    aux_MeC = m[w][q];
                    MeC[q] = aux_MeC;
                }
            }
            printf("%d ",MeC[q]);
        }

        return 0;
}
