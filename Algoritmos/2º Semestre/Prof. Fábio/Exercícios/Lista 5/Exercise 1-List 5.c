#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que determine a média e a situação de um aluno em uma disciplina.
A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3), seu número
de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro para uma
variável (media), conforme o seguinte protótipo:
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);
Na variável indicada pelo ponteiro media, a função deve armazenar a média do aluno,
calculada como a média aritmética das três provas. Além disso, a função deve retornar
um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte
critério
*/

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media)
{
    char ret;
    *media = (p1 + p2 + p3)/3;
    if((faltas*100)/aulas <= 25.00)
    {
        if(*media >= 6)
        {
            ret = 'A';
            return ret;
        }
        if(*media < 6)
        {
            ret = 'R';
            return ret;
        }
    }
    if((faltas*100)/aulas > 25.00)
    {
        ret = 'F';
        return ret;
    }
}

int main()
{
    float p1, p2, p3;
    int faltas;
    int aulas;
    float *media;
    printf("Inform the first note: \n");
    scanf("%f",&p1);
    printf("Inform the second note: \n");
    scanf("%f",&p2);
    printf("Inform the third note: \n");
    scanf("%f",&p3);
    printf("Inform how many times the student was absent: \n");
    scanf("%d",&faltas);
    printf("Inform the quantity of classes: \n");
    scanf("%d",&aulas);

    system("CLS");

    char ret;
    ret = situacao(p1,p2,p3,faltas,aulas,&media);

    if(ret == 'A')
    {
        printf("Aluno Aprovado!");
    }
    if(ret == 'R')
    {
        printf("Aluno Reprovado!");
    }
    if(ret == 'F')
    {
        printf("Aluno Reprovado por Falta!");
    }


    return 0;
}
