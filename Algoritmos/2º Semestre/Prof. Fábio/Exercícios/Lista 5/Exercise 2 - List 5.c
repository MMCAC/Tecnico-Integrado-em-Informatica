#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
2. Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
*/

void StrCpy (char *destino,char *origem)
{
    while (*origem)
        {
            *destino = *origem;

            origem++;
            destino++;
        }

    *destino='\0';
}


int main ()
{
	char origem[100];
	char destino[100];


	printf("Digite uma frase: ");
	gets(origem);


	system("CLS");


	StrCpy(destino,origem);
	printf("Destino: %s",destino);

	return 0;
}
