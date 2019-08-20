#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int vet[3][3],i,j;
	
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			printf("entre com um valor:");
			scanf("%d",&vet[i][j]);
			}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			printf("%d \t",vet[i][j]);
			}
			printf("\n");
		}
		
	return 0;
}
