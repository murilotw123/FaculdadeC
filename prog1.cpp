#include <stdio.h>	
#include <conio.h>
#include <stdlib.h>
const int TAM = 5;
float notas[TAM];
void ler_notas(){
		for(int i =0; i < TAM; i++){
		printf("digite a nota %d: ", i+1);
	   	scanf("%f", &notas[i]);
	}

}

void imprimir_notas(){
	for (int i = 0; i < TAM; i++){
		printf("\nNota  %d: %0.2f\n", i+1, notas[i]);
	}
	system("pause");
}

void menu(){
	system("cls");
	printf("---> CALCULO DE NOTAS <---");
	printf("\n[1] - Cadastrar Notas");
	printf("\n[2] - Imprimir Notas");
	printf("\n[3] - Calcular Media");
	printf("\n[4] - Maior e Menor Nota");
	printf("\n[5] - porcentagem de aprovados");
	printf("\n[] - ");
	printf("\n[0] - Sair\n-->");
}//fim menu
void calc_media(){
	float soma = 0;
	   for( int i = 0; i < TAM; i++){
		   soma = soma + notas[i];
	   }
	   printf("\n\nMedia: %0.2f\n" , soma/TAM);
	   system("pause");
	
}
void maior_menor_nota(){
	float maior_notas = 0;
	float menor_notas = 11;
	for(int i = 0; i<TAM ; i++){
		if(notas[i] > maior_notas){
			maior_notas = notas[i];
		}
		if(notas[i] < menor_notas){
			menor_notas = notas[i];
		}
	}
	printf("\nA Maior Nota e: %0.2f\n", maior_notas);
	printf("\nA Menor Nota e: %0.2f\n", menor_notas);
	system("pause");
}
void aprovados() {
    int media = 6;
    int cont_aprovados = 0;

    for (int i = 0; i < TAM; i++) {
        if (notas[i] >= media) {
            cont_aprovados++;
        }
    }
    int porcentagem_aprovados = (cont_aprovados * 100) / TAM;

    printf("Porcentagem de pessoas que foram aprovadas: %d\n", porcentagem_aprovados);
    system("pause");
}

int main(){
	int opc = 1;
	do{
		menu();
		scanf("%d", &opc);
		switch(opc){
		case 1: ler_notas();
			break;
		case 2: imprimir_notas();
			break;
		case 3: calc_media();
			break;
		case 4: maior_menor_nota();
			break;
		case 5: aprovados();
			break;
		case 0: return 0;
		default:
			printf("opcao invalida");
			getch();
		}
	
	} while (opc != 0) ;
		
	
}