#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma fun��o que determine a m�dia e a situa��o de um aluno em uma disciplina.
A fun��o recebe como par�metros as tr�s notas de um aluno (p1, p2, e p3), seu n�mero
de faltas (faltas), o n�mero total de aulas da disciplina (aulas) e o ponteiro para uma
vari�vel (media), conforme o seguinte prot�tipo:
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);
Na vari�vel indicada pelo ponteiro media, a fun��o deve armazenar a m�dia do aluno,
calculada como a m�dia aritm�tica das tr�s provas. Al�m disso, a fun��o deve retornar
um caractere indicando a situa��o do aluno no curso, definido de acordo com o seguinte
crit�rio
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
