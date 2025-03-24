#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gleidson

int main() {
    
    printf("Desafio Super Trufo Países: \n");
    
    char estado[3];
    char codigodacarta[10];
    char nomedacidade[10];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("País - Brasil: \n");

    printf("Carta 1: \n");

    printf("Digite o Estado: \n");
    scanf(" %2s", estado);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %s\n", estado);

    printf("Codigo da Carta: %s\n", codigodacarta);

    printf("Cidade: %s\n", nomedacidade);

    printf("População: %d\n", populacao);

    printf("Área: %f\n", area);

    printf("PIB: %f\n", PIB);

    printf("Pontos Turísticos: %d\n", pontosturisticos);


    printf("País - Brasil: \n");

    printf("Carta 2: \n");

    printf("Digite o Estado: \n");
    scanf(" %2s", estado);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %s\n", estado);

    printf("Codigo da Carta: %s\n", codigodacarta);

    printf("Cidade: %s\n", nomedacidade);

    printf("População: %d\n", populacao);

    printf("Área: %f\n", area);

    printf("PIB: %f\n", PIB);

    printf("Pontos Turísticos: %d\n", pontosturisticos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
