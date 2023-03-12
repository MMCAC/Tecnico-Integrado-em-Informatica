#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
    p = (int *) malloc(5 * sizeof(int));
    *p = 1;
    *(p+1) = 2;
    *(p+2) = 3;
	while (*p)	 {
		printf("Imprimiu!!!\n");
		p++;
	}

	int *ptr;
    ptr = (int *) malloc(3 * sizeof(int));
    if (ptr == 0){
    	printf("ERRO: memoria nao alocada com malloc\n");
        return 1;
    }
    int i;
    for (i = 0; i < 3; i++){
    	*(ptr + i) = i * 10;
        printf("ptr + %d = %d\n", i, *(ptr + i));
    }

    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    if (ptr == 0){
    	printf("ERRO: memoria nao alocada com realloc\n");
        return 1;
    }
    printf("*** Uso de realloc\n");
    for (i = 0; i < 5; i++){
        *(ptr + i) = i * 15;
        printf("ptr + %d = %d\n", i, *(ptr + i));
    }
    free(ptr);
}
