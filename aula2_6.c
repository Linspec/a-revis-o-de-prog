/*Escreva um programa que determine e a m�dia e a situa��o de um aluno em uma disciplina. Seu programa deve ler  tr�s notas
 de um aluno ( av1 , av2 e av3 ), seu n�mero de faltas ( n_faltas), o n�mero total de aulas da disciplina ( n_aulas ).
  Seu programa deve mostrar a m�dia do aluno,a quantidade de faltas e informar se ele est� APROVADO ou REPROVADO. 
	Considerando que:
	- Alunos com mais de 25% de faltas est� REPROVADO
- Alunos com menos de 25% de faltas e com m�dia abaixo de 6.0 est� REPROVADO
- Alunos com menos de 25% de faltas e com m�dia acima de 6.0 est�o APROVADO
- Caso o aluno n�o obtenha m�dia 6.0 com av1 e av2, o valor da av3 deve substituir o valor da menor nota.
    - Caso o aluno n�o tenha feito av3, deve ser inserido 0 */
#include <stdio.h>
#include <stdlib.h>

int main(){
	float av[3],med;
	int faltas,aula,i;
	
	//pegando as info
	printf("quantas faltas voce tem?");
	scanf("%d",&faltas);
	
	printf("quantas aulas voce tem?");
	scanf("%d",&aula);
	
	//aprovado ou n por falta
	if(faltas>(aula*25)/100){
		printf("\n reprovado");
	}
	else{
		
	//notas
		for(i=0;i<2;i++){
			printf("entre com suas notas:");
			scanf("%f",&av[i]);
			med=med+av[i];
		}
		med=med/2;
		
		//aprovado ou n por nota
		if(med>=6.0){
			printf("\n aprovado");
		}
		
		//n�o passou com av1 e av2
		else{
		
			printf("diga sua nota da av3:");
			scanf("%f",&av[2]);
		}
			
		//substituindo a av1
		if(av[2]>av[0]){
			med=av[2]+av[1];
			//vendo m�dia final com a av3	
			med=med/2;
			if(med>=6.0){
					printf("\n aprovado");
				}
			else
				printf("\n reprovado");
		}
		
		//substituindo a av2
		else if(av[2]>av[1]){
			med=av[2]+av[0];
			//vendo m�dia final com a av3	
			med=med/2;
			if(med>=6.0){
				printf("\n aprovado");
				}
				
			else
				printf("\n reprovado");
		}else
			printf("\n areprovado");
	}
	return 0;
}
