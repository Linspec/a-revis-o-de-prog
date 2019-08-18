/*Escreva um programa em C que leia uma string e um caractere.
 Retirar o caractere informado da string. Escrever a string modificada.*/
  #include <stdio.h>
 #include <string.h>
 
 int main(){
 	
 	char pal[50],letra;
 	int i,tam;
 	
 	printf("entre com uma palavra:");
 	gets(pal);
 	tam=strlen(pal);
 	
 	printf("entre com uma letra:");
 	scanf("%c",&letra);
 	
 	for(i=0;i<tam;i++){
 		if(pal[i]==letra){
 			pal[i]=' ';
		 }
	 }
 	printf("%s",pal);
 	
 	return 0;
 }
