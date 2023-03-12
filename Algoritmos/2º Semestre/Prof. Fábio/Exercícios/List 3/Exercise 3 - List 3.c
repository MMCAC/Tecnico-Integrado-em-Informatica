#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    int cdc,ndp;
    char ndo[500],doado[500],nda[500],edi[500];

}c_e;

typedef struct
{
    int cdc[500],ndp;
    char ndo[500],doado[500],nda[500],edi[500];

}c_h;

typedef struct
{
    int cdc[500],ndp;
    char ndo[500],doado[500],nda[500],edi[500];

}c_b;

int main()
{
    c_e livro_e[500];
    c_h livro_h[500];
    c_b livro_b[500];

    int i;

    printf("Livros de Ciências Exatas: \n");

    for(i = 0; i < 500; i++)
    {
        setlocale(LC_ALL, "portuguese");

        printf("Código de catalogação: ");
        scanf("%d",&livro_e[i].cdc);
        printf("Nome da obra: ");
        scanf(" %[^\n]s",&livro_e[i].ndo);
        printf("Nome do autor: ");
        scanf(" %[^\n]s",&livro_e[i].nda);
        printf("Editora: ");
        scanf(" %[^\n]s",&livro_e[i].edi);
        printf("Números de páginas: ");
        scanf("%d",&livro_e[i].ndp);
        printf("Doado: ");
        scanf(" %[^\n]s",&livro_e[i].doado);
        system("CLS");
    }

    return 0;
}
