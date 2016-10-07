#include <stdio.h>

int main(){

int vetor[5];
int i;
for(i=0;i<5;i++){
	printf("Entre com um numero inteiro: \n");
	scanf("%d", &vetor[i]);
		}
for(i=0;i<5;i++){
	printf("Vetor[%d]=%d\n",i, vetor[i]);		
}

return 0;
}

