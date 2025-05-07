#include <stdio.h>

// Função principal para exibir e coletar dados do usuário
int main() {
    // Declaração do tipo e nome das variáveis
    char estado1, estado2;
    char codigo1[4],codigo2[4];
    char cidade1[50],cidade2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2; 
    int npontoturistico1,npontoturistico2;

    // Coletando dos dados da Carta 1
    printf("Carta 1 - Digite uma letra de 'A' a 'H' do estado: \n");
    scanf(" %c", &estado1);

    printf("Carta 1 - Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Carta 1 - Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Carta 1 - Digite o número de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Carta 1 - Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Carta 1 - Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Carta 1 - Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &npontoturistico1);

    printf("\n");

    // Coletando dados da Carta 2
    printf("Carta 2 - Digite uma letra de 'A' a 'H' do estado: \n");
    scanf(" %c", &estado2);

    printf("Carta 2 - Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Carta 2 - Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Carta 2 - Digite o número de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Carta 2 - Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Carta 2 - Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Carta 2 - Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &npontoturistico2);

    printf("\n");

    // Exibição dos dados
    printf("\n=========== CARTAS ===========\n\n");

    // Cidade 1
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", npontoturistico1);

    // Cidade 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", npontoturistico2);

    return 0;
}
