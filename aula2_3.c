/*Fa�a um programa que leia um vetor de 10 n�meros. Leia tamb�m um numero x.
  Mostre na tela a posi��o e os valores do vetor que s�o divis�veis por x.*/
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
