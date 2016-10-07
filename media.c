#include <stdio.h>

int main (){

float n1, n2, n3, m;

printf("Entre com a nota do primeiro aluno: \n");
scanf("%f", &n1);
printf("Entre com a nota do segundo aluno: \n");
scanf("%f", &n2);
printf("Entre com a nota do terceiro aluno: \n");
scanf("%f", &n3);

m=(n1+n2+n3)/3;

printf("A media do aluno e: %.2f \n", m);

return 0;

}
