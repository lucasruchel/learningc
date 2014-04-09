#include<stdio.h>
void main(){
	int volume,comprimento,altura, espessura;
	printf("Digite o Comprimento: ");
	scanf("%d",&comprimento);

	printf("Digite a altura: ");
	scanf("%d",&altura);

	printf("Digite a espessura: ");
	scanf("%d",&espessura);
	
	volume=comprimento*altura*espessura;

	printf("O volume do sólido dado pela fórmula A*C*E é %d \n",volume);

}
