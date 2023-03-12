#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int xadrez[9][9];
    int i;
    int j;

    for(i = 1; i < 9; i++)
    {
        for(j = 1; j < 9; j++)
        {
            if((i + j)%2 == 0)
            {
                printf("\xDB\xDB");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
