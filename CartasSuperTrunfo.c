#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alex

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char nome1[50], estado1[4], nome2[50], estado2[4];
    int num_ponto_turistico1, cod_cidade1;
    unsigned long int populacao1, populacao2;
    int num_ponto_turistico2, cod_cidade2;
    float area1, pib1, pib_capita1, densidade1;
    float area2, pib2, pib_capita2, densidade2;
    float SuperPoder1, SuperPoder2;
    int resultadoPop, resultadoArea, resultadoPib, resultadoPontos_tur, resultadoDensidade, resultadoPib_capita, resultadoSuperPoder;
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("** CARTA 1 ** \n\n");

    printf("Digite o Estado de A a H: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Codigo da cidade de 01 a 04: ");
    scanf("%d", &cod_cidade1);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("Quantidade de Habitantes: ");
    scanf("%lu", &populacao1);
    getchar();
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico1);
    getchar();

    densidade1 = (float) populacao1 / area1;
    pib_capita1 = (float) (pib1 * 1000000000) / populacao1;
    SuperPoder1 = (float) populacao1 + area1 + pib1 + num_ponto_turistico1 + (1 / densidade1) + pib_capita1;

   
    // CADASTRO DA CARTA 02

    printf("** CARTA 2 ** \n\n");

    printf("Digite o Estado de A a H: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Codigo da cidade de 01 a 04: ");
    scanf("%d", &cod_cidade2);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Quantidade de Habitantes: ");
    scanf("%lu", &populacao2);
    getchar();

    printf("Digite a area geométrica: ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico2);
    getchar();

    densidade2 = (float) populacao2 / area2;
    pib_capita2 = (float) (pib2 * 1000000000) / populacao2;
    SuperPoder2 = (float) populacao2 + area2 + pib2 + num_ponto_turistico2 + (1 / densidade2) + pib_capita2;


    //Exibição dos resultatods

     printf("\n\n** CARTA 1 **\n\n");
     printf("Estado: %s \n", estado1);
     printf("Codigo: %s%02d \n", estado1, cod_cidade1);
     printf("Nome da cidade: %s \n", nome1);
     printf("População: %d habitantes \n", populacao1);
     printf("Área: %.2f km² \n", area1);
     printf("PIB: %.2f bilhões de reais \n", pib1);
     printf("Número de pontos turísticos: %d \n", num_ponto_turistico1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.2f reais\n", pib_capita1);
     printf("Super Poder Carta 1: %.2f \n\n", SuperPoder1);
     
    printf("** CARTA 2 **\n\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s%02d \n", estado2, cod_cidade2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", num_ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);
    printf("Super Poder Carta 2: %.2f \n\n", SuperPoder2);
     
    //Comparação das cartas
    resultadoPop = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontos_tur = num_ponto_turistico1 > num_ponto_turistico2;
    resultadoDensidade = (1 / densidade1) > (1 / densidade2);
    resultadoPib_capita = pib_capita1 > pib_capita2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2;

    printf("\n\nPopulação: Carta %d venceu (%d)\n", resultadoPop ? 1 : 2, resultadoPop);
    printf("Area: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", resultadoPib ? 1 : 2, resultadoPib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultadoPontos_tur ? 1 : 2, resultadoPontos_tur);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidade ? 1 : 2, resultadoDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPib_capita ? 1 : 2, resultadoPib_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);
   
    

    return 0;
}
