#include <stdio.h>

int main(){

float s, s1, m;

printf("Entre com o valor do salario do funcionario: \n");
scanf("%f", &s);
printf("Entre com o valor do salario minimo: \n");
scanf("%f", &s1);

m=s/s1;

printf("O funcionario recebe: %.2f salario(s)\n", m);

return 0;

}
