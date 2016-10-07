#include <stdio.h>
#include <locale.h>


int main (){
setlocale(LC_ALL, "Portuguese");

int num, n2, n5, n10;

printf("Entre com um número inteiro: \n");
scanf("%d", &num);

	if (num%2 == 0)
		printf("O número é divisível por 2!\n");
	if (num%5 == 0)
		printf("O número é divisível por 5!\n");
	if (num%10 == 0)
		printf("O número é divisível por 10!\n");
	else {
		printf("O número não é divisível por nenhum dos termos\n");
}

return 0;
}

