#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade; //Declara Variavel
    printf ("Digite a sua idade: "); //Imprime na tela
    scanf ("%d", &idade); //Salva o que o usuario digitou na variavel idade
    //Inicio do laço de condição
    if ((idade >= 5) && (idade <= 7)){
		printf("Categoria Infantil A");
	}
	else if ((idade >= 8) && (idade <= 10)){ //else + if, para diminuir a quantidade de linhas do código
		printf("Categoria Infantil B");
	}
	else if ((idade >= 11) && (idade <= 13)){
		printf("Categoria Juvenil A");
	}
	else if ((idade >= 14) && (idade <= 17))
	{
		printf("Categoria Juvenil B");
	}
	else if ((idade >=18))
	{
		printf("Categoria Adulto");
	}else
	{
		printf("Você é muito novo para fazer natação");
	}

    return 0;
}
