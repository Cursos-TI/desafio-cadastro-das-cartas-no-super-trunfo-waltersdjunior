#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Parametros da Primeira Carta

    char c1Estado;

    char c1Codigo[3];

    char c1Cidade[20];
    int c1Populacao;
    float c1Area;
    float c1PIB;
    int c1NumeroDePontosTuristicos;

    //Parametros da Segunda Carta

    char c2Estado;
    char c2Codigo[3];

    char c2Cidade[20];
    int c2Populacao;
    float c2Area;
    float c2PIB;
    int c2NumeroDePontosTuristicos;


    printf("Escolha Os Parametros Da Primeira Carta!\n");

    printf("Estado: ");
    scanf("%c", &c1Estado);

    printf("Codigo: ");
    scanf("%s", &c1Codigo);

    printf("Cidade: ");
    scanf("%s", &c1Cidade);

    printf("Populacao: ");
    scanf("%i", &c1Populacao);
    
    printf("Area: ");
    scanf("%f", &c1Area);

    printf("PIB: ");
    scanf("%f", &c1PIB);

    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &c1NumeroDePontosTuristicos);   

    printf("\nEscolha Os Parametros Da Segunda Carta!\n");

    printf("Estado: ");
    scanf("%c", &c2Estado);

    printf("Codigo: ");
    scanf("%s", &c2Codigo);

    printf("Cidade: ");
    scanf("%s", &c2Cidade);

    printf("Populacao: ");
    scanf("%i", &c2Populacao);
    
    printf("Area: ");
    scanf("%f", &c2Area);

    printf("PIB: ");
    scanf("%f", &c2PIB);

    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &c2NumeroDePontosTuristicos);

    // Mostrar Todas as Cartas
    printf("\nPrimeira Carta\n");
    printf("Estado: %c\n", c1Estado);
    printf("Codigo: %s\n", c1Codigo);
    printf("Cidade: %s\n", c1Cidade);
    printf("Populacao: %i\n", c1Populacao);
    printf("Area %.2f\n", c1Area);
    printf("PIB %.2f\n", c1PIB);
    printf("Numero de Pontos Turisticos %i\n", c1NumeroDePontosTuristicos);

    printf("\nSegunda Carta\n");
    printf("Estado: %c\n", c2Estado);
    printf("Codigo: %s\n", c2Codigo);
    printf("Cidade: %s\n", c2Cidade);
    printf("Populacao: %i\n", c2Populacao);
    printf("Area %.2f\n", c2Area);
    printf("PIB %.2f\n", c2PIB);
    printf("Numero de Pontos Turisticos %i\n", c2NumeroDePontosTuristicos);


    return 0;
}
