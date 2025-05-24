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
    double densidadevencedora;
    double superpoder;

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
    double superpoder1;

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
    double superpoder2;

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

    printf("\n>>> CARTA2 <<<\n");
    printf("COD: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2lf\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);

    printf("\n");

    return 0;
}
