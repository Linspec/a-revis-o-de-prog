/*1. Faça um programa que leia a nota de prova de 15 alunos e gere a média da turma.
 Depois, calcule e mostre quantos alunos ficaram acima da média da turma.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float alu[3],med,soma;
	int aprovados=0,i;
	
	for(i=0;i<3;i++){
		printf("entre com sua nota aluno %d:",i+1);
		scanf("%f",&alu[i]);
		soma=soma+alu[i];
	}
	med=soma/3;
	
	for(i=0;i<3;i++){
		if(alu[i]>med){
		aprovados++;
		}
	}
	
	printf("a soma das notas foi %.2f,a media da turma foi %.2f,%d foram aprovados",soma,med,aprovados);
	
	return 0;
}

