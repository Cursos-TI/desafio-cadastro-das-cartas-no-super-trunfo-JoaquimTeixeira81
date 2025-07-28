#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joaquim Teixeira

int main() {

     printf("Desafio do Super Trunfo!\n");

    // Atributo da carta A01: São Paulo

    char estado = 'A';
    char codigo = "A01";
    char nome [20] = "São Paulo";
    int população = "12325000";     // Em milhões de habitantes
    float area = 1521.11;          // Em Km quadrados
    float pib = 699.28;           // Em bilhões de Reais
    int pontosturisticos = "50";

     // Atributos da carta B02: Rio de Janeiro
     
     char estado = 'B';
     char codigo = "B02";
     char nome [20] = "Rio de Janeiro";
     int população = "674.800";     // Em milhões de habitantes
     float area = "1200.25";        // Em Km quadrados
     float pib = "300.50";          // Em bilões de Reais
     int pontosturisticos = "30";
      
    
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
