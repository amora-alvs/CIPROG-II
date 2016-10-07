#include <stdio.h>

int main(){

int n1, n2, r1, r2, r3;

printf("Entre com o primeiro numero inteiro: \n");
scanf("%d", &n1);
printf("Entre com o segundo numero inteiro: \n");
scanf("%d", &n2);

r1=n1+n2;
r2=n1-n2;
r3=n1*n2;

printf("%d e o valor da soma / %d e o valor da subtracao / %d e o valor da multiplicao.", r1, r2, r3);

return 0;

}
