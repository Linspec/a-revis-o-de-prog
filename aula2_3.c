/*Faça um programa que leia um vetor de 10 números. Leia também um numero x.
  Mostre na tela a posição e os valores do vetor que são divisíveis por x.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[3],x,i,cont=0;
	
	printf("defina um valor para x:");
	scanf("%d",&x);
	
	for(i=0;i<3;i++){
		printf("\n entra com um numero:");
		scanf("%d",&vet[i]);
		if(vet[i]%x==0){
			printf("\no valor divisivel por %d e %d na casa %d",x,vet[i],i);
		}
	}
	
	
	return 0;
}
