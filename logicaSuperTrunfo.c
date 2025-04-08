#include <stdio.h>

int main() {
    // Mensagem de boas-vindas
    printf("--- Bem-vindo ao jogo do Super Trunfo! ---\n");

    // Variáveis para armazenar os dados da primeira carta
    char pais1[30], estado1[3], codigo1[10], cidade1[50];
    float populacao1, area1, pib1, densidadePopulacional1, pibPerCapita1, densidadeInvertida1, superPoder1;
    int pontosTurismo1, primeiroAtributo, resultado1;
 
    // Variáveis para armazenar os dados da segunda carta
    char pais2[30], estado2[3], codigo2[10], cidade2[50];
    float populacao2, area2, pib2, densidadePopulacional2, pibPerCapita2, densidadeInvertida2, superPoder2;
    int pontosTurismo2, segundoAtributo, resultado2;

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

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valorAtributo1_Carta1, valorAtributo1_Carta2;
    float valorAtributo2_Carta1, valorAtributo2_Carta2;
    float somaCarta1 = 0, somaCarta2 = 0;

    // Menu para o primeiro atributo
    printf("\n--- MENU DE ATRIBUTOS ---\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &primeiroAtributo);

    // Captura e comparação do PRIMEIRO atributo
    switch(primeiroAtributo) {
        case 1:
            printf("Você escolheu População.\n");
            valorAtributo1_Carta1 = populacao1;
            valorAtributo1_Carta2 = populacao2;
            resultado1 = populacao1 > populacao2 ? 1 : (populacao1 == populacao2 ? -1 : 0);
            break;
        case 2:
            printf("Você escolheu Área.\n");
            valorAtributo1_Carta1 = area1;
            valorAtributo1_Carta2 = area2;
            resultado1 = area1 > area2 ? 1 : (area1 == area2 ? -1 : 0);
            break;
        case 3:
            printf("Você escolheu PIB.\n");
            valorAtributo1_Carta1 = pib1;
            valorAtributo1_Carta2 = pib2;
            resultado1 = pib1 > pib2 ? 1 : (pib1 == pib2 ? -1 : 0);
            break;
        case 4:
            printf("Você escolheu Pontos Turísticos.\n");
            valorAtributo1_Carta1 = pontosTurismo1;
            valorAtributo1_Carta2 = pontosTurismo2;
            resultado1 = pontosTurismo1 > pontosTurismo2 ? 1 : (pontosTurismo1 == pontosTurismo2 ? -1 : 0);
            break;
        case 5:
            printf("Você escolheu Densidade Populacional.\n");
            valorAtributo1_Carta1 = densidadePopulacional1;
            valorAtributo1_Carta2 = densidadePopulacional2;
            // Regra invertida: menor valor vence
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 
                         (densidadePopulacional1 == densidadePopulacional2 ? -1 : 0);
            break;
        case 6:
            printf("Você escolheu PIB per Capita.\n");
            valorAtributo1_Carta1 = pibPerCapita1;
            valorAtributo1_Carta2 = pibPerCapita2;
            resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : (pibPerCapita1 == pibPerCapita2 ? -1 : 0);
            break;
        case 7:
            printf("Você escolheu Super Poder.\n");
            valorAtributo1_Carta1 = superPoder1;
            valorAtributo1_Carta2 = superPoder2;
            resultado1 = superPoder1 > superPoder2 ? 1 : (superPoder1 == superPoder2 ? -1 : 0);
            break;
        default:
            printf("Atributo inválido! Encerrando...\n");
            return 1; // Termina o programa se for inválido
    }

    // Menu para o segundo atributo 
    printf("\n--- MENU DE ATRIBUTOS ---\n");
    printf("Escolha o segundo atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &segundoAtributo);

    // Se o segundo atributo for IGUAL ao primeiro, encerra o programa
    if (segundoAtributo == primeiroAtributo) {
        printf("\n Você escolheu o mesmo atributo duas vezes. Encerrando...\n");
        return 0; // Termina o programa aqui
    }

    // Captura e comparação do SEGUNDO atributo 
    switch(segundoAtributo) {
        case 1:
            printf("Você escolheu População.\n");
            valorAtributo2_Carta1 = populacao1;
            valorAtributo2_Carta2 = populacao2;
            resultado2 = populacao1 > populacao2 ? 1 : (populacao1 == populacao2 ? -1 : 0);
        break;
        case 2:
            printf("Você escolheu Área.\n");
            valorAtributo2_Carta1 = area1;
            valorAtributo2_Carta2 = area2;
            resultado2 = area1 > area2 ? 1 : (area1 == area2 ? -1 : 0);
            break;
        case 3:
            printf("Você escolheu PIB.\n");
            valorAtributo2_Carta1 = pib1;
            valorAtributo2_Carta2 = pib2;
            resultado2 = pib1 > pib2 ? 1 : (pib1 == pib2 ? -1 : 0);
            break;
        case 4:
            printf("Você escolheu Pontos Turísticos.\n");
            valorAtributo2_Carta1 = pontosTurismo1;
            valorAtributo2_Carta2 = pontosTurismo2;
            resultado2 = pontosTurismo1 > pontosTurismo2 ? 1 : (pontosTurismo1 == pontosTurismo2 ? -1 : 0);
            break;
        case 5:
            printf("Você escolheu Densidade Populacional.\n");
            valorAtributo2_Carta1 = densidadePopulacional1;
            valorAtributo2_Carta2 = densidadePopulacional2;
            // Regra invertida: menor valor vence
            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 
                         (densidadePopulacional1 == densidadePopulacional2 ? -1 : 0);
            break;
        case 6:
            printf("Você escolheu PIB per Capita.\n");
            valorAtributo2_Carta1 = pibPerCapita1;
            valorAtributo2_Carta2 = pibPerCapita2;
            resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : (pibPerCapita1 == pibPerCapita2 ? -1 : 0);
            break;
        case 7:
            printf("Você escolheu Super Poder.\n");
            valorAtributo2_Carta1 = superPoder1;
            valorAtributo2_Carta2 = superPoder2;
            resultado2 = superPoder1 > superPoder2 ? 1 : (superPoder1 == superPoder2 ? -1 : 0);
            break;
        default:
            printf("Atributo inválido! Encerrando...\n");
            return 1; // Termina o programa se for inválido
        
    }

    // --- CÁLCULO DA SOMA DOS ATRIBUTOS ---
    somaCarta1 = valorAtributo1_Carta1 + valorAtributo2_Carta1;
    somaCarta2 = valorAtributo1_Carta2 + valorAtributo2_Carta2;

    // --- EXIBIÇÃO DO RESULTADO FINAL ---
    printf("\n--- RESULTADO FINAL ---\n");
    printf("Soma da Carta 1 (%s): %.2f\n", pais1, somaCarta1);
    printf("Soma da Carta 2 (%s): %.2f\n", pais2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Vencedor: Carta 1 (%s)\n", pais1);
    } 
    else if (somaCarta2 > somaCarta1) {
        printf(" Vencedor: Carta 2 (%s)\n", pais2);
    } 
    else {
        printf("Empate! As cartas têm a mesma soma.\n");
        // Critério de desempate pelo Super Poder
        if (superPoder1 > superPoder2) {
            printf("Desempate: Carta 1 (%s) vence pelo Super Poder!\n", pais1);
        } 
        else if (superPoder2 > superPoder1) {
            printf("Desempate: Carta 2 (%s) vence pelo Super Poder!\n", pais2);
        } 
        else {
            printf("Empate total! Até o Super Poder é igual.\n");
        }
    }

    return 0;
}