#include <stdio.h>
#include <stdlib.h>
int main()
{
	int pg;
	float preco,total;
	printf("Escolha a forma de pagamento: \n"); // \n para quebra de linha
	/* \ no final da linha para que o interpretador considere a linha de baixo 
	 * uma continuação e \n para a quebra de linha */ 
	printf(" 1 - À vista em dinheiro ou cheque, recebe 10%% de desconto\
	 \n 2 - À vista no cartão de crédito, recebe 5%% de desconto\
	 \n 3 - Em 2 vezes, preço normal de etiqueta sem juros\
	 \n 4 - Em 3 vezes, preço normal de etiqueta mais juros de 10%%. \n");
	scanf("%d", &pg);
	printf("Digite o valor da compra: ");
	scanf("%f", &preco);
	//inicio da condição
	if (pg == 1){
		 total = (preco * 0.10) + preco;
		 printf("Preço a pagar: %0.2f", total);
	 }
	 else if (pg == 2){
		 total = (preco * 0.05) + preco;
		 printf("Preço a pagar: %0.2f", total);
	 }
	 else if (pg == 3){
		 total = preco / 2;
		 printf("Preço a pagar: 2 vezes de %0.2f ", total);
	 }
	 else if (pg == 4){
		 total = (
		 (preco * 0.10) + preco) / 3;
		 printf("Preço a pagar: 3 vezes de %0.2f ", total);
	 }
	 else {
		 printf("Você digitou uma forma de pagamento inválida");
	 }		 
	 return 0;
	
}

