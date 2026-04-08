#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.



int main() {


  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado [20];
    char Carta [3];
    char Cidade [20];
    int População;
    float Área;
    float PIB;
    int Pontos; 

  // Área para entrada de dados
  printf ("Vamos começar o jogo Super Trunfo!\n");
  printf ("Você deve digitar os dados das suas cartas nas lacunas abaixo.\n");
  
  printf ("Carta 1\n");
  printf ("Digite o Estado - Letra de A a H reprentando um dos oito estados: \n");
  scanf ("%c", &Estado);
  printf ("Digite o Código da Carta - Letra do estado seguida de um número de 01 a 04: \n");
  scanf ("%s", &Carta);
  printf ("Digite o nome da Cidade:\n");
  scanf ("%s", &Cidade);
  printf ("Digite o número de habitantes da cidade: \n");
  scanf ("%d", &População);
  printf ("Digite a área da cidade em quilômetros quadrado:\n");
  scanf ("%f", &Área);
  printf ("Digite o PIB da cidade: \n");
  scanf ("%f", &PIB);
  printf ("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf ("%d", &Pontos);

  printf ("Carta 2\n");
  printf ("Digite o Estado - Letra de A a H reprentando um dos oito estados: \n");
  scanf ("%c", &Estado);
  printf ("Digite o Código da Carta - Letra do estado seguida de um número de 01 a 04: \n");
  scanf ("%s", &Carta);
  printf ("Digite o nome da Cidade:\n");
  scanf ("%s", &Cidade);
  printf ("Digite o número de habitantes da cidade: \n");
  scanf ("%d", &População);
  printf ("Digite a área da cidade em quilômetros quadrado:\n");
  scanf ("%f", &Área);
  printf ("Digite o PIB da cidade: \n");
  scanf ("%f", &PIB);
  printf ("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf ("%d", &Pontos);

  // Área para exibição dos dados da cidade
  
  printf ("Carta 1\n");
  printf ("Estado: %c\n", Estado);
  printf ("Código: %s\n", Carta);
  printf ("Nome da Cidade: %s\n", Cidade);
  printf ("População: %d\n", População);
  printf ("Área: %.2f\n", Área);
  printf ("PIB: %.2f\n", PIB);
  printf ("Número de Pontos Turísticos: %d\n", Pontos);


  printf ("Carta 2\n");
  printf ("Estado: %c\n", Estado);
  printf ("Código: %s\n", Carta);
  printf ("Nome da Cidade: %s\n", Cidade);
  printf ("População: %d\n", População);
  printf ("Área: %.2f\n", Área);
  printf ("PIB: %.2f\n", PIB);
  printf ("Número de Pontos Turísticos: %d\n", Pontos);


return 0;
} 
