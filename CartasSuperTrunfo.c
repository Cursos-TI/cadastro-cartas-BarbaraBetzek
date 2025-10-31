#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  printf("Bem vindo ao desafio Super Trunfo\n");
  printf("Iniciando inserção das cartas (Carta 1).\n");

  printf("Insira uma letra de 'A' a 'H' para representar o estado: ");
  char estado;
  scanf("%c", &estado);
  getchar();
  printf("Insira a letra do estado seguida de um numero de 01 a 04 para representar o codigo da carta: ");
  char codigodacarta[3];
  scanf("%s", codigodacarta);
  getchar();
  printf("Insira o nome da cidade: ");
  char cidade[50];
  scanf("%s", cidade);
  getchar();
  printf("Insira o numero de habitantes da cidade: ");
  int populacao;
  scanf("%d", &populacao);
  printf("Insira a área da cidade em quilômetros quadrados: ");
  float area;
  scanf("%f", &area);
  printf("Insira o produto interno bruto PIB da cidade: ");
  float PIB;
  scanf("%f", &PIB);
  printf("Insira o número de pontos turisticos da cidade: ");
  int pontosturisticos;
  scanf("%d", &pontosturisticos);
  getchar();
  printf("\n==== Carta 1 inserida ====\n");

  printf("Insira os dados da carta 2: \n");
  printf("Insira uma letra de 'A' a 'H' para representar o estado: ");
  char estado2;
  scanf("%c", &estado2);
  getchar();
  printf("Insira a letra do estado seguida de um numero de 01 a 04 para representar o codigo da carta: ");
  char codigodacarta2[3];
  scanf("%s", codigodacarta2);
  getchar();
  printf("Insira o nome da cidade: ");
  char cidade2[50];
  scanf("%s", cidade2);
  getchar();
  printf("Insira o numero de habitantes da cidade: ");
  int populacao2;
  scanf("%d", &populacao2);
  printf("Insira a área da cidade em quilômetros quadrados: ");
  float area2;
  scanf("%f", &area2);
  printf("Insira o produto interno bruto PIB da cidade: ");
  float PIB2;
  scanf("%f", &PIB2);
  printf("Insira o número de pontos turisticos da cidade: ");
  int pontosturisticos2;
  scanf("%d", &pontosturisticos2);
  printf("\n==== Carta 1 inserida ====\n");


  printf("Todos os dados inseridos com sucesso.\n");
  printf("=== Dados Carta 1 ===\n");
  printf("Estado: %c\n", estado);
  printf("codigodacarta: %s\n", codigodacarta);
  printf("cidade: %s\n", cidade);
  printf("populacao: %d\n", populacao);
  printf("area: %f\n", area);
  printf("PIB: %f\n", PIB);
  printf("pontosturisticos: %d\n", pontosturisticos);

  printf("=== Dados Carta 2 ===\n");
  printf("Estado2: %c\n", estado2);
  printf("codigodacarta2: %s\n", codigodacarta2);
  printf("cidade2: %s\n", cidade2);
  printf("populacao2: %d\n", populacao2);
  printf("area2: %f\n", area2);
  printf("PIB2: %f\n", PIB2);
  printf("pontosturisticos2: %d\n", pontosturisticos2);

  printf("Fim da execução do programa.\n");
  return 0;
}
