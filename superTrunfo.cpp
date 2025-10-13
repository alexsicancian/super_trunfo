#include <stdio.h>

int main() {

    // Declara��o das vari�veis com nomes descritivos
    int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois;
    char estadoUm, estadoDois;
    float areaUm, areaDois, pibUm, pibDois;
    char cidadeUm[30], cidadeDois[30];
    char codCartaUm[5], codCartaDois[5];

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

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pibUm);

    printf("Quantos pontos tur�sticos tem nessa cidade? ");
    scanf("%d", &pTuristicosUm);

    // Gera��o autom�tica do c�digo da carta
    sprintf(codCartaUm, "%c01", estadoUm);

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

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pibDois);

    printf("Quantos pontos tur�sticos tem nessa cidade? ");
    scanf("%d", &pTuristicosDois);

    sprintf(codCartaDois, "%c02", estadoDois);

    // Exibi��o dos dados
    printf("As cartas cadastradas foram:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoUm);
    printf("C�digo: %s\n", codCartaUm);
    printf("Nome da Cidade: %s\n", cidadeUm);
    printf("Popula��o: %d habitantes\n", populacaoUm);
    printf("�rea: %.2f km�\n", areaUm);
    printf("PIB: %.2f bilh�es\n", pibUm);
    printf("N�mero de Pontos Tur�sticos: %d\n", pTuristicosUm);

    printf("-------------------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoDois);
    printf("C�digo: %s\n", codCartaDois);
    printf("Nome da Cidade: %s\n", cidadeDois);
    printf("Popula��o: %d habitantes\n", populacaoDois);
    printf("�rea: %.2f km�\n", areaDois);
    printf("PIB: %.2f bilh�es\n", pibDois);
    printf("N�mero de Pontos Tur�sticos: %d\n", pTuristicosDois);

    printf("Essas foram as cartas cadastradas.\n");

    return 0;
}

