#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Leia uma matriz 10 x 5 que se refere respostas de 5 questões de múltipla escolha,
referentes a 10 alunos. Leia também um vetor de 10 posições contendo o gabarito de
respostas que podem ser 1, 2, 3 ou 5. Seu programa deverá comparar as respostas de cada
candidato com o gabarito e emitir um vetor Resultado, contendo a quantidade de acertos
de cada aluno.
*/

int main()
{
    int m[10][5];
    int gabarito[5];
    int qa[10];
    int i;
    int j;

    for(i = 0; i < 10; i++)
    {
        printf("Inform the answers(1, 2, 3, 4 or 5) of the student %d:\n",i+1);

            for(j = 0; j < 5; j++)
            {
                scanf("%d",&m[i][j]);
            }
            system("CLS");
    }

    printf("Inform the template(1, 2, 3, 4 or 5):\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&gabarito[i]);
    }
    system("CLS");


    printf("---------------TEMPLATE---------------\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d Question: %d \n",i+1,gabarito[i]);
    }

    printf("\n\n---------------RESULTS---------------");

    for(i = 0; i < 10; i++)
    {
        qa[i] = 0;

        printf("\nStudent %d: \n",i+1);

        for(j = 0; j < 5; j++)
        {
            if(m[i][j] == gabarito[j])
            {
                printf("Question %d right!\n",j+1);

                qa[i] += 1;
            }
            else
            {
                printf("Question %d wrong!\n",i+1);
            }
        }

        printf("--------------------------------");
    }

    return 0;
}
