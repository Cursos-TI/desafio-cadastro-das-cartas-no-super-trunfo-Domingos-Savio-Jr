#include <stdio.h>

int main(){

    printf("Desafio Super trunfo Cidades");
    char estado1[5], codCarta1[5], estado2[5], codCarta2[5];
    char cidade1[20], cidade2[20];
    int populacao1, ptTur1, populacao2, ptTur2;
    float area1, PIB1, area2, PIB2;

    printf("Digite as informações da primeira carta \n");
    printf("Digite uma letra de A a H representando o estado: \n"); //Solicita a letra do estado (de A  H)
    scanf("%s", &estado1);

    printf("Digite o a letra do estado seguido de um nímeo de 01 a 04 (ex: A01, B03): \n"); // Solicita do código da carta
    scanf("%s", &codCarta1);

    printf("Digite o nome da cidade 1:\n"); //Solicita o nome da cidade
    scanf("%s", cidade1);

    printf("Digite a população da cidade 1: \n"); //Solicita a população da cidade
    scanf("%d", &populacao1);

    printf("Digite a área em km² da cidade 1: \n"); //Solicita a área da cidade
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: \n"); // Solicita o PIB da cidade
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da cidade 1: \n"); //Quantidade de pontos turísticos 
    scanf("%d", &ptTur1);

    printf("#################### Carta 1 ####################\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", ptTur1);
    printf("#################################################\n\n");

    printf("Digite as informações da segunda carta \n");
    printf("Digite uma letra de A a H representando o estado: \n"); //Solicita a letra do estado (de A  H)
    scanf("%s", &estado2);

    printf("Digite o a letra do estado seguido de um nímeo de 01 a 04 (ex: A01, B03): \n"); // Solicita do código da carta
    scanf("%s", &codCarta2);

    printf("Digite o nome da cidade 2:\n"); //Solicita o nome da cidade
    scanf("%s", cidade2);

    printf("Digite a população da cidade 2: \n"); //Solicita a população da cidade
    scanf("%d", &populacao2);

    printf("Digite a área em km² da cidade 2: \n"); //Solicita a área da cidade
    scanf("%f", &area2);

    printf("Digite o PIB dea cidade 2: \n"); // Solicita o PIB da cidade
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: \n"); //Quantidade de pontos turísticos 
    scanf("%d", &ptTur2);

    printf("#################### Carta 2 ####################\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", ptTur2);
    printf("#################################################\n\n");


    return 0;

}