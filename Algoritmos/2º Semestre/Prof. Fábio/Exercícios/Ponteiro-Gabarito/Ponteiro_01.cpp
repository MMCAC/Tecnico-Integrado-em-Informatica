#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	int *p;  // p � um ponteiro para um inteiro
	int *q; 
	p = &a;  // o valor de p � o endere�o de a
	q = &b;  // q aponta para b
	
	printf("Informe o valor de a: ");
	scanf("%d",&a);
	printf("Informe o valor de b: ");
	scanf("%d",&b);
	
	c = *p + *q;
	
	printf("\nValor de c: %d",c);
}

