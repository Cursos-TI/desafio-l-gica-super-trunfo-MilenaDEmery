#include <stdio.h>
#include <string.h>

int main() {
// ===== Carta 1 =====
    char pais [50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;

// ===== Carta 1 =====
    char pais2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;

// ===== Entrada de dados  da Carta1 1 =====
    printf("\n--- Entrada de dados da Carta 1 ---\n");

    printf("Digite o país: ");
    fgets(pais, 50, stdin); // Usadndo o fgets para ler strings com espaços
    pais[strcspn(pais, "\n")] = 0; // Remover o carctere de nova linha lido pelo fgets

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%f", &pontos_turisticos);
    getchar(); // Consome o \n que fica no buffer

// ===== Entrada de dados da Carta 2 =====
    printf("\n--- Entrada de dados da Carta 2 ---\n");

    printf("Digite a cidade: ");
    fgets(pais2, 50, stdin); // Usadndo o fgets para ler strings com espaços
    pais2[strcspn(pais2, "\n")] = 0; // Remover o carctere de nova linha lido pelo fgets

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%f", &pontos_turisticos2);

// Calcula densidade populacional da carta 1
    densidade_populacional = (float) populacao / area;

// Calcula densidae populacional da carta 2
    densidade_populacional2 = (float) populacao2 / area2;

// ===== Menu interativo para escolher o atributo =====
    int escolha;
    printf("--- Escolha um Atributo para a Comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha);

// ===== Estrutura switch com if aninhada para comparação =====
    switch (escolha) {
        case 1: 
          printf("\n Atributo: Populacao:\n");
          printf("Carta 1 - %s: %lu\n", pais, populacao);
          printf("Carta 2 - %s: %lu\n", pais2, populacao2);
        if (populacao > populacao2) {
            printf("Carta 1 venceu!\n");
        } else {
        if (populacao < populacao2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!");
        }
        }
          break;
        case 2:
          printf("\n Atributo: Area:\n");
          printf("Carta 1 - %s: %.2f km²\n", pais, area);
          printf("Carta 2 - %s: %.2f km²\n", pais2, area2);
        if (area > area2) {
            printf("Carta 1 venceu!\n");
        } else {
        if (area < area2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!");
        }
        }
          break;
        case 3:
          printf("\n Atributo: PIB:\n");
          printf("Carta 1 - %s: %.2f bilhoes de reais\n", pais, pib);
          printf("Carta 2 - %s: %.2f bilhoes de reais\n", pais2, pib2);
        if (pib > pib2) {
            printf("Carta 1 venceu!\n");
        } else {
        if (pib < pib2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!");
        }
        }
          break;
        case 4:
          printf("\n Atributo: Pontos Turisticos:\n");
          printf("Carta 1 - %s: %d\n", pais, pontos_turisticos);
          printf("Carta 2 - %s: %d\n", pais2, pontos_turisticos2);
        if (pontos_turisticos > pontos_turisticos2) {
            printf("Carta 1 venceu!\n");
        } else {
        if (pontos_turisticos < pontos_turisticos2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!");
        }
        }
          break;
        case 5:
          printf("\n Atributo: Densidade Populacional (hab/km²):\n");
          printf("Carta 1 - %s: %.2f\n", pais, densidade_populacional);
          printf("Carta 2 - %s: %.2f\n", pais2, densidade_populacional2);
        if (densidade_populacional < densidade_populacional2) {
            printf("Carta 1 venceu!\n");
        } else {
        if (densidade_populacional > densidade_populacional2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!");
        }    
        }
          break;
        default:
          printf("Opcao invalida!\n");
    }

    return 0;
}
