#include <stdio.h>

// Camila Lins, curso de ADS, Estácio, 2025.1.

int main(){
    printf("\n✧✦☆★ Bem vindo ao jogo de Super Trunfo em C! ★☆✦✧\nPreencha os dados a seguir para criar as cartas.\n\n");

    // Primeira carta
    char estado[3], code[6], nome[50];
    int populacao, pontos_turisticos;
    float area, pib, pib_per_capita, densidade_populacional, super_poder;

    printf("✧ Informações sobre a CARTA 1!\n");
    printf("Digite o Estado: ");
    scanf("%s", estado);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite o código da Cidade: ");
    scanf("%s", code);

    printf("Digite a área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite sua população: ");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float)populacao / area;
    pib_per_capita = pib / populacao;
    super_poder = populacao + area + pib + pontos_turisticos + pib_per_capita + (1/densidade_populacional);

    // Segunda carta
    char estado2[3], code2[6], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, pib_per_capita2, densidade_populacional2, super_poder2;

    printf("\n✧ Informações sobre a CARTA 2!\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite o código da Cidade: ");
    scanf("%s", code2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite sua população: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);

    // Menu para escolha dos dois atributos

    int atributo1, atributo2;

    printf("\n✧ Escolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (o menor vence)\n");
    printf("6 - PIB per Capita\n\n");

    // Primeiro atributo
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &atributo1);

    do {
        printf("Digite o número do segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);

        if(atributo2 == atributo1){
            printf("Você escolheu o mesmo atributo duas vezes... Tente novamente.\n");
        }

    } while (atributo2 == atributo1);

    // Comparação dos atributos
    float valor_carta1_atributo1 = 0, valor_carta2_atributo1 = 0;
    float valor_carta1_atributo2 = 0, valor_carta2_atributo2 = 0;
    float soma_carta1, soma_carta2;

    char nome_atributo1[30], nome_atributo2[30];

    // Selecionar o valor conforme o atributo
    // Primeiro atributo
    switch(atributo1){
        case 1:
            valor_carta1_atributo1 = populacao;
            valor_carta2_atributo1 = populacao2;
            sprintf(nome_atributo1, "População");
            break;
        case 2:
            valor_carta1_atributo1 = area;
            valor_carta2_atributo1 = area2;
            sprintf(nome_atributo1, "Área");
            break;
        case 3:
            valor_carta1_atributo1 = pib;
            valor_carta2_atributo1 = pib2;
            sprintf(nome_atributo1, "PIB");
            break;
        case 4:
            valor_carta1_atributo1 = pontos_turisticos;
            valor_carta2_atributo1 = pontos_turisticos2;
            sprintf(nome_atributo1, "Pontos Turísticos");
            break;
        case 5:
            valor_carta1_atributo1 = densidade_populacional;
            valor_carta2_atributo1 = densidade_populacional2;
            sprintf(nome_atributo1, "Densidade Populacional");
            break;
        case 6:
            valor_carta1_atributo1 = pib_per_capita;
            valor_carta2_atributo1 = pib_per_capita2;
            sprintf(nome_atributo1, "PIB per Capita");
            break;
    }

    // Segundo atributo
    switch(atributo2){
        case 1:
            valor_carta1_atributo2 = populacao;
            valor_carta2_atributo2 = populacao2;
            sprintf(nome_atributo2, "População");
            break;
        case 2:
            valor_carta1_atributo2 = area;
            valor_carta2_atributo2 = area2;
            sprintf(nome_atributo2, "Área");
            break;
        case 3:
            valor_carta1_atributo2 = pib;
            valor_carta2_atributo2 = pib2;
            sprintf(nome_atributo2, "PIB");
            break;
        case 4:
            valor_carta1_atributo2 = pontos_turisticos;
            valor_carta2_atributo2 = pontos_turisticos2;
            sprintf(nome_atributo2, "Pontos Turísticos");
            break;
        case 5:
            valor_carta1_atributo2 = densidade_populacional;
            valor_carta2_atributo2 = densidade_populacional2;
            sprintf(nome_atributo2, "Densidade Populacional");
            break;
        case 6:
            valor_carta1_atributo2 = pib_per_capita;
            valor_carta2_atributo2 = pib_per_capita2;
            sprintf(nome_atributo2, "PIB per Capita");
            break;
    }

    // Imprimindo os resultados da comparação
    printf("\n☆★ Comparação das cartas ★☆\n");
    printf("CARTA 1: %s\n", nome);
    printf("CARTA 2: %s\n\n", nome2);

    // Primeiro atributo
    printf("Comparando atributo %s\n", nome_atributo1);
    printf("%s: %.2f | %s: %.2f\n", nome, valor_carta1_atributo1, nome2, valor_carta2_atributo1);

    int vencedor_atributo1;
    if(atributo1 == 5){ // Densidade menor vence
        vencedor_atributo1 = valor_carta1_atributo1 < valor_carta2_atributo1 ? 1 : 2;
    } else {
        vencedor_atributo1 = valor_carta1_atributo1 > valor_carta2_atributo1 ? 1 : 2;
    }
    printf("★ Vencedor do atributo %s: Carta %d\n\n", nome_atributo1, vencedor_atributo1);

    // Segundo atributo
    printf("Comparando atributo %s\n", nome_atributo2);
    printf("%s: %.2f | %s: %.2f\n", nome, valor_carta1_atributo2, nome2, valor_carta2_atributo2);

    int vencedor_atributo2;
    if(atributo2 == 5){ // Densidade menor vence
        vencedor_atributo2 = valor_carta1_atributo2 < valor_carta2_atributo2 ? 1 : 2;
    } else {
        vencedor_atributo2 = valor_carta1_atributo2 > valor_carta2_atributo2 ? 1 : 2;
    }
    printf("★ Vencedor do atributo %s: Carta %d\n\n", nome_atributo2, vencedor_atributo2);

    // Soma total
    soma_carta1 = valor_carta1_atributo1 + valor_carta1_atributo2;
    soma_carta2 = valor_carta2_atributo1 + valor_carta2_atributo2;

    printf("Soma total dos atributos comparados:\n");
    printf("%s: %.2f\n", nome, soma_carta1);
    printf("%s: %.2f\n\n", nome2, soma_carta2);

    // Resultado final
    if(soma_carta1 > soma_carta2){
        printf("★ Vencedora ★\n★ CARTA 1 - %s ★\n\n", nome);
    } else if(soma_carta2 > soma_carta1){
        printf("★ Vencedora ★\n★ CARTA 2 - %s ★\n\n", nome2);
    } else {
        printf("★ Resultado: Empate! ★\n\n");
    }

    return 0;
}
