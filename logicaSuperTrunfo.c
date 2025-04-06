#include <stdio.h>

int main() {
    // Mensagem de boas-vindas
    printf("--- Bem-vindo ao jogo do Super Trunfo! ---\n");

    // Variáveis para armazenar os dados da primeira carta
    char pais1[30], estado1[3], codigo1[10], cidade1[50];
    float populacao1, area1, pib1, densidadePopulacional1, pibPerCapita1, densidadeInvertida1, superPoder1;
    int pontosTurismo1;

    // Variáveis para armazenar os dados da segunda carta
    char pais2[30], estado2[3], codigo2[10], cidade2[50];
    float populacao2, area2, pib2, densidadePopulacional2, pibPerCapita2, densidadeInvertida2, superPoder2;
    int pontosTurismo2;

    // Coletando os dados da primeira carta
    printf("--- DADOS DA PRIMEIRA CARTA ---\n");
    printf("Informe o país:\n");
    scanf(" %[^\n]", pais1);
    printf("Informe a letra de um estado de A a H:\n");
    scanf(" %s", estado1);
    printf("Informe o código:\n");
    scanf(" %s", codigo1);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);
    printf("Informe a população:\n");
    scanf("%f", &populacao1);
    printf("Informe a área em km²:\n");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTurismo1);

    // Calcula os valores extras com base nos dados informados
    densidadePopulacional1 = populacao1 / area1; // Pessoas por km²
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB por pessoa
    densidadeInvertida1 = 1 / densidadePopulacional1; // Valor menor de densidade é melhor
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTurismo1 + pibPerCapita1 + densidadeInvertida1;

    // Coletando os dados da segunda carta
    printf("--- DADOS DA SEGUNDA CARTA ---\n");
    printf("Informe o país:\n");
    scanf(" %[^\n]", pais2);
    printf("Informe a letra de um estado de A a H:\n");
    scanf(" %s", estado2);
    printf("Informe o código:\n");
    scanf(" %s", codigo2);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);
    printf("Informe a população:\n");
    scanf("%f", &populacao2);
    printf("Informe a área em km²:\n");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTurismo2);

    // Calcula os valores extras com base nos dados informados
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    densidadeInvertida2 = 1 / densidadePopulacional2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTurismo2 + pibPerCapita2 + densidadeInvertida2;

    // Mostra os dados das duas cartas antes da comparação
    printf("\n--- CARTA 1 ---\n");
    printf("País: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTurismo1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- CARTA 2 ---\n");
    printf("País: %s\n", pais2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTurismo2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Menu para o usuário escolher qual atributo deseja comparar
    int opcao;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &opcao);

    // Compara os valores escolhidos
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    switch(opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu na População!\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 venceu na População!\n");
            } else {
                printf("Empate na População!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("Carta 1 venceu na Área!\n");
            } else if (area2 > area1) {
                printf("Carta 2 venceu na Área!\n");
            } else {
                printf("Empate na Área!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("Carta 1 venceu no PIB!\n");
            } else if (pib2 > pib1) {
                printf("Carta 2 venceu no PIB!\n");
            } else {
                printf("Empate no PIB!\n");
            }
            break;
        case 4:
            if (pontosTurismo1 > pontosTurismo2) {
                printf("Carta 1 venceu nos Pontos Turísticos!\n");
            } else if (pontosTurismo2 > pontosTurismo1) {
                printf("Carta 2 venceu nos Pontos Turísticos!\n");
            } else {
                printf("Empate nos Pontos Turísticos!\n");
            }
            break;
        case 5:
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Carta 1 venceu na Densidade Populacional (menor é melhor)!\n");
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Carta 2 venceu na Densidade Populacional (menor é melhor)!\n");
            } else {
                printf("Empate na Densidade Populacional!\n");
            }
            break;
        case 6:
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Carta 1 venceu no PIB per Capita!\n");
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Carta 2 venceu no PIB per Capita!\n");
            } else {
                printf("Empate no PIB per Capita!\n");
            }
            break;
        case 7:
            if (superPoder1 > superPoder2) {
                printf("Carta 1 venceu no Super Poder!\n");
            } else if (superPoder2 > superPoder1) {
                printf("Carta 2 venceu no Super Poder!\n");
            } else {
                printf("Empate no Super Poder!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}