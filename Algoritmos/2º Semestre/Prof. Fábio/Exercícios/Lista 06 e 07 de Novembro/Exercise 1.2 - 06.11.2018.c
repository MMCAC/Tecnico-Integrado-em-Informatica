#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void strcpy(char *destino, char *origem, int tamM){
    for(int i = 0; i < tamM; i ++){

        *(destino + i) = *(origem + i);
    }
}

int main()
{
    char destino[200];
    char origem[200];

    int tamTexto;

    printf("Inform a text: \n");
    for(int i = 0; i < 200; i++){
        scanf("%c", &origem[i]);
        if(origem[i] == '\n'){
            tamTexto = i;
            break;
        }
    }

    strcpy(&destino,&origem, tamTexto);

    for(int i = 0; i < tamTexto; i++)
    {
        printf("%c", destino[i]);
    }

    return 0;
}
