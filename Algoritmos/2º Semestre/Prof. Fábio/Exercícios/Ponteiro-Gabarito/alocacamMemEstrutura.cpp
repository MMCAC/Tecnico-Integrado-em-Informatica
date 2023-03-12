#include <stdio.h>
#include <stdlib.h>

typedef struct {
   int dia, mes, ano; 
} data;

int main(){
	data *d;
	d = (data *)malloc(sizeof(data));
	d->dia = 31; d->mes = 12; d->ano = 2018;		
	printf("Data: %d/%d/%d",d->dia,d->mes,d->ano);
	return 0;
}

