#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //Variaveis
        char estado1, estado2;
        char codigoCarta1[10], codigoCarta2[10], nomeCidade1[50], nomeCidade2[50];
        int populacao1, populacao2, turisticos1, turisticos2;
        float area1, area2, pib1, pib2;
    //Variaveis

    //Criando

        //Carta1
        printf("---Carta 1---\n");

        printf("Digite o Estado da Carta:\n");
        scanf(" %c", &estado1);

        printf("Digite o Codigo da Carta:\n");
        scanf("%s", &codigoCarta1);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", &nomeCidade1);

        printf("Digite a Populacao:\n");
        scanf("%d", &populacao1);

        printf("Digite a Area da Carta (em km2):\n");
        scanf("%f", &area1);

        printf("Digite o PIB da Carta:\n");
        scanf("%f", &pib1);

        printf("Digite o Numero de Pontos Turisticos:\n");
        scanf("%d", &turisticos1);
        //Carta1

        //Carta2
        printf("---Carta 2---\n");

        printf("Digite o Estado da Carta:\n");
        scanf(" %c", &estado2);

        printf("Digite o Codigo da Carta:\n");
        scanf("%s", &codigoCarta2);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", &nomeCidade2);

        printf("Digite a Populacao:\n");
        scanf("%d", &populacao2);

        printf("Digite a Area da Carta (em km2):\n");
        scanf("%f", &area2);

        printf("Digite o PIB da Carta:\n");
        scanf("%f", &pib2);

        printf("Digite o Numero de Pontos Turisticos:\n");
        scanf("%d", &turisticos2);
        //Carta2

    //Criando

    //Exibindo

        //Carta1
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigoCarta1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Numero de Pontos Turisticos: %d\n", turisticos1);
        //Carta1
        //Carta1
        printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigoCarta2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Numero de Pontos Turisticos: %d\n", turisticos2);
        //Carta1

    //Exibindo

    return 0;
}
