#include<stdio.h>
#include<math.h>
void main(){
	int ultima = 1;
	while (ultima){
		char exer;
		printf("Digite a letra da atividade: ");
		scanf("%c",&exer);
		switch (exer){
		case 'a' : {
			float v,r,i;
			printf("calculo v = ri\n");
			
			printf("Digite o valor de R (resistencia): ");
			scanf("%f",&r);
			
			printf("Digite o valor de I:  ");
			scanf("%f",&i);
			
			v = r/i;

			printf("O valor da tensao é %.2f \n",v);
			break;
		}
		case 'b': {
			float p,v,i;
			printf("Digite o valor da Tensão: ");
			scanf("%f",&v);
			printf("Digite o valor da Corrente: ");
			scanf("%f",&i);
			p=v*i;
			printf("O valor da Potencia é %.2fW\n",v);
			break;
		}
		case 'c' : {
			float i,q,t;
			printf("Digite o valor da Carga Elétrica: ");
			scanf("%f",&q);
			printf("Digite o valor do tempo: ");
			scanf("%f",&t);
			i=q/t;
			printf("O valor da corrente é %.2f \n",i);
			break;
		}	
		case 'd' : {
			float v,w,q;
			printf("Digite o valor da trabalho/energia: ");
			scanf("%f",&w);
			printf("Digite o valor da carga eletrica: ");
			scanf("%f",&q);
			v = w/q;
			printf("O valor da Tensão é %.2f \n",v);
		}
		case 'e' : {
			float p,r,i;
			printf("Digite o valor do raio: ");
			scanf("%f",&r);
			printf("Digite o valor da Corrente: ");
			scanf("%f",&i);
			p = r*pow(i,2);
			printf("O valor da Potencia é %.2f \n",p);
		}
		case 'f' : {
			float p,v,r;
			printf("Digite o valor da Velocidade: ");
			scanf("%f",&v);
			printf("Digite o valor do raio: ");
			scanf("%f",&r);
			p=pow(v,2)/r;
			printf("O valor da potencia é %.2f \n",p);
		}
	}
		printf("Deseja fazer outra operacao? 1/0 \n");
		scanf("%d",&ultima);
		

	}
	
	

}
