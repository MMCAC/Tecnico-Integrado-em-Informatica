#include <stdio.h>
#include <conio.h>

int main(){

int v1[5];
int v2[5];
int x = 10;
int v3[10];
int j;
int i;

for(i = 0; i < 5; i++)
{
    v1[i] = i*x;
    v2[i] = i*x + 31;
}
for(j = 0; j < 10; j++)
{
    if(j < 5)
    {
        v3[j] = v1[j];
    }
    else
    {
        v3[j] = v2[j-5];
    }

    printf("O v3 %d \n",v3[j]);
}
return 0;
}
