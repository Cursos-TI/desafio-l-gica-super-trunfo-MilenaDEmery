#include <stdio.h>
#include <string.h>


int main() {
// ===== Carta 1 =====
    char estado [3];
    char codigo_carta [10];
    char cidade [50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_carpita;

// ===== Carta 1 =====
    char estado2 [3];
    char codigo_carta2 [10];
    char cidade2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

// ===== Entrada de dados  da Carta1 1 =====
    printf("\n--- Entrada de dados da Carta 1 ---\n");

    printf("Digite o estado (sigla): ");
    scanf("%s", estado);

    printf("Digite o codigo da carta (ex:A01): ");
    scanf(" %s", codigo_carta);
    getchar(); // Limpar o buffer do teclado antes de usar fgets

    printf("Digite a cidade: ");
    fgets(cidade, 50, stdin); // Usadndo o fgets para ler strings com espaços
    cidade[strcspn(cidade, "\n")] = 0; // Remover o carctere de nova linha lido pelo fgets

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%f", &pontos_turisticos);

// ===== Entrada de dados da Carta 2 =====
    printf("\n--- Entrada de dados da Carta 2 ---\n");

    printf("Digite o estado (sigla): ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (ex:A01): ");
    scanf(" %s", codigo_carta2);
    getchar(); // Limpar o buffer do teclado antes de usar fgets

    printf("Digite a cidade: ");
    fgets(cidade2, 50, stdin); // Usadndo o fgets para ler strings com espaços
    cidade2[strcspn(cidade2, "\n")] = 0; // Remover o carctere de nova linha lido pelo fgets

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%f", &pontos_turisticos2);

// Calcula densidade populacional e PIB per capita da carta 1
    densidade_populacional = (float) populacao / area;
    pib_per_carpita = pib * 1000000000 / (float) populacao;

// Calcula densidae populacional e PIB per capita sa carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / (float) populacao2;

// ===== comparação entre as cartas =====
    printf("\n--- Resultado da comparacao das Cartas ---\n");
    
    printf("\nAtributo: Populacao:\n");

    printf("Carta 1 - %s - %s (%s): %lu\n", codigo_carta, cidade, estado, populacao);
    printf("Carta 2 - %s - %s (%s): %lu\n", codigo_carta2, cidade2, estado2, populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    printf("\nAtributo: Area:\n");

    printf("Carta 1 - %s - %s (%s): %.2f km²\n", codigo_carta, cidade, estado, area);
    printf("Carta 2 - %s - %s (%s): %.2f km²\n", codigo_carta2, cidade2, estado2, area2);

    if (area > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nAtributo: PIB:\n");

    printf("Carta 1 - %s - %s (%s): R$ %.2f bilhoes de reais\n", codigo_carta, cidade, estado, pib);
    printf("Carta 2 - %s - %s (%s): R$ %.2f bilhoes de reais\n", codigo_carta2, cidade2, estado2, pib2);

    if (pib > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    printf("\nAtributo: Pontos Turisticos:\n");

    printf("Carta 1 - %s - %s (%s): %d\n", codigo_carta, cidade, estado, pontos_turisticos);
    printf("Carta 2 - %s - %s (%s): %d\n", codigo_carta2, cidade2, estado2, pontos_turisticos2);

    if (pontos_turisticos > pontos_turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    printf("\nAtributo: Densidade Populacional (hab/km²):\n");

    printf("Carta 1 - %s - %s (%s): %.2f\n", codigo_carta, cidade, estado, densidade_populacional);
    printf("Carta 2 - %s - %s (%s): %.2f\n", codigo_carta2, cidade2, estado2, densidade_populacional2);

    if (densidade_populacional < densidade_populacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nAtributo: PIB per capita (R$):\n");

    printf("Carta 1 - %s - %s (%s): R$ %.2f\n", codigo_carta, cidade, estado, pib_per_carpita);
    printf("Carta 2 - %s - %s (%s): R$ %.2f\n", codigo_carta2, cidade2, estado2, pib_per_capita2);

    if (pib_per_carpita > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
