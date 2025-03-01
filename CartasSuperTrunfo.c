#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Funções para comparar as características
int compararPopulacao(Carta c1, Carta c2) {
    if (c1.populacao > c2.populacao) {
        return 1; // Jogador 1 vence
    } else if (c1.populacao < c2.populacao) {
        return -1; // Jogador 2 vence
    } else {
        return 0; // Empate
    }
}

int compararArea(Carta c1, Carta c2) {
    if (c1.area > c2.area) {
        return 1; // Jogador 1 vence
    } else if (c1.area < c2.area) {
        return -1; // Jogador 2 vence
    } else {
        return 0; // Empate
    }
}

int compararPib(Carta c1, Carta c2) {
    if (c1.pib > c2.pib) {
        return 1; // Jogador 1 vence
    } else if (c1.pib < c2.pib) {
        return -1; // Jogador 2 vence
    } else {
        return 0; // Empate
    }
}

// Função para exibir uma carta
void exibirCarta(Carta c) {
    printf("Estado: %c\n", c.estado);
    printf("Codigo: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.cidade);
    printf("Populacao: %d\n", c.populacao);
    printf("Area: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Numero de Pontos Turisticos: %d\n", c.pontosTuristicos);
}

// Função principal do jogo
int main() {
    Carta cartaJogador1, cartaJogador2;
    int escolha;
    int resultado;

    // Cadastrar as cartas dos jogadores
    printf("Digite os dados da carta do Jogador 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &cartaJogador1.estado);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", cartaJogador1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cartaJogador1.cidade);
    printf("Populacao: ");
    scanf("%d", &cartaJogador1.populacao);
    printf("Area (em km²): ");
    scanf("%f", &cartaJogador1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &cartaJogador1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &cartaJogador1.pontosTuristicos);

    printf("\nDigite os dados da carta do Jogador 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &cartaJogador2.estado);
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", cartaJogador2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cartaJogador2.cidade);
    printf("Populacao: ");
    scanf("%d", &cartaJogador2.populacao);
    printf("Area (em km²): ");
    scanf("%f", &cartaJogador2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &cartaJogador2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &cartaJogador2.pontosTuristicos);

    // Escolher a característica para comparar
    printf("\nEscolha a característica para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("Escolha (1-3): ");
    scanf("%d", &escolha);

    // Comparar as cartas
    switch (escolha) {
        case 1:
            resultado = compararPopulacao(cartaJogador1, cartaJogador2);
            break;
        case 2:
            resultado = compararArea(cartaJogador1, cartaJogador2);
            break;
        case 3:
            resultado = compararPib(cartaJogador1, cartaJogador2);
            break;
        default:
            printf("Escolha inválida!\n");
            return 1;
    }

    // Exibir as cartas
    printf("\nCarta do Jogador 1:\n");
    exibirCarta(cartaJogador1);
    printf("\nCarta do Jogador 2:\n");
    exibirCarta(cartaJogador2);

    // Exibir o resultado
    if (resultado == 1) {
        printf("\nJogador 1 venceu!\n");
    } else if (resultado == -1) {
        printf("\nJogador 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
