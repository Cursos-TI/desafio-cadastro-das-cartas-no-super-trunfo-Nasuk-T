#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gleidson

int main() {
    
    printf("Desafio Super Trufo Países: \n");
    
    char codigoestado[3];
    int codigocidade;
    float populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("País - Brasil: \n");

    printf("Digite Codigo do Estado: \n");
    scanf(" %2s", codigoestado);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%d", &codigocidade);

    printf("Digite a População: \n");
    scanf("%f", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Codigo do Estado: %s\n", codigoestado);

    printf("Codigo da Cidade: %d\n", codigocidade);

    printf("População: %f\n", populacao);

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
