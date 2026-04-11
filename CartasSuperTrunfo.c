#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.



int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1;
    char Carta1 [4];
    char Cidade1 [20];
    int População1;
    float Área1;
    float PIB1;
    int Pontos1;
    float Densidade1;
    float PIBpercapita1;


    char Estado2;
    char Carta2 [4];
    char Cidade2 [20];
    int População2;
    float Área2;
    float PIB2;
    int Pontos2;
    float Densidade2;
    float PIBpercapita2;

 
  
  
  
     

  // Área para entrada de dados
  printf ("Vamos começar o jogo Super Trunfo!\n");
  printf ("Você deve digitar os dados das suas cartas nas lacunas abaixo.\n");
  
  printf ("Carta 1\n");
  printf ("Digite o Estado - Letra de A a H reprentando um dos oito estados: \n");
  scanf ("%c", &Estado1);
  printf ("Digite o Código da Carta - Letra do estado seguida de um número de 01 a 04: \n");
  scanf ("%s", Carta1);
  printf ("Digite o nome da Cidade:\n");
  scanf ("%s", Cidade1);
  printf ("Digite o número de habitantes da cidade: \n");
  scanf ("%d", &População1);
  printf ("Digite a área da cidade em quilômetros quadrado:\n");
  scanf ("%.2f", &Área1);
  printf ("Digite o PIB da cidade: \n");
  scanf ("%.2f", &PIB1);
  printf ("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf ("%d", &Pontos1);

  printf ("Carta 2\n");
  printf ("Digite o Estado - Letra de A a H reprentando um dos oito estados: \n");
  scanf ("%c", &Estado2);
  printf ("Digite o Código da Carta - Letra do estado seguida de um número de 01 a 04: \n");
  scanf ("%s", Carta2);
  printf ("Digite o nome da Cidade:\n");
  scanf ("%s", Cidade2);
  printf ("Digite o número de habitantes da cidade: \n");
  scanf ("%d", &População2);
  printf ("Digite a área da cidade em quilômetros quadrado:\n");
  scanf ("%.2f", &Área2);
  printf ("Digite o PIB da cidade: \n");
  scanf ("%.2f", &PIB2);
  printf ("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf ("%d", &Pontos2);
  

  // Área para exibição dos dados da cidade
  
  printf ("Carta 1\n");

  printf ("Estado: %c\n", Estado1);
  printf ("Código: %s\n", Carta1);
  printf ("Nome da Cidade: %s\n", Cidade1);
  printf ("População: %d\n", População1);
  printf ("Área: %.2f\n", Área1);
  printf ("PIB: %.2f\n", PIB1);
  printf ("Número de Pontos Turísticos: %d\n", Pontos1);
  float Densidade1 = População1 / Área1;
  printf ("Densidade Populacional: %.2f\n", Densidade1);
  float PIBpercapita1 = (float) PIB1 / População1;
  printf ("PIB per Capita: %.2f\n", PIBpercapita1);
  
  printf ("Carta 2\n");

  printf ("Estado: %c\n", Estado2);
  printf ("Código: %s\n", Carta2);
  printf ("Nome da Cidade: %s\n", Cidade2);
  printf ("População: %d\n", População2);
  printf ("Área: %.2f\n", Área2);
  printf ("PIB: %.2f\n", PIB2);
  printf ("Número de Pontos Turísticos: %d\n", Pontos2);
  float Densidade2 = População2 / Área2;
  printf ("Densidade Populacional: %.2f\n", Densidade2);
  float PIBpercapita2 = (float) PIB2 / População2;
  printf ("PIB per Capita: %.2f\n", PIBpercapita2);


return 0;
} 
