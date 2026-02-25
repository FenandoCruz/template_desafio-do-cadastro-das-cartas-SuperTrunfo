#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[16];
  char Carta1[04];
  char cidade[16];
  int populacao;
  int Área;
  int PIB;
  int PontosTuristicos;
  // Área para entrada de dados
  scanf("%s", estado);
  scanf("%s", Carta1);
  scanf("%s", cidade);
  scanf("%d", &populacao);
  scanf("%d", &Área);
  scanf("%d", &PIB);
  scanf("%d", &PontosTuristicos);
  // Área para exibição dos dados da cidade
  printf("carta:1\n");
  printf("Digite aqui o estado que sua carta vai representar:\n");
  printf("Estado:%s\n", estado);
  printf("Código:A01\n");
  printf("Digite aqui o nome da cidade do estado que você escolheu:\n");
  printf("cidade:%s\n", cidade);
  printf("Digite aqui o número da população da cidade escolhida:\n");
  printf("população:%d\n", populacao);
  printf("Digite aqui o tamanho da área geográfica da cidade escolhida:\n");
  printf("Digite aqui o PIB da cidade escolhida:\n");
  printf("Digite aqui o número de pontos turisticos da cidade:\n");
  printf("pontosTuristicos:%d\n", PontosTuristicos);
return 0;
} 
