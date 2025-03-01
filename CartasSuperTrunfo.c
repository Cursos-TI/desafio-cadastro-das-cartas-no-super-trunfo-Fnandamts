#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // Para o código da carta (ex: A01)
    char cidade1[50]; // Nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4]; // Para o código da carta (ex: B02)
    char cidade2[50]; // Nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura das informações para a carta 1
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Leitura da cidade incluindo espaços
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura das informações para a carta 2
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Leitura da cidade incluindo espaços
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
