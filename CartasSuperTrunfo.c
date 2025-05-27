#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

// Definição das variáveis gerais:
    double superpoder1;
    double superpoder2;
    double soma1;
    double soma2;

//carta 01
    char codigocarta1[3];
    char estado1[60];
    char cidade1[60];
    int populacao1;
    int numerodepontosturisticos1;
    float area1;
    float densidadepopulacional1;
    double PIB1;
    double pibpercapita1;

    //carta 02
    char codigocarta2[3];
    char estado2[60];
    char cidade2[60];
    int populacao2;
    int numerodepontosturisticos2;
    float area2;
    float densidadepopulacional2;
    double PIB2;
    double pibpercapita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Cadastro das informaçoes, essa função solicita ao usuário para inserir as informações que devem constar nas cartas;

// Carta 1;
    printf("**** BEM VINDO AO CADASTRO DO SUPERTRUNFO!! ****\n");
    printf("\n");

    printf("Digite o COD da carta 1: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado1);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

// Calculos - densidade populacional e PIB per Capita CARTA 1;
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (double) PIB1 / populacao1;
    soma1 = (double) populacao1 + area1 + PIB1 + numerodepontosturisticos1 + pibpercapita1;

    if (densidadepopulacional1 < densidadepopulacional2)
    {
        superpoder1 = (double) soma1 + densidadepopulacional1;
    } else {
        superpoder1 = (double) soma1;
    }



// Carta 2;
    printf("Digite o COD da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado2);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

// Calculos - densidade populacional, PIB per Capita e super poder CARTA 2;
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (double) PIB2 / populacao2;
    soma2 = (double) populacao2 + area2 + PIB2 + numerodepontosturisticos2 + pibpercapita2;

    if (densidadepopulacional2 < densidadepopulacional1)
    {
        superpoder2 = (double) soma2 + densidadepopulacional2;
    } else {
        superpoder2 = (double) soma2;
    }


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 // Impressão dos valores CARTA 1 e 2, ordenados de acordo com a organização solicitada;

    printf("\n>>> CARTA 1 <<<\n");
    printf("COD: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.2lf\n", PIB1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: R$ %.2lf\n", pibpercapita1);

    printf("\n>>> CARTA2 <<<\n");
    printf("COD: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2lf\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2lf\n", pibpercapita2);

    printf("\n");

//Comparação da carta vencedora;
    printf("Comparação das CARTAS\n");

    printf("\nPOPULAÇÃO: ");
     if (populacao1 > populacao2)
    {
        printf("A CARTA 1 É A VENCEDORA! (1)\n");
    } else if (populacao1 < populacao2)
    {
        printf("A CARTA 2 É A VENCEDORA! (0)\n");
    } else {
        printf("EMPATE!!\n");
    }

    printf("ÁREA: ");
    if (area1 > area2)
    {
        printf("A CARTA 1 É A VENCEDORA! (1)\n");
    } else if (area1 < area2)
    {
        printf("A CARTA 2 É A VENCEDORA! (0)\n");
    } else {
        printf("EMPATE!!\n");

}

    printf("PIB: ");
    if (PIB1 > PIB2)
    {
        printf("A CARTA 1 É A VENCEDORA! (1)\n");
    } else if (PIB1 < PIB2)
    {
        printf("A CARTA 2 É A VENCEDORA! (0)\n");
    } else {
        printf("EMPATE!!\n");
}

    printf("PONTOS TURÍSTICOS: ");
    if (numerodepontosturisticos1 > numerodepontosturisticos2)
    {
        printf("A CARTA 1 É A VENCEDORA! (1)\n");
    } else if (numerodepontosturisticos1 < numerodepontosturisticos2)
    {
        printf("A CARTA 2 É A VENCEDORA! (0)\n");
    } else {
        printf("EMPATE!!\n");
}

    printf("DENSIDADE POPULACIONAL: ");
    if (densidadepopulacional1 < densidadepopulacional2)
    {
        printf("A CARTA 1 É A VENCEDORA! (1)\n");
    } else if (densidadepopulacional1 > densidadepopulacional2)
    {
        printf("A CARTA 2 É A VENCEDORA! (0)\n");
    } else {
        printf("EMPATE!!\n");
}

printf("PIB PER CAPTA: ");
    if (pibpercapita1 > pibpercapita2)
    {
        printf("A CARTA 1 É A VENCEDORA! (1)\n");
    } else if (pibpercapita1 < pibpercapita2)
    {
        printf("A CARTA 2 É A VENCEDORA! (0)\n");
    } else {
        printf("EMPATE!!\n");
}        

printf("SUPER PODER: ");
    if (superpoder1 > superpoder2)
    {
        printf("A CARTA 1 É A VENCEDORA! (1)\n");
    } else if (superpoder1 < superpoder2)
    {
        printf("A CARTA 2 É A VENCEDORA! (0)\n");
    } else {
        printf("EMPATE!!\n");

    printf("\n");
}   

    return 0;
}
