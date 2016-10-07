#include <stdio.h>

int main (){

int l1, l2, l3;

printf("Entre com o primeiro lado do triangulo: \n");
scanf("%d", &l1);
printf("Entre com o segundo lado do triangulo: \n");
scanf("%d", &l2);
printf("Entre com o terceiro lado do triangulo: \n");
scanf("%d", &l3);

if ((l1==l2) && (l2==l3)){
printf("Este e um triangulo Equilatero!\n");
} 
else {
	if ((l1==l2) || (l1==l3) || (l3==l2)){
	printf("Este e um triangulo Isoceles!\n");
	}
}
if ((l1!=l2) && (l2!=l3) && (l1!=l3)){
printf("Este e um triangulo Escaleno!\n");
}
return 0;
}
