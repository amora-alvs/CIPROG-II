#include <stdio.h>
#include <locale.h>


int main (){
setlocale(LC_ALL, "Portuguese");

int dia, mes, ano;

printf("Entre com o dia do aniversário: \n");
scanf("%d", &dia);
printf("Entre com o mês do aniversário: \n");
scanf("%d", &mes);
printf("Entre com o ano do aniversário: \n");
scanf("%d", &ano);

	if ((dia<=0)||(dia>31)){
		printf("O dia de aniversário é inválido.\n");
}	else if ((mes<=0)||(mes>12)){
		printf("O mês de aniversário é inválido.\n");
}	else if ((ano<=0)||(ano>2069)){
		printf("O ano de aniversário é inválido.\n");
}	else{
		printf("O dia de aniversário é %d, o mês de aniversário é %d, o ano de aniversário é %d.\n", dia, mes, ano);
}

return 0;

}
