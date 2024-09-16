#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
     char nomecarta1[20];  // utilizarei a variavel char para coletar o nome da cidade da carta1
     char nomecarta2[20];  // coletar o nome da cidade da carta2
     char estado1[10];
     char estado2[10];
     char codigocarta1[10]; // coletar codigo da carta1
     char codigocarta2[10];  // coletar codigo da carta2
     int turismocarta1, turismocarta2; // a variavel int coletará o numero de pontos turisticos das cartas
     double area1, populacao1, pib1, densidade1, pibpercapita1, area2, populacao2, pib2, densidade2, pibpercapita2; // a variavel double coletará os numeros mais precisos de area, populacao, pib, densidade e pib per capita

  // Área para entrada de dados
    printf ("Olá, bem-vindo ao Super trunfo Países!\n");  // iniciarei com printf para dar as instruções do jogo
 
    printf ("Digite a sigla do estado:\n");
    scanf (" %s", &estado1);  // vou inserir a função scanf para coletar os dados fornecidos pelo jogador
    printf ("Digite o código da carta:\n");
    scanf  ("%s", &codigocarta1);
    printf ("Digite o nome da cidade sem espaço:\n");
    scanf ("%s", &nomecarta1);      
    printf ("Insira a população da cidade escolhida:\n");
    scanf ("%lf", &populacao1);  //utilizarei o modificador l para o scanf ler corretamento os dados em double
    printf ("Insira a área da cidade escolhida:\n");
    scanf  ("%lf", &area1);
    printf ("Insira o PIB da cidade escolhida:\n");
    scanf ("%lf", &pib1);
    printf ("Insira a quantidade de pontos turisticos da cidade escolhida:\n");
    scanf ("%d", &turismocarta1);

   // calculo da densidade populacional e do pib per capita

   densidade1 = populacao1 / area1;
   pibpercapita1 = pib1 / populacao1;

  // Área para exibição dos dados da cidade

    printf ("Sua carta possui os seguintes atributos: \n");
    printf ("Estado: %s\n", estado1);  //Utilizarei a função printf para fornecer ao usuario os dados de sua carta
    printf ("Código da carta: %s\n", codigocarta1);
    printf ("Nome da cidade: %s\n", nomecarta1);
    printf ("População: %lf\n", populacao1);
    printf ("Área: %lf km²\n", area1);
    printf ("PIB: %lf bilhões de reais \n", pib1);
    printf ("Pontos turisticos: %d\n", turismocarta1);
    printf ("Densidade populacional: %lf \n", densidade1);
    printf ("PIB per capita: %lf \n", pibpercapita1);

    printf ("Agora forneça as informações da segunda carta: \n");

    printf ("Digite a sigla do estado:\n");
    scanf (" %s", &estado2);  // vou inserir a função scanf para coletar os dados fornecidos pelo jogador
    printf ("Digite o código da carta:\n");
    scanf  ("%s", &codigocarta2);
    printf ("Digite o nome da cidade sem espaço:\n");
    scanf ("%s", &nomecarta2);      
    printf ("Insira a população da cidade escolhida:\n");
    scanf ("%lf", &populacao2);  //utilizarei o modificador l para o scanf ler corretamento os dados em double
    printf ("Insira a área da cidade escolhida:\n");
    scanf  ("%lf", &area2);
    printf ("Insira o PIB da cidade escolhida:\n");
    scanf ("%lf", &pib2);
    printf ("Insira a quantidade de pontos turisticos da cidade escolhida:\n");
    scanf ("%d", &turismocarta2);

   // calculo da densidade populacional e do pib per capita

   densidade2 = populacao2 / area2;
   pibpercapita2 = pib2 / populacao2;

  // Área para exibição dos dados da cidade

    printf ("Sua carta possui os seguintes atributos: \n");
    printf ("Estado: %s\n", estado2);  //Utilizarei a função printf para fornecer ao usuario os dados de sua carta
    printf ("Código da carta: %s\n", codigocarta2);
    printf ("Nome da cidade: %s\n", nomecarta2);
    printf ("População: %lf\n", populacao2);
    printf ("Área: %lf km²\n", area2);
    printf ("PIB: %lf bilhões de reais \n", pib2);
    printf ("Pontos turisticos: %d\n", turismocarta2);
    printf ("Densidade populacional: %lf \n", densidade2);
    printf ("PIB per capita: %lf \n", pibpercapita2);

    //Área para comparação das cartas

    printf ("**Comparação das cartas com base na população** \n");
    printf ("Carta 1 - Estado: %s, Código: %s, População: %lf \n", estado1, codigocarta1, populacao1);
    printf ("Carta 2 - Estado: %s, Código: %s, População: %lf \n", estado2, codigocarta2, populacao2);

    if (populacao1 > populacao2){ //Coloquei if-else para fazer a comparação e revelar a carta vencedora
        printf ("Resultado: Carta 1 é a vencedora! \n"); // A condição verdadeira caso populaçao1 seja maior
    }else{
        printf ("Resultado: Carta 2 é a vencedora! \n"); // A condição falsa a ser exibida caso populaçao1 seja menor
    }

    return 0;
}
