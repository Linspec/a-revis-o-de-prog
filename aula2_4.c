/*Escreva um programa em C que leia uma string e inverta o seu conteúdo.
 Fazendo com que o último caractere passe a ser o primeiro e vice-versa. Escrever a string invertida.*/
 #include <stdio.h>
 #include <string.h>
 
 int main(){
 	char palavra[50],pri,fi;
 	int cont,i,tam;
 	
 	printf("entre com uma frase:");
 	gets(palavra);
 	
 	tam=strlen(palavra);
 	
	printf("\n%s\n",palavra);
 	
 	pri=palavra[0];
 	printf("%c1\n",pri);
 	fi=palavra[tam-1];
 	printf("%c2\n",fi);
 	
 	palavra[0]=fi;
 	palavra[tam-1]=pri;
 	
 	for(i=tam;i>=0;i--){
 		
 		printf("%c",palavra[i]);
	 	
	}
	
	
	
 	return 0;
 }
