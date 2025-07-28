#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joaquim Teixeira

int main() {

     printf("Desafio do Super Trunfo!\n");

    // Atributo da carta A01: São Paulo

    char estado1;
    char codigo1[10];
    char cidade1[50];
    int população1;     // Em milhões de habitantes
    float area1;          // Em Km quadrados
    float pib1;           // Em bilhões de Reais
    int pontos1;

     // Atributos da carta B02: Rio de Janeiro
     
     char estado2 = 'B';
     char codigo2[] = "B02";
     char cidade2[] = "Rio de Janeiro";
     int população2 = 674.800;     // Em milhões de habitantes
     float area2 = 1200.25;        // Em Km quadrados
     float pib2 = 300.50;          // Em bilões de Reais
     int pontos2 = 30;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
     printf("Sua Carta: \n");

     printf("Digite o Estado (Ex: A): ", estado1);
     scanf("%c", &estado1);

     printf("Digite o Codigo: (Ex: A01)", codigo1);
     scanf("%s", &codigo1);

     printf("Digite o Nome da Cidade: \n", cidade1);
     scanf("%s", &cidade1);
     
     printf("Digite a População: \n", população1);
     scanf("%d", &população1);

     printf("Digite a Area: (em km²): \n", area1);
     scanf("%f", &area1);

     printf("Digite o PIB (em bilhões): \n", pib1);
     scanf("%f", &pib1);

     printf("Digite o numero de Pontos Turisticos: \n", pontos1);
     scanf("%d", &pontos1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("\n--- Dados da Carta ---\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("População: %d\n", população1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: R$ %.2f bilhões\n", pib1);
     printf("Pontos Turísticos: %d\n", pontos1);
     

    return 0;
}
