#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joaquim Teixeira

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

     printf("Desafio do Super Trunfo!\n");

    // Atributo da carta A01: São Paulo

     char estado1;
     char codigo1[20];
     char cidade1[50];
     int população1;         // Em milhões de habitantes
     float area1;           // Em Km quadrados
     float pib1;           // Em bilhões de Reais
     int pontos1;
     float densidade1;
     float percapita1; 


     // Atributos da carta B02: Rio de Janeiro
     
     char estado2;
     char codigo2[20];
     char cidade2[50];
     int população2;         // Em milhões de habitantes
     float area2;           // Em Km quadrados
     float pib2;           // Em bilhões de Reais
     int pontos2;
     float densidade2;
     float percapita2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

     // Cadastro da carta A01: São Paulo 
        
     printf("Carta 1: \n");

     printf("Digite o Estado: ");
     scanf(" %c", &estado1);

     printf("Digite o Codigo: ");
     scanf("%s", codigo1);

     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", cidade1);
     
     printf("Digite a População: ");
     scanf("%d", &população1);

     printf("Digite a Area: ");
     scanf(" %f", &area1);

     printf("Digite o pib: ");
     scanf(" %f", &pib1);

     printf("Digite o numero de Pontos Turisticos: ");
     scanf("%d", &pontos1);

    // Calculo da Densidade e Renda Per Capita

     densidade1 = (float)população1 / area1;
     percapita1 = (pib1 * 1000.0f) / população1; 
     
     // Cadastro da carta B02: Rio de Janeiro


    printf("Carta 2: \n");

     printf("Digite o Estado: ");
     scanf(" %c", &estado2);

     printf("Digite o Codigo: ");
     scanf("%s", codigo2);

     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", cidade2);
     
     printf("Digite a População: ");
     scanf("%d", &população2);

     printf("Digite a Area: ");
     scanf(" %f", &area2);

     printf("Digite o pib: ");
     scanf(" %f", &pib2);

     printf("Digite o numero de Pontos Turisticos: ");
     scanf("%d", &pontos2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

      // Exibição dos dados da carta A01: São Paulo

     printf("O Nome do Estado: %c\n", estado1);
     printf("O Código da Cidade: %s\n", codigo1);
     printf("O Nome da Cidade é: %s\n", cidade1);
     printf("A população tem: %d\n", população1);
     printf("A área tem: %.2f km²\n", area1);
     printf("O PIB é: R$ %.2f bilhões\n", pib1);
     printf("Pontos Turísticos: %d\n", pontos1);
     printf("Densidade Populacional é: %.2f\n hab/km²", densidade1);
     printf("PIB Per Capita é: R$ %.2f\n reais", percapita1);
     

     // Exibição dos dados da carta B02: Rio de Janeiro
     
     printf("O Nome do Estado: %c\n", estado2);
     printf("O Código da Cidade: %s\n", codigo2);
     printf("O Nome da Cidade é: %s\n", cidade2);
     printf("A população tem: %d\n", população2);
     printf("A área tem: %.2f km²\n", area2);
     printf("O PIB é: R$ %.2f bilhões\n", pib2);
     printf("Pontos Turísticos: %d\n", pontos2);


    return 0;
}
