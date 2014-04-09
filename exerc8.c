#include<stdio.h>
#include<math.h>
void main(){
	const unsigned long int MB = pow(2,20);
	int size;	
	
	printf("Digite o valor em MB: ");
	scanf("%d",&size);

	printf("O valor em bits é %d \n",MB*size*8);
}
