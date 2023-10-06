#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int rodadasVencidas = 0;
    int rodadasPerdidas = 0;
    int rodadasEmpatadas = 0;
    int pontos = 0; // Variável para contar os pontos totais

    printf("Bem-vindo ao jogo!\n");
    printf("Vamos criar seu time!\n");
    printf("Digite o nome do seu time: ");
    scanf("%s", nome);

    int anoFundacao;
    char estadio[50];
    int capacidadeEstadio;
    int jogosEmCasa = 19;
    float percentualUtilizado = 0.60;

    printf("Digite o ano de fundacao do time: ");
    scanf("%d", &anoFundacao);

    printf("Digite o nome do estadio do time: ");
    scanf("%s", estadio);
    
	printf("qual a capacidade maxima do seu estadio: ");
	scanf("%d", &capacidadeEstadio);
	 float capacidadeUtilizada = capacidadeEstadio * percentualUtilizado;
	 float totalTorcedores = jogosEmCasa * capacidadeUtilizada;
	
	
	
	
	
	
	
	
	
    printf("Vamos para a primeira temporada!\n");

    // Loop para as 38 rodadas
    for (int rodada = 1; rodada <= 38; rodada++) {
        char resultado;
        printf("Rodada %d - Digite o resultado (V para vitoria, D para derrota , E para empate): ", rodada);
        scanf(" %c", &resultado);

        // Usando if e else para verificar o resultado
        
        while (resultado != 'v' && (resultado !='V') && (resultado !='d') && (resultado !='D') && (resultado !='e') && (resultado !='E')){
			 printf("Opção invalida! Use V, P ou E.\n");
			 scanf(" %c", &resultado);
		}
        if (resultado == 'V' || resultado == 'v') {
            rodadasVencidas++;
            pontos += 3; // Vitória adiciona 3 pontos
        }  if (resultado == 'D' || resultado == 'd') {
            rodadasPerdidas++;
        }  if (resultado == 'E' || resultado == 'e') { 
            rodadasEmpatadas++;
            pontos++; // Empate adiciona 1 ponto
        }
        
        
        
    }
    

    // Calcula o aproveitamento em porcentagem
    float aproveitamento = (float)pontos / (38 * 3) * 100;

    // Exibe o resultado final
    
    printf("\nResultado final para o time %s:\n", nome);
    //caso seja rebaixado
    if(pontos<=45){
		printf("\no seu time foi rebaixado para uma divisao inferior :(\n");
	}
	//caso seja campeao
	if(pontos>75){
		printf("\nPARABENS\n");
		printf("voce foi CAMPEAO!!!\n");
	}
	//caso classifique para a libertadores
	if(pontos > 64 && pontos <= 75){
		printf("\nseu time se classificou para a proxima libertadores!!\n");
	}
	//caso tenha uma temporada mediana entre 6 e 16
	if(pontos >45 && pontos <= 63){
		printf("\no seu time teve uma temporada razoavel :|\n");
	}
    printf("\nAno de Fundacao: %d\n", anoFundacao);
    printf("\nEstadio: %s\n\n", estadio);
    printf("\nRodadas Vencidas: %d\n", rodadasVencidas);
    printf("\nRodadas Perdidas: %d\n", rodadasPerdidas);
    printf("\nRodadas Empatadas: %d\n", rodadasEmpatadas);
    printf("\nPontos Totais: %d\n", pontos);
    printf("\nAproveitamento: %.2f%%\n", aproveitamento);
    printf("\nTotal de torcedores levados ao estadio em %d jogos em casa: %.2f\n", jogosEmCasa, totalTorcedores);

    return 0;
}