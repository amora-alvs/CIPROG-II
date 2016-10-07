#include <stdio.h>

int main(){

float vetor[3];

printf("Entre com sua nota: \n");
scanf("%f", &vetor[0]);
printf("Entre com sua nota: \n");
scanf("%f", &vetor[1]);

vetor[2]=(vetor[0]+vetor[1])/2;

printf("A media e:%2.f\n", vetor[2]);

return 0;
}

