#include <stdio.h> #include <stdlib.h> #include <string.h> int validaNumero(int numero); void demonstrarMatriz(int matriz[3][4][2]);

int main() {

int l=0,c=0,p=0,valor=0,numValorAchado=0;


int matriz [3][4][2] = {0};
char mensagem[20],mensagem2[20],mensagem3[20];	

	for(p=0;p<2;p++){					   
		for(l=0;l<3;l++){
    		for(c=0;c<4;c++){
	    		 	printf("()");
	        }
			    printf("\n");
		}
		printf("\n");
	}

printf("Aperte qualquer tecla para iniciar o preenchimento da matriz!!!");	 
getch();	

for(p=0;p<2;p++){					   
	for(l=0;l<3;l++){
    	for(c=0;c<4;c++){
    		
        system("cls");
        if(p==0){
        	strcpy(mensagem,"primeira pagina");	
		}else{
			strcpy(mensagem,"segunda pagina");	
		}
		
		 if(l==0){
        	strcpy(mensagem2,"primeira linha");			
		}else if(l==1){
			strcpy(mensagem2,"segunda linha");		
		}else{
			strcpy(mensagem2,"terceira linha");		
		}
		
		if(c==0){
        	strcpy(mensagem3,"primeiro valor");			
		}else if(c==1){
			strcpy(mensagem3,"segundo valor");			
		}else if(c==2){
			strcpy(mensagem3,"terceiro valor");		
		}else{
			strcpy(mensagem3,"quarto valor");	
		}
		
		system("cls");
		
		demonstrarMatriz(matriz);

		
		printf("Informe o %s da %s da %s\n",mensagem3,mensagem2,mensagem);
			matriz[l][c][p] = validaNumero(matriz[l][c][p] );
		}

	}

}


system("cls");
demonstrarMatriz(matriz);
printf("\n");
printf("Digite o valor a ser encontrado na matriz: ");
	scanf("%d",&valor);
					     
	   
for(p=0;p<2;p++){					   
		for(l=0;l<3;l++){
    		for(c=0;c<4;c++){
    			if(matriz[l][c][p] == valor){
    				numValorAchado = numValorAchado + 1;
    			
    					if(p==0){
				            	strcpy(mensagem,"primeira pagina");	
							}else{
								strcpy(mensagem,"segunda pagina");	
							}
							
							 if(l==0){
				            	strcpy(mensagem2,"primeira linha");			
							}else if(l==1){
								strcpy(mensagem2,"segunda linha");		
							}else{
								strcpy(mensagem2,"terceira linha");		
							}
							
							if(c==0){
				            	strcpy(mensagem3,"primeira coluna");			
							}else if(c==1){
								strcpy(mensagem3,"segunda coluna");			
							}else if(c==2){
								strcpy(mensagem3,"terceira coluna");		
							}else{
								strcpy(mensagem3,"quarta coluna");	
							}
		    		
		    			if(numValorAchado == 2){
		    				printf("\n\nO numero %d foi encontrado em mais de uma posicao, sao elas:\n\n",valor);
						}
					    
				    if(numValorAchado == 1){
    					printf("O numero %d foi encontrado na %s, %s, %s.\n",valor,mensagem,mensagem2,mensagem3);
    				}else{
    					printf("- na %s, %s, %s.\n",mensagem,mensagem2,mensagem3);
					}
			
			}
		}
	}
}
					   
					   
if(numValorAchado == 0){
	printf("\nO numero %d NAO foi encontrado.");
}						   


return 0;
}

int validaNumero(int numero){

do{
		scanf("%d",&numero);
		
	if(numero <1 || numero > 10){
	printf("\nDigite um numero valido!!! entre 1 e 10: ");
		scanf("%d",&numero);
	}
}while(numero <1 || numero > 10);
	
return numero;
}

void demonstrarMatriz(int matriz[3][4][2]){

int contLinha = 0, contColuna = 0, contPagina = 0;

for(contPagina=0;contPagina<2;contPagina++){					   
			for(contLinha=0;contLinha<3;contLinha++){
		    	for(contColuna=0;contColuna<4;contColuna++){
	            	printf("(%d)",matriz[contLinha][contColuna][contPagina]);
				}
		            printf("\n");
			}
			printf("\n");
		}
	}
