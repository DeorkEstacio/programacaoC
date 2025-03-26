#include <stdio.h>

//Desafio Super Trunfo - Países
//Nível Novato
//Aluno: Daniel Deork

int main(){

    //Declaração das variáveis das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float percapita1, percapita2;

    //Imprime as solicitações de entrada e de armazenamento de dados
    printf("Dados da Carta1: \n");
    printf("Digite a letra do Estado: \n", estado1);
    scanf(" %c", &estado1);

    printf("Digite o código da Cidade: \n", cidade1);
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n", cidade1);
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da Cidade: \n", populacao1);
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade: \n", area1);
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n", pib1);
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Cidade: \n", turisticos1);
    scanf("%d", &turisticos1);

    densidade1 = populacao1 / area1;


    //Solicitações de entrada e armazenamento de dados da Carta2
    printf("\nDados da Carta2: \n");
    printf("Digite a letra do Estado: \n", estado2);
    scanf(" %c", &estado2);

    printf("Digite o código da Cidade: \n", codigo2);
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade: \n", cidade2);
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da Cidade: \n", populacao2);
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade: \n", area2);
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n", pib2);
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Cidade: \n", turisticos2);
    scanf("%d", &turisticos2);


    //Imprime os dados referentes à Carta1
    printf("\nCarta1: \n");

    printf("Estado: %c \n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Cidade: %s\n", cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km2\n", area1);

    printf("PIB: R$ %.2f\n", pib1);

    printf("Número de pontos turísticos: %d\n", turisticos1);

    //Imprime os dados referentes à Carta2
    printf("\nCarta2: \n");

    printf("Estado: %c \n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km2\n", area2);

    printf("PIB: R$ %.2f\n", pib2);

    printf("Número de pontos turísticos: %d\n", turisticos2);

    return 0; 



  











}