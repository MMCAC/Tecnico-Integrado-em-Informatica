#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	char *c;
	
	//p = (int *) malloc (sizeof(int));
	//c = (char *) malloc (sizeof(char));
	
	*p = 10;
	*c = 'a';
	
	printf("\nValor de p: %d",*p);
	printf("\nValor de c: %c",*c);
}
