#include <stdio.h>
#include <locale.h>

int main() {
	//Vi durante o desenvolvimento que os acentos n�o er�o reconhecidos e pesquisando achei essa fun��o que configura os caracteres e acentua��o para os do portugues
    setlocale(LC_ALL, "Portuguese");

    // Declara��o das vari�veis com nomes descritivos
    int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois;
    char estadoUm, estadoDois;
    float areaUm, areaDois, pibUm, pibDois, densidadeUm, densidadeDois, pibPerCapitaUm, pibPerCapitaDois;
    char cidadeUm[30], cidadeDois[30]; 
    double poderUm, poderDois;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra que representa seu estado (Apenas uma letra!): ");
    scanf(" %c", &estadoUm);

    printf("Qual o nome da cidade? ");
    scanf("%s", cidadeUm);

    printf("Qual o tamanho da popula��o? ");
    scanf("%d", &populacaoUm);

    printf("Qual a �rea que essa cidade ocupa (em km�)? ");
    scanf("%f", &areaUm);

    printf("Qual o PIB dessa cidade (em bilh�es)? ");
    scanf("%f", &pibUm);

    printf("Quantos pontos tur�sticos tem nessa cidade? ");
    scanf("%d", &pTuristicosUm);

    printf("\nAgora vamos para a carta de n�mero 2!\n\n");

    // Entrada de dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra que representa seu estado (Apenas uma letra!): ");
    scanf(" %c", &estadoDois);

    printf("Qual o nome da cidade? ");
    scanf("%s", cidadeDois);

    printf("Qual o tamanho da popula��o? ");
    scanf("%d", &populacaoDois);

    printf("Qual a �rea que essa cidade ocupa (em km�)? ");
    scanf("%f", &areaDois);

    printf("Qual o PIB dessa cidade (em bilh�es)? ");
    scanf("%f", &pibDois);

    printf("Quantos pontos tur�sticos tem nessa cidade? ");
    scanf("%d", &pTuristicosDois);
    
    //calculos de densidade pop. e PIB per capita e poder
    densidadeUm = (float) populacaoUm/areaUm;
    densidadeDois = (float) populacaoDois/areaDois;
    
    pibPerCapitaUm = ((float)pibUm * 1000000000)/(float)populacaoUm;
    pibPerCapitaDois = ((float)pibDois * 1000000000)/(float)populacaoDois;
    
    poderUm = (float) areaUm + (float) populacaoUm + ((float) pibUm * 1000000000) + (float) pTuristicosUm + (float) pibPerCapitaUm - (float) densidadeUm;
    poderDois = (float) areaDois + (float) populacaoDois + ((float) pibDois * 1000000000) + (float) pTuristicosDois + (float) pibPerCapitaDois - (float) densidadeDois;
    
    
    //Verifica��o de cada variavel para decis�o de qual carta � melhor
    
    

    // Exibi��o dos dados
    printf("\n===========================================\n");
    printf("          CARTAS CADASTRADAS\n");
    printf("===========================================\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoUm);
    printf("C�digo: %c01\n", estadoUm);
    printf("Nome da Cidade: %s\n", cidadeUm);
    printf("Popula��o: %d habitantes\n", populacaoUm);
    printf("�rea: %.2f km�\n", areaUm);
    printf("PIB: %.2f bilh�es\n", pibUm);
    printf("N�mero de Pontos Tur�sticos: %d\n", pTuristicosUm);
    printf("Densidade Populacional: %.2f hab/km�\n", densidadeUm);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaUm);
    printf("Super Poder: %.2f\n", poderUm);

    printf("-------------------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoDois);
    printf("C�digo: %c02\n", estadoDois);
    printf("Nome da Cidade: %s\n", cidadeDois);
    printf("Popula��o: %d habitantes\n", populacaoDois);
    printf("�rea: %.2f km�\n", areaDois);
    printf("PIB: %.2f bilh�es\n", pibDois);
    printf("N�mero de Pontos Tur�sticos: %d\n", pTuristicosDois);
    printf("Densidade Populacional: %.2f hab/km�\n", densidadeDois);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaDois);
    printf("Super Poder: %.2f\n", poderDois);
    
	//Verifica��o e demonstra��o de qual carta ganha em cada atributo.
	printf("-------------------------------------------\n");
	printf("Compara��o das Cartas: \n");
	printf("Popula��o: %d\n", populacaoUm > populacaoDois);
	printf("�rea: %d\n", areaUm > areaDois);
	printf("PIB: %d\n", pibUm > pibDois);
	printf("Pontos Tur�sticos: %d\n", pTuristicosUm > pTuristicosDois);
	printf("Densidade Populacional: %d\n", densidadeUm > densidadeDois);
	printf("PIB per Capita: %d\n", pibPerCapitaUm > pibPerCapitaDois);
	printf("Super Poder: %d\n", poderUm > poderDois);
	
	
    

    return 0;
}

