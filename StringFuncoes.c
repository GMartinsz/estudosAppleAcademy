#include <stdio.h> #include <stdlib.h> #include <string.h>

int main(){ char nome[20]; int i;

printf("Informe o nome: ");
scanf("%s",&nome);

printf("Nome: %s\n",nome);	
printf("Tamanho do nome: %d\n",strlen(nome)); // RETORNA O TAMANHO //
								

strcpy(nome,"gui"); // ATRIBUI //
strcmp(nome,"gui"); // COMPARA - RETORNA 1 OU 0 //
stricmp(nome,"gui"); // COMPARA DESPREZANDO MAIUSCULA E MINUSCULA //
strstr(nome,"gui"); // VE SE EXISTE ENDEREÇO DE MEMORIA //

for (i=0;i<strlen(nome);i++){
	printf("%c",nome[i]);
} printf("\n"); for (i=strlen(nome)-1;i>=0;i--){ printf("%c",nome[i]); } }
