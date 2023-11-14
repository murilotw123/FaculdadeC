#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

const int TAM = 5;
float salarios[TAM];
void menu(){
	system("cls");
	printf("\n[A] --> Cadastrar");
	printf("\n[B] --> Visualizar");
	printf("\n[C] --> Media");
	printf("\n[D] --> visualizar maior e menor");
	printf("\n[E] --> %% Salarios inferior a Media");
	printf("\n[S] --> Sair");
	printf("\n-->");
}

void cadastrar(){
	system("cls");
	printf("---> Cadastrar Salarios <---");
	for(int i = 0; i < TAM ; i++){
		printf("\nDigite o salario %d: ", i+1);
		scanf("%f", &salarios[i]);
	}
	printf("\nCadastro Realizado com sucesso");
	printf("\n\npressione [ENTER] para continuar");
	getch();
		
}
void visualizar(){
	system("cls");
	printf("---> Visualizar salarios <---");
	for(int i = 0; i < TAM ; i++){
		printf("\nsalario %d: %0.2f", i+1,salarios[i]);
		scanf("%f", &salarios[i]);
	}
	printf("\n\npressione [ENTER] para continuar");
	getch();
}
void visualizarMedia(){
	float soma = 0;
	
	system("cls");
	printf("---> Visualizar Medias salariais <---");
	for(int i = 0; i < TAM; i++){
		soma= soma + salarios[i];
	}
	printf("media salarial: %0.2f", soma/TAM);
	printf("\n\npressione [ENTER] para continuar");
}
void visualizar_MM(){
	printf("oi"); getch();
}
void visualizar_inferiores(){
	printf("oi"); getch();
}
int main(){
	char opc;
	   do {
		   menu();
		   opc = getche();
		   
		   
		   switch(opc){
		   case 'A' : case 'a': cadastrar(); break;
  	   	   case 'B' : case 'b': visualizar(); break;
  	   	   case 'C' : case 'c': visualizarMedia(); break;
	  	   case 'D' : case 'd': visualizar_MM(); break; 
	   	   case 'E' : case 'e': visualizar_inferiores(); break;  
		   
		   
		   }
	   } while ((opc != 's') && (opc != 'S'));	
}