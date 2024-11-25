#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas

int main(){
    //Variáveis para os atributos da cidade!
    char estado[20], codigo_da_carta[20], nome_cidade[20];
    int populacao, pontos_turisticos;
    float area, pib;

    //Cadastro das informações!
    printf("Qual é o estado em que a ciadade se encontra?\n");
    scanf("%s", &estado);

    printf("Qual é o código da carta da cidade?\n");
    scanf("%s", &codigo_da_carta);

    printf("Qual é o nome da cidade?\n");
    scanf("%s", &nome_cidade);
    //**** Mudaria para: Qual o tamanho da popução de %s?\n
    printf("Qual é o número da população de %s?\n", nome_cidade);
    scanf("%d", &populacao);
    
    //******** remova o .2 da entrada, use somente esse modificador no printf, aqui basta o %f
    printf("Qual é a área em km² de %s?\n", nome_cidade);
    scanf("%.2f", &area);

    printf("Qual é o PIB de %s?\n", nome_cidade);
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem em %s?\n", nome_cidade);
    scanf("%d", &pontos_turisticos);

    //Exibição dos dados registrados!
    printf("Informações sobre %s:\n", nome_cidade);
    printf("Estado: %s\nCódigo da Cidade: %s\n", estado, codigo_da_carta);
    printf("Nome da Cidade: %s\nNúmero da população: %d\n", nome_cidade, populacao);
    printf("Área em km²: %f\nPIB: R$%.2f\nNúmero de pontos turísticos: %d", area, pib, pontos_turisticos);

    return 0;

    }
