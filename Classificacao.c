#include <stdio.h> #include <stdlib.h> #include <ctype.h> #include <string.h>

int validarID(int animalID,int nmrMax,int outroID[500]);

int main() { int i=0,animalID[500]= {0},idAnimalMaisPesado=0,idAnimalMaisLeve=0,nmrMax=0,outroID[500]= {0},qtdMenor=0; float peso[500]= {0},animalMaisPesado=0,animalMaisLeve=0,pesoTotal,pesoMedio; char opcao;

do {

	system("cls");
	printf("Animal %d\n",i+1);
	printf("Digite o numero de identificacao do animal: ");

	animalID[i] = validarID(animalID[i],nmrMax,animalID);


	printf("Informe o peso do animal: ");
	scanf("%f",&peso[i]);
	pesoTotal += peso[i];

	if (i == 0) {
		idAnimalMaisLeve = animalID[0];
		animalMaisLeve = peso[0];
		idAnimalMaisPesado = animalID[0];
		animalMaisPesado = peso[0];
	} else {
		if (peso[i] > animalMaisPesado) {
			idAnimalMaisPesado = animalID[i];
			animalMaisPesado = peso[i];
		}

		if (peso[i] < animalMaisLeve) {
			idAnimalMaisLeve = animalID[i];
			animalMaisLeve = peso[i];
		}
	}


	printf("\nDeseja continuar? [S] ou [N]");
	opcao = getch();
	opcao = toupper(opcao);

	i++;
	nmrMax++;

	pesoMedio = pesoTotal/nmrMax;
	if (peso[i] < pesoMedio) {
		qtdMenor++;
	}

} while (opcao == 'S' && nmrMax <=500);

system("cls");
printf("ID do animal mais pesado: %d",idAnimalMaisPesado);
printf("\nPeso do animal mais pesado: %.2f",animalMaisPesado);
printf("\n\nID do animal mais leve: %d",idAnimalMaisLeve);
printf("\nPeso do animal mais leve: %.2f",animalMaisLeve);
printf("\nQuantidade de animais com peso menor que o medio: %d",qtdMenor);
}

int validarID(int animalID,int nmrMax,int outroID[500]) { int i;

scanf("%d",&animalID);

for (i=0; i<nmrMax+1; i++) {

	while (animalID == outroID[i]) {
		printf("Id repetido, digite novamente: ");
		scanf("%d",&animalID);
	}
}


return animalID;
}
