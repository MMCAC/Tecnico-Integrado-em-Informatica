#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	int *p;  
	int **r; // ponteiro para ponteiro para inteiro
	p = &a;  // p aponta para a
	r = &p;  // r aponta para p e *r aponta para a
	
	printf("Informe o valor de a: ");
	scanf("%d",&a);
	printf("Informe o valor de b: ");
	scanf("%d",&b);
	
	c = **r + b;
	
	printf("\nValor de c: %d",c);
}
