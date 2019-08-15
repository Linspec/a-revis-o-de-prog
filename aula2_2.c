/*2. Faça um programa para ler 15 temperaturas, calcule e imprima a média geral.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float temp[3],med;
	int i;
	
	for(i=0;i<3;i++){
		printf("qual a temperatura de hj?");
		scanf("%f",&temp[i]);
		med=med+temp[i];
	}
	med=med/3;
	
	printf("media das temperatura foi %.2f",med);
	
	return 0;
}
