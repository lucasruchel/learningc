#include<stdio.h>
void main(){
	int altura,andares;
	printf("Quantidade de andares: ");
	scanf("%d",&andares);

	printf("Metros por andar: ");
	scanf("%d",&altura);

	{
		int calculo;
		calculo = altura*andares;
		printf("A altura aproximada é %d\n",calculo);
	}
}
