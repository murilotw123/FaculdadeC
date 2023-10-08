#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int escolha = 0;
    char nome[50];
    int golTime1 = 0;
    int golTime2 = 0;
    int fase = 1

    while (escolha != 2) {
        printf("Bem-vindo ao Jogo!\n");
        printf("Selecione uma opcao:\n");
        printf("1. Entrar no jogo\n");
        printf("2. Sair\n");

        scanf("%d", &escolha);

        while (escolha != 2 && escolha != 1) {
            printf("Opcao invalida. Use 1 para entrar no jogo e 2 para sair.\n");
            scanf("%d", &escolha);
        }

        if (escolha == 1) {
            printf("BEM-VINDO AO JOGO!\n");
            printf("Qual sera o nome do seu time: ");
            scanf("%s", nome);
            printf("Seja bem-vindo a Copa do Brasil!\n\n");
            printf("Seu time esta nas oitavas de final desta competicao e o primeiro jogo sera contra o America-MG.\n\n");

            // Simulação de um jogo (90 minutos)
            for (int minuto = 1; minuto <= 90; minuto++) {
                printf("Minuto %d\n", minuto);

                if (minuto == 35) {
                    printf("Seu atacante esta cara a cara com o goleiro!\n");
                    printf("Voce precisa resolver uma conta para acertar o gol.\n");
                    printf("Qual e o resultado de 7 * 6? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 42) {
                        printf("GOOOOOOOL!!! Seu time marcou!\n");
                        golTime1++;
                        system("pause");
                    } else {
                        printf("O goleiro defendeu!\n");
                        system("pause");
                        
                    } 
                }
                
                if (minuto == 75) {
                    printf("PENALTI PARA O AMERICA!!!!!!!!!\n");
                    printf("Para que seu goleiro consiga evitar o gol resolva a multiplicacao.\n");
                    printf("Qual e o resultado de 9 * 4? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 36) {
                        printf("PEGA O GOLEIRO!!!!!!\n");
                        system("pause");
                    } else {
                        printf("GOOOOOL, DO AMERICA!!!!!\n");
                        golTime2++;
                        system("pause");
                    } 
                }

                	Sleep(100); 
            }

            printf("\nFim da partida!\n");
            if(golTime1 == golTime2){
				printf("vamos para os penaltis");
				
			}
            	

            if (golTime1 > golTime2)	{
				printf("Parabéns, seu time passou de fase!");
            } 
            if (golTime1 < golTime2){
				printf("seu time perdeu");
			}
            
            
        } 
		else {
            printf("Você saiu do jogo.\n");
        }

        printf("\nPressione Enter para continuar...");
        getchar(); // Limpar o buffer de entrada
        getchar(); // Aguardar a tecla Enter

        system("cls"); 
    }

    return 0;
}
