#include<stdio.h>
#include<math.h>
void main(){
	float num;
	float raiz;

	printf("Escreva um numero: ");
	scanf("%f",&num);
		
	raiz=sqrt(num);

	printf("O maior numero menor ou igual a raiz do numero informado é %d \n",((int)raiz));
}
