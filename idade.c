#include <stdio.h>

int main (){

int idade;

printf("Qual a sua idade?\n");
scanf("%d", &idade);

if (idade<=13){
printf("Você é uma criança!\n");
}
if ((idade>13) && (idade<18)){ 
printf("Você é um adolescente!\n");
}
if ((idade>18) && (idade<50)){
printf("Você é um adulto!\n");
}
if (idade>50){ 
printf("Você é um idos!\n");
}

return 0;
}
