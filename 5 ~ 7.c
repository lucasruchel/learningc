#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,calc,op; //Declara variavel
	printf("Escolha um operador: \n"); // \n para quebra de linha
	printf(" 1 - Soma \n 2 - Subtração \n 3 - Divisão \n 4 - Multiplicação \n");
	scanf("%f",&op);
	printf("Agora digite o primeiro numero: ");
	scanf("%f", &a);
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	//verifica qual operador o usuario escolheu
	if (op == 1){
		calc = a + b;
	}
	else if (op == 2){
		calc = a - b;
	}
	else if (op == 3){
		calc = a / b;
	}
	else if (op == 4){
		calc = a * b;
	}
	else {
		printf("Você digitou um operador inválido");
	}
	printf ("Resultado: %0.1f" ,calc); //imprime resultado com apenas 1 zero após a virgula
	return 0;
}

