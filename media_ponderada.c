#include <stdio.h>

int main (){

float n1, n2, mp;
int p1, p2;

printf("Entre com a primeira nota: \n");
scanf("%f", &n1);
printf("Entre com o peso da primeira nota: \n");
scanf("%d", &p1);

printf("Entre com a segunda nota: \n");
scanf("%f", &n2);
printf("Entre com o peso da segunda nota: \n");
scanf("%d", &p2);

mp=(n1*p1)+(n2*p2)/p1+p2;

printf("A media pondera do aluno e:%.2f \n", mp);

}
