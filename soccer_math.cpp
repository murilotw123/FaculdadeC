#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int escolha = 0;
    char nome[50];
    int golTime1 = 0;
    int golTime2 = 0;
    int fase = 1 ;
    int anoFundacao;
    

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
            printf("Qual o ano de fundacao do seu time?");
            scanf("%d", anoFundacao);
            
            
			
			            
            printf("Seja bem-vindo a Copa do Brasil!\n\n");
            printf("Seu time esta nas oitavas de final desta competicao e o primeiro jogo sera contra o America-MG.\n\n");
            system("pause");

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
                  	printf("com uma batida colocada o america faz o seu primeiro gol no jogo\n");
                  	golTime2++;
                }

                	Sleep(100); 
            }

            printf("\nFim da partida!\n");
            if(golTime1 == golTime2){
				printf("vamos para os penaltis\n");
				printf("para seu time passar de fase acerte o calculo matematico:");
				printf("(25+20)*2\n"); 
				int resposta;
				scanf("%d", &resposta);
				if (resposta == 90) {
                        printf("PARABENS SEU TIME ESTA NAS QUARTAS DE FINAL!\n");
                        system("pause");
                        fase++;
                    } else {
                        printf("Seu time nao passou de fase!\n");
                    } 
				
			}
            	

            if (golTime1 > golTime2)	{
				printf("Parabens, seu time passou de fase!\n\n");
				fase++;
            } 
            if (golTime1 < golTime2){
				printf("seu time perdeu");
			}
			if(fase == 2){
				 printf("Seu time esta nas quartas de final desta competicao e o jogo sera contra o santos.\n\n");
            system("pause");

            // Simulação de um jogo (90 minutos)
            for (int minuto = 1; minuto <= 90; minuto++) {
                printf("Minuto %d\n", minuto);

                if (minuto == 67) {
                    printf("PENALTI!!!\n");
                    printf("para que seu jogador acerte o gol, acerte a conta...\n");
                    printf("Qual e o resultado de 6 * 8? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 48) {
                        printf("GOOOOOOOL!!! Seu time marcou!\n");
                        golTime1++;
                        system("pause");
                    } else {
                        printf("O goleiro defendeu!\n");
                        system("pause");
                        
                    } 
                }
                
                if (minuto == 77) {
                    printf("Falta na entrada da area!!!!\n");
                    printf("seu melhor jogador foi para a bola...\n");
                    printf("Qual e o resultado de (30+20)*4? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 200) {
                        printf("GOLACOOO,ANTOLOGICO!!\n");
                        golTime1++;
                        system("pause");
                    } else {
                        printf("ISOLOU!!!!\n");
                        system("pause");
                    } 
                }
                if(minuto == 89){
					printf("o jovem meio campista santista chuta da entrada da area e a bola morre no fundo da rede!!\n");
					golTime2++;
				}
                	Sleep(100); 
            }

            printf("\nFim da partida!\n");
            if(golTime1 == golTime2){
				printf("vamos para os penaltis\n");
				printf("para seu time passar de fase acerte o calculo matematico:");
				printf("30% de 90"); 
				int resposta;
				scanf("%d", &resposta);
				if (resposta == 27) {
                        printf("PARABENS SEU TIME ESTA NA SEMI FINAL!\n");
                        system("pause");
                        fase++;
                    } else {
                        printf("Seu time nao passou de fase!\n");
                    } 
				
			}
            	

            if (golTime1 > golTime2)	{
				printf("Parabens, seu time passou de fase!\n\n");
				fase++;
            } 
            if (golTime1 < golTime2){
				printf("seu time perdeu");
			}
			
			}
			if(fase == 3){
				 printf("Seu time esta na semi-final desta competicao e o jogo sera contra o sao paulo.\n\n");
            	 system("pause");

            // Simulação de um jogo (90 minutos)
            for (int minuto = 1; minuto <= 90; minuto++) {
                printf("Minuto %d\n", minuto);
				 if (minuto == 67) {
                    printf("seu jogador parte para cima da defesa adversaria!\n");
                    printf("para que para que ele consiga tirar o 0 do placar, acerte a conta...\n");
                    printf("Qual e o resultado de 50/2+50? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 75) {
                        printf("GOOOLLL, vc abre 1 a 0 na disputa!\n");
                        golTime1++;
                        system("pause");
                    } else {
                        printf("errouuuu!!\n");
                       
                        system("pause");
                        
                    } 
                }
                if (minuto == 89) {
                    printf("o atacante sao paulino esta vindo em diraçao ao seu gol!\n");
                    printf("para que seu zagueiro tire a bola sem cometer um penalti, acerte a conta...\n");
                    printf("Qual e o resultado de ((50/2)+50)*2? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 150) {
                        printf("com um corte preciso seu zagueiro tira na hora h!\n");
                        system("pause");
                    } else {
                        printf("GOL DO SAO PAULO NO ULTIMO MINUTO!!!!\n");
                        golTime2++;
                        system("pause");
                        
                    } 
                }
                

                	Sleep(100); 
            }

            printf("\nFim da partida!\n");
            if(golTime1 == golTime2){
				printf("vamos para os penaltis\n");
				printf("para seu time passar de fase acerte o calculo matematico:");
				printf("150% de 20"); 
				int resposta;
				scanf("%d", &resposta);
				if (resposta == 30) {
                        printf("PARABENS SEU TIME ESTA NA FINAL!\n");
                        system("pause");
                        fase++;
                    } else {
                        printf("Seu time nao passou de fase!\n");
                    } 
				
			}
            	

            if (golTime1 > golTime2)	{
				printf("Parabens, seu time passou de fase!\n\n");
				fase++;
            } 
            if (golTime1 < golTime2){
				printf("seu time perdeu");
			}
			
			}
			if(fase == 4){
				 printf("Seu time esta na final desta competicao e o jogo sera contra o palmeiras.\n\n");
            system("pause");

            // Simulação de um jogo (90 minutos)
            for (int minuto = 1; minuto <= 90; minuto++) {
                printf("Minuto %d\n", minuto);

                if (minuto == 5) {
                    printf("o meio campista palmerense chuta a bola com efeito de muito longe e marca 1 golaco!\n");
                    golTime2++;             
                }
                
                if (minuto == 35) {
                    printf("Falta na entrada da area!!!!\n");
                    printf("o jogador do palmeiras bate colocado e em uma falha tremenda do goleiro abre 2 a 0 para o time alviverde!!!\n");
                    golTime2++;
                }
                 if (minuto == 67) {
                    printf("Penalti!!!!\n");
                    printf("para que seu atacante marque o gol, acerte o resultado...\n");
                    printf("Qual e o resultado de 25+60*2? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 145) {
                        printf("GOOOOOOOL!!! Seu time marcou!\n");
                        golTime1++;
                        system("pause");
                    } else {
                        printf("O goleiro defendeu!\n");
                        system("pause");
                        
                    } 
                }
                 if (minuto == 84) {
                    printf("seu atacante resolveu bater de muito longe!\n");
                    printf("para que ele acerte o gol...\n");
                    printf("Qual e o resultado de 9*9? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 81) {
                        printf("GOOOOOOOL!!! Seu time marcou!\n");
                        golTime1++;
                        system("pause");
                    } else {
                        printf("O goleiro defendeu!\n");
                        system("pause");
                        
                    } 
                }
                 if (minuto == 89) {
                    printf("escanteio no ultimo minuto!\n");
                    printf("o time inteiro foi para area\n");
                    printf("a bola foi cruzada na  cabeca do goleiro...");
                    printf("Qual e o resultado de 150*4? ");
                    int resposta;
                    scanf("%d", &resposta);

                    if (resposta == 600) {
                        printf("GOOOOOOOL!!! no ultimo minuto o goleiro marca,HISTORICO!\n");
                        golTime1++;
                        system("pause");
                    } else {
                        printf("O goleiro defendeu!\n");
                        system("pause");
                        
                    } 
                }
                

                	Sleep(100); 
            }

            printf("\nFim da partida!\n");
            if(golTime1 == golTime2){
				printf("vamos para os penaltis\n");
				printf("para seu time GANHE A COMPETICAO acerte o calculo matematico:");
				printf("(100/4)*8"); 
				int resposta;
				scanf("%d", &resposta);
				if (resposta == 200) {
                        printf("PARABENS SEU TIME FOI CAMPEAO!\n");
                        system("pause");
                        fase++;
                    } else {
                        printf("Seu time perdeu na final!\n");
                    } 
				
			}
            	

            if (golTime1 > golTime2)	{
				printf("CAMPEAO!!!!");
				printf("Com uma performance incrivel eles conseguem a vitoria");
            } 
            if (golTime1 < golTime2){
				printf("seu time perdeu");
			}
			
			}
            
            
        } 
		else {
            printf("Voce saiu do jogo.\n");
        }

        printf("\nPressione Enter para continuar...");
        getchar(); // Limpar o buffer de entrada
        getchar(); // Aguardar a tecla Enter

        system("cls"); 
    }

    return 0;
}

