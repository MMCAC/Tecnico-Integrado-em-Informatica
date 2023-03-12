#include <stdio.h>

/*
2.3. Com base na experiência que você adquiriu desenvolvendo um programa que apresenta um
tabuleiro de xadrez, utilize uma matriz para criar um jogo da velha.
 A cada jogada, apresentar a matriz alterada;
 Apresentar uma mensagem indicando o ganhador;
 Não permitir que um mesmo jogador efetue duas jogadas consecutivas;
 Não permitir duas jogadas em uma mesma casa.
Dica: Você pode utilizar os valores inteiros: -1 (primeiro jogador), 1 (segundo jogador) e
0 (casa vazia).
*/

int main()
{
    int Matriz[3][3] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0'};
    int i;
    int j;
    int c;
    int l;
    int y;
    int t;

    for(y = 0; y < 9; y++)
    {
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                printf("[");
                    {
                        printf("%c",Matriz[i][j]);
                    }
                printf("]");
            }

            printf("\n");
    }

        printf("\nPlease, inform the column and the line: \n");
        printf("Horizontal line: ");
        scanf("%d",&l);
        printf("Vertical column: ");
        scanf("%d",&c);

        if(y%2 != 0)
        {
            for(i = 0; i < 50; i++)
            {
                if(Matriz[l-1][c-1] == 'X' || Matriz[l-1][c-1] == 'O')
                {
                    printf("\nPlease, inform another position!\n");
                    printf("Horizontal line: ");
                    scanf("%d",&l);
                    printf("Vertical column: ");
                    scanf("%d",&c);
                }
                else
                {
                    Matriz[l-1][c-1] = 'X';
                    break;
                }
            }
        }

        if(y%2 == 0)
        {
            for(i = 0; i < 50; i++)
            {
                if(Matriz[l-1][c-1] == 'X' || Matriz[l-1][c-1] == 'O')
                {
                    printf("\nPlease, inform another position!\n");
                    printf("Horizontal line: ");
                    scanf("%d",&l);
                    printf("Vertical column: ");
                    scanf("%d",&c);
                }
                else
                {
                    Matriz[l-1][c-1] = 'O';
                    break;
                }
            }
        }

        system("CLS");

        if((Matriz[0][0]=='O' && Matriz[0][1]=='O' && Matriz[0][2]=='O')||
        (Matriz[1][0]=='O' && Matriz[1][1]=='O' && Matriz[1][2]=='O')||
        (Matriz[2][0]=='O' && Matriz[2][1]=='O' && Matriz[2][2]=='O')||
        (Matriz[0][0]=='O' && Matriz[1][0]=='O' && Matriz[2][0]=='O')||
        (Matriz[0][1]=='O' && Matriz[1][1]=='O' && Matriz[2][1]=='O')||
        (Matriz[0][2]=='O' && Matriz[1][2]=='O' && Matriz[2][2]=='O')||
        (Matriz[0][0]=='O' && Matriz[1][1]=='O' && Matriz[2][2]=='O')||
        (Matriz[0][2]=='O' && Matriz[1][1]=='O' && Matriz[2][0]=='O'))
        {
            printf("Player 1, YOU WON!!!");
            break;
        }

    if((Matriz[0][0]=='X' && Matriz[0][1]=='X' && Matriz[0][2]=='X')||
        (Matriz[1][0]=='X' && Matriz[1][1]=='X' && Matriz[1][2]=='X')||
        (Matriz[2][0]=='X' && Matriz[2][1]=='X' && Matriz[2][2]=='X')||
        (Matriz[0][0]=='X' && Matriz[1][0]=='X' && Matriz[2][0]=='X')||
        (Matriz[0][1]=='X' && Matriz[1][1]=='X' && Matriz[2][1]=='X')||
        (Matriz[0][2]=='X' && Matriz[1][2]=='X' && Matriz[2][2]=='X')||
        (Matriz[0][0]=='X' && Matriz[1][1]=='X' && Matriz[2][2]=='X')||
        (Matriz[0][2]=='X' && Matriz[1][1]=='X' && Matriz[2][0]=='X'))
        {
            printf("Player 2, YOU WON!!!");
            break;
        }
    }

    return 0;
}
