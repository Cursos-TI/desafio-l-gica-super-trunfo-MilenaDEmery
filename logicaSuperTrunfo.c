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
    int escolha, escolha2;
    printf("--- Escolha o primeiro Atributo para a comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha);

    printf("--- Escolha o segundo atributo (diferente do primeiro) ---\n");

// Mostra apenas as opções que resetaram
    switch (escolha) {
        case 1: 
          printf("2. Area\n");
          printf("3. PIB\n");
          printf("4. Pontos Turisticos\n");
          printf("5. Densidade Populacional\n");
          scanf("%d", &escolha2);
          break;
        case 2:
          printf("1. Populacao\n");
          printf("3. PIB\n");
          printf("4. Pontos Turisticos\n");
          printf("5. Densidade Populacional\n");
          scanf("%d", &escolha2);
          break;
        case 3:
          printf("1. Populacao\n");
          printf("2. Area\n");
          printf("4. Pontos Turisticos\n");
          printf("5. Densidade Populacional\n");
          scanf("%d", &escolha2);
          break;
        case 4:
          printf("1. Populacao\n");
          printf("2. Area\n");
          printf("3. PIB\n");
          printf("5. Densidade Populacional\n");
          scanf("%d", &escolha2);
          break;
        case 5:
          printf("1. Populacao\n");
          printf("2. Area\n");
          printf("3. PIB\n");
          printf("4. Pontos Turisticos\n");
          scanf("%d", &escolha2);
          break;
        default:
          printf("Opcao invalida!\n");
    }  
  
// Verifica se o segundo atributo é valido    
    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha) {
      printf("Escolha invalida! O segundo atributo deve estar no menu e ser diferente do primeiro.\n ");
      return 0;
    }

// ===== Pega os valores escolhidos (operador ternário) =====
    float val1_a1 = (escolha == 1) ? populacao :
                    (escolha == 2) ? area :
                    (escolha == 3) ? pib :
                    (escolha == 4) ? pontos_turisticos :
                    densidade_populacional;
 
    float val2_a1 = (escolha == 1) ? populacao2 :
                    (escolha == 2) ? area2 :
                    (escolha == 3) ? pib2 :
                    (escolha == 4) ? pontos_turisticos2 :
                    densidade_populacional2;

    float val1_a2 = (escolha2 == 1) ? populacao :
                    (escolha2 == 2) ? area :
                    (escolha2 == 3) ? pib :
                    (escolha2 == 4) ? pontos_turisticos :
                    densidade_populacional;
                  
    float val2_a2 = (escolha2 == 1) ? populacao2 :
                    (escolha2 == 2) ? area2 :
                    (escolha2 == 3) ? pib2 :
                    (escolha2 == 4) ? pontos_turisticos2 :
                    densidade_populacional2;

// ===== Soma dos atributos =====                    
    float soma1 = val1_a1 + val1_a2;
    float soma2 = val2_a1 + val2_a2;

// ===== Comparação do primeiro atributo =====
    printf("\n Resultado da Comparacao do Atributo 1:\n");

    switch (escolha) {
      case 1:
        printf("\nAtributo: Populacao:\n");
        printf("Carta 1 - %s: %lu\n", pais, populacao);
        printf("Carta 2 - %s: %lu\n", pais2, populacao2);
        break;
      case 2:
        printf("\nAtributo: Area:\n");
        printf("Carta 1 - %s: %.2f km²\n", pais, area);
        printf("Carta 2 - %s: %.2f km²\n", pais2, area2);
        break;
      case 3:
        printf("\nAtributo: PIB:\n");
        printf("Carta 1 - %s: %.2f bilhoes de reais\n", pais, pib);
        printf("Carta 2 - %s: %.2f bilhoes de reais\n", pais2, pib2);
        break;
      case 4:
        printf("\nAtributo: Pontos Turisticos:\n");
        printf("Carta 1 - %s: %d\n", pais, pontos_turisticos);
        printf("Carta 2 - %s: %d\n", pais2, pontos_turisticos2);
        break;
      case 5:
        printf("\nAtributo: Densidade Populacional:\n");
        printf("Carta 1 - %s: %.2f\n", pais, densidade_populacional);
        printf("Carta 2 - %s: %.2f\n", pais2, densidade_populacional2);
       break;
    }

    if ((escolha ==5 && val1_a1 < val2_a1) || (escolha != 5 && val1_a1 > val2_a1)) {
      printf("Vencedor do Atributo 1: Carta 1\n");
    } else if (val1_a1 == val2_a1) {
      printf("Empate no Atributo 1\n");
    } else {
      printf("Vencedor do Atributo 1: Carta 2\n");
    }

// ===== Comparação do segundo atributo =====   
    printf("\n Resultado da Comparacao do Atributo 2:\n");
    
    switch (escolha2) {
      case 1:
        printf("\nAtributo: Populacao:\n");
        printf("Carta 1 - %s: %lu\n", pais, populacao);
        printf("Carta 2 - %s: %lu\n", pais2, populacao2);  
        break;
      case 2:
        printf("\nAtributo: Area:\n");
        printf("Carta 1 - %s: %.2f km²\n", pais, area);
        printf("Carta 2 - %s: %.2f km²\n", pais2, area2);
        break;
      case 3:
        printf("\nAtributo: PIB:\n");
        printf("Carta 1 - %s: %.2f bilhoes de reais\n", pais, pib);
        printf("Carta 2 - %s: %.2f bilhoes de reais\n", pais2, pib2);
        break;
      case 4:
        printf("\nAtributo: Pontos Turisticos:\n");
        printf("Carta 1 - %s: %d\n", pais, pontos_turisticos);
        printf("Carta 2 - %s: %d\n", pais2, pontos_turisticos2);
        break;
      case 5:
        printf("\nAtributo: Densidade Populacional:\n");
        printf("Carta 1 - %s: %.2f\n", pais, densidade_populacional);
        printf("Carta 2 - %s: %.2f\n", pais2, densidade_populacional2);
       break;
    }

    if ((escolha2 ==5 && val1_a2 < val2_a2) || (escolha2 != 5 && val1_a2 > val2_a2)) {
      printf("Vencedor do Atributo 2: Carta 1\n");
    } else if (val1_a2 == val2_a2) {
      printf("Empate no Atributo 2\n");
    } else {
      printf("Vencedor do Atributo 2: Carta 2\n");
    }

// ===== Resultado final da soma =====
    printf("\nSoma dos Atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);
    
    if (soma1 > soma2) {
      printf("Vencedor da Rodada: Carta 1\n");
    } else if (soma1 < soma2) {
      printf("Vencedor da Rodada: Carta 2\n");
    } else {
      printf("Empate na Rodada!\n");
    }

    return 0;
}
