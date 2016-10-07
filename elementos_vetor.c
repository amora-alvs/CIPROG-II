#include <stdio.h>

int main(){

	int vetor[10];
	int i, contmaior=0, contmenor=0, contigual=0;
		for (i=0;i<10;i++){
			printf("Entre com um valor numerico: \n");
			scanf("%d", &vetor[i]);

			if (vetor[i]>vetor[0])
				contmaior++;
			else if (vetor[i]==vetor[0])
				contigual++;
			else if (vetor[i]<vetor[0])
				contmenor++;
	
		}
		 
	printf("Existem %d maiores que o %d\n", contmaior, vetor[0]);
	printf("Existem %d menores que o %d\n", contmenor, vetor[0]);
	printf("Existem %d iguais que o %d\n", contigual, vetor[0]);

}
