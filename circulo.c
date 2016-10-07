#include <stdio.h>

int main(){

int area, raio; 
float pi=3.14159;

printf("Entre com o valor do raio: \n");
scanf("%d", &raio);

area=pi*(raio*raio);

printf("O valor da área é de: %d\n", area);

return 0;
}
