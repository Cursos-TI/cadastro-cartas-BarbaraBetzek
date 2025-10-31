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

  float densidade1 = 0.0f;
  float densidade2 = 0.0f;
  float pib_per_capita1 = 0.0f;
  float pib_per_capita2 = 0.0f;

  if (area > 0.0f)
  {
    densidade1 = (float)populacao / area;
  }
  else
  {
    densidade1 = 0.0f; // ou indicar inválido
  }

  if (area2 > 0.0f)
  {
    densidade2 = (float)populacao2 / area2;
  }
  else
  {
    densidade2 = 0.0f;
  }

  if (populacao > 0)
  {
    pib_per_capita1 = PIB / (float)populacao;
  }
  else
  {
    pib_per_capita1 = 0.0f;
  }

  if (populacao2 > 0)
  {
    pib_per_capita2 = PIB2 / (float)populacao2;
  }
  else
  {
    pib_per_capita2 = 0.0f;
  }

  printf("Todos os dados inseridos com sucesso.\n");
  printf("=== Dados Carta 1 ===\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da carta: %s\n", codigodacarta);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %f\n", area);
  printf("PIB: %f\n", PIB);
  printf("Numero Pontos turisticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %.2f habitantes/km2\n", densidade1);
  printf("PIB per capita: %.2f\n", pib_per_capita1);

  printf("=== Dados Carta 2 ===\n");
  printf("Estado2: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigodacarta2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %f\n", area2);
  printf("PIB: %f\n", PIB2);
  printf("Numero Pontos turisticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f habitantes/km2\n", densidade2);
  printf("PIB per capita: %.2f\n", pib_per_capita2);

  // Escolha fixa do atributo a ser comparado:
  // 1 = Populacao, 2 = Area, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per capita
  const int ATRIBUTO = 5; // <-- escolha feita diretamente no código
  const char *nome_atributo;
  float valor1 = 0.0f;
  float valor2 = 0.0f;
  int menor_e_vencedor = 0; // se 1, menor valor vence (aplica-se para densidade)

  if (ATRIBUTO == 1)
  {
    nome_atributo = "Populacao";
    valor1 = (float)populacao;
    valor2 = (float)populacao2;
  }
  else if (ATRIBUTO == 2)
  {
    nome_atributo = "Area";
    valor1 = area;
    valor2 = area2;
  }
  else if (ATRIBUTO == 3)
  {
    nome_atributo = "PIB";
    valor1 = PIB;
    valor2 = PIB2;
  }
  else if (ATRIBUTO == 4)
  {
    nome_atributo = "Densidade Populacional";
    valor1 = densidade1;
    valor2 = densidade2;
    menor_e_vencedor = 1;
  }
  else
  { // caso 5 ou qualquer outro valor padrão
    nome_atributo = "PIB per capita";
    valor1 = pib_per_capita1;
    valor2 = pib_per_capita2;
  }

  printf("\nComparação de cartas (Atributo: %s):\n\n", nome_atributo);
  printf("Carta 1 - %s (%c): %.2f\n\n", cidade, estado, valor1);
  printf("Carta 2 - %s (%c): %.2f\n\n", cidade2, estado2, valor2);

  if (valor1 == valor2)
  {
    printf("Resultado: Empate entre as cartas.\n");
  }
  else
  {
    int carta1_vence = 0;
    if (menor_e_vencedor)
    {
      carta1_vence = (valor1 < valor2) ? 1 : 0;
    }
    else
    {
      carta1_vence = (valor1 > valor2) ? 1 : 0;
    }

    if (carta1_vence)
    {
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
  }

  printf("Fim da execução do programa.\n");
  return 0;
}
