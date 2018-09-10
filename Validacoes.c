#include <stdio.h> #include <stdlib.h> #include <string.h> #include <ctype.h>

#define MAX_MORADORES 500 #define TAM_NOME 40

int validaNmr(int a,int min,int max,char texto[100]); void apresentaConsumoMoradores(int apt[MAX_MORADORES],int energia[MAX_MORADORES],float medio,char nome[TAM_NOME],int nmrVogais,int moradoresTotal); int contaVogal(char texto[TAM_NOME]);

int main(){ int i=0,j=0,nmrVogais,mes[MAX_MORADORES],apt[MAX_MORADORES],energia[MAX_MORADORES],moradoresTotal=0; float medio; char opcao,nome[30];

printf("Digite o nome do condominio: ");
gets(nome);

nmrVogais = contaVogal(nome);



do{
system("cls");
mes[i] = validaNmr(mes[i],1,6,"Informe a quantidade de meses: ");
apt[i] = validaNmr(apt[i],101,3099,"Informe o numero do apartamento : ");

for (j=1; j<=mes[i]; j++){
    printf("\nMes %d",j);
     energia[i] = validaNmr(energia[i],0,5000,"\nDigite a quantidade de consumo do mes: ");
     }


moradoresTotal++;
i++;
  
printf("\n Deseja adicionar mais um morador? [S] ou [N]");
opcao = getch();
opcao = toupper(opcao);
} while (opcao == 'S' && moradoresTotal <= 500);

apresentaConsumoMoradores(apt,energia,medio,nome,nmrVogais,moradoresTotal);
}

int validaNmr(int a,int min,int max,char texto[100]){

printf("%s",texto);
scanf("%d",&a);
                    
while (a < min || a > max){
    
    printf("Valor invalido. Digite novamente: ");
    scanf("%d",&a);
    }
    return a;
}
void apresentaConsumoMoradores(int apt[MAX_MORADORES],int energia[MAX_MORADORES],float medio,char nome[TAM_NOME],int nmrVogais,int moradoresTotal){ int j,i;

system("cls");
printf("Condominio : %c",toupper(nome[0]));
for (j=1;j<strlen(nome);j++){
    printf("%c",tolower(nome[j]));
    }
printf(" (Vogais = %d)",nmrVogais);
printf("\nConsumo (kW/h)");
printf("\n\nApartamento    Mes1    Mes2    Mes3    Mes4    Mes5    Mes6    Medio\n");
for (j=0;j<moradoresTotal;j++){
    
    printf("%d    ",apt[j]);
    printf("%d    ",energia[j]);
    }



system("pause");
}

int contaVogal(char texto[TAM_NOME]){ int i,contador=0; for (i=0;i<strlen(texto);i++){ if (texto[i] == 'a' || texto[i] == 'A' || texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'i' || texto[i] == 'I' || texto[i] == 'o' || texto[i] == 'O' || texto[i] == 'u' || texto[i] == 'U'){ contador++; } } return contador; }
