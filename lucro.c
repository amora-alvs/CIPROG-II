#include <stdio.h>
#include <locale.h>


int main (){
setlocale(LC_ALL, "Portuguese");

float valor;

printf("Qual o valor do produto?\n");
scanf("%f", &valor);

if (valor<20.00)
valor=valor+(valor*0.45);
else
valor=valor+(valor*0.30);

	printf("O produto deverá ser vendido por: %.2f\n", valor);

return 0;

}
