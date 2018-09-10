/* Objetivo: Entrada: Saída: */ #include <stdio.h> #include <stdlib.h> #include <ctype.h> #include <string.h>

int main(){ char nome[6][20]; int i,j;

for (i=0;i<5;i++){
    printf("Informe o primeiro e o ultimo nome da pessoa %d:",i+1);
    gets(nome[i]);
} for (j=0;j<5;j++){ printf("%s\n",nome[j]); } system("pause"); }
