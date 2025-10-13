#include <stdio.h>

int main() {

    // Declaração das variáveis com nomes descritivos
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

    printf("Qual o tamanho da população? ");
    scanf("%d", &populacaoUm);

    printf("Qual a área que essa cidade ocupa (em km²)? ");
    scanf("%f", &areaUm);

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pibUm);

    printf("Quantos pontos turísticos tem nessa cidade? ");
    scanf("%d", &pTuristicosUm);

    // Geração automática do código da carta
    sprintf(codCartaUm, "%c01", estadoUm);

    printf("\nAgora vamos para a carta de número 2!\n\n");

    // Entrada de dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra que representa seu estado (Apenas uma letra!): ");
    scanf(" %c", &estadoDois);

    printf("Qual o nome da cidade? ");
    scanf("%s", cidadeDois);

    printf("Qual o tamanho da população? ");
    scanf("%d", &populacaoDois);

    printf("Qual a área que essa cidade ocupa (em km²)? ");
    scanf("%f", &areaDois);

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pibDois);

    printf("Quantos pontos turísticos tem nessa cidade? ");
    scanf("%d", &pTuristicosDois);

    sprintf(codCartaDois, "%c02", estadoDois);

    // Exibição dos dados
    printf("As cartas cadastradas foram:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoUm);
    printf("Código: %s\n", codCartaUm);
    printf("Nome da Cidade: %s\n", cidadeUm);
    printf("População: %d habitantes\n", populacaoUm);
    printf("Área: %.2f km²\n", areaUm);
    printf("PIB: %.2f bilhões\n", pibUm);
    printf("Número de Pontos Turísticos: %d\n", pTuristicosUm);

    printf("-------------------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoDois);
    printf("Código: %s\n", codCartaDois);
    printf("Nome da Cidade: %s\n", cidadeDois);
    printf("População: %d habitantes\n", populacaoDois);
    printf("Área: %.2f km²\n", areaDois);
    printf("PIB: %.2f bilhões\n", pibDois);
    printf("Número de Pontos Turísticos: %d\n", pTuristicosDois);

    printf("Essas foram as cartas cadastradas.\n");

    return 0;
}

