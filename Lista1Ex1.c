/* Guilherme Martins Dalosto de Oliveira Objetivo: Entrada: Saída: */ #include <stdio.h> #include <stdlib.h> #include <ctype.h> #include <string.h>

void mostrarCadastrados(int total,char nome[20][100]); void mostrarPessoaF(int feminino,char pessoasF[20][100]); void mostrarPessoasM(int masculino,char pessoasM[20][100]);

int main(){ char nome[20][100],pessoasF[20][100],pessoasM[20][100],sexo,opcao,opcaoProcedimento; int i,total,feminino,masculino; i=0; total = 0; feminino = 0; masculino = 0;

do{
	printf("Digite o seu nome: ");
	gets(nome[i]);
	
	printf("Informe seu sexo (M ou F): ");
	sexo = getch();
	sexo = toupper(sexo);
	
	printf("Informe seu peso (em kg): ");
	if (sexo == 'F'){
		strcpy(pessoasF[0],nome[i]);
		feminino++;
		}
		else{
		strcpy(pessoasM[0],nome[i]);
		masculino++;
		}
	
	printf("\n\nDeseja adicionar outra pessoa?\n");
	opcao = getch();
	opcao = toupper(opcao);
	
	system("cls");
	fflush(stdin);
	total++;
	i++;
	}
while (opcao == 'S' && total <= 100);
do{
	printf("\t\t\tMENU");
	printf("\nEscolha a opcao\n");
	printf("(1) Listar todas as pessoas cadastradas.\n");
	printf("(2) Listar pessoas do sexo feminino.\n");
	printf("(3) Listar pessoas do sexo masculino.\n");
	printf("(4) Calcular o IMC de uma pessoa específica\n");
	printf("(5) Calcular a média da idade das pessoas\n");
	printf("(0) Sair\n");
	opcaoProcedimento = getch();
	switch (opcaoProcedimento){
		case '1':
			mostrarCadastrados(total,nome);
			break;
		case '2':
			mostrarPessoaF(feminino,pessoasF);
			break;
		case '3':
			mostrarPessoaM(masculino,pessoasM);
			break;
		case '4':
} } while (opcaoProcedimento != '0');

} // LISTAR TODOS CADASTRADOS // void mostrarCadastrados(int total,char nome[20][100]){ system("cls"); int j,i=0;

printf("\t\t\tPESSOAS CADASTRADAS\n");
for (j=0;j<total;j++){
	printf("%s\n",nome[i]);
	i++;
}	
}

// MOSTRAR SEXO FEMININO //
void mostrarPessoaF(int feminino,char pessoasF[20][100]){ system("cls"); int j,i=0;

printf("\t\t\tPESSOAS DO SEXO FEMININO\n");
for (j=0;j<feminino;j++){
	printf("%s\n",pessoasF[i]);
	j++;
}
}

// MOSTRAR SEXO MASCULINO //
void mostrarPessoaM(int masculino,char pessoasM[20][100]){ system("cls"); int j,i=0;

printf("\t\t\tPESSOAS DO SEXO MASCULINO\n");
for (j=0;j<masculino;j++){
	printf("%s\n",pessoasM[i]);
	j++;
}
}

// CALCULAR IMC //
void mostrarIMC(float peso,float altura); int IMC; IMC = peso / altura*altura; printf("IMC = %d",IMC);
