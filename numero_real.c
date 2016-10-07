#include <stdio.h>

int main(){

float num, pd;
int pi;

printf("Entre com um numero real: \n");
scanf("%f", &num);
pi = num;
pd = num-pi;

printf("O numero arredondado e: %.0f", num);
printf("O numero quebrado e: %f", num);
printf("A parte inteira e: %d", pi);
printf("A parte decimal e: %f", pd);

return 0;

}
