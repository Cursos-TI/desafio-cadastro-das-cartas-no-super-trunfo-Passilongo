#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alex

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome1[40], estado1[4], nome2[50], estado2[4];
    int num_ponto_turistico1, cod_cidade1, populacao1;
    int num_ponto_turistico2, cod_cidade2, populacao2;
    float area1, pib1, pib_capita1, densidade1;
    float area2, pib2, pib_capita2, densidade2;
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("** CARTA 1 ** \n\n");

    printf("Digite o Estado de A a H: ");
    scanf("%s", &estado1);

    printf("Codigo da cidade de 01 a 04: ");
    scanf("%d", &cod_cidade1);

    printf("Nome da cidade: ");
    scanf("%s", &nome1);

    printf("Quantidade de Habitantes: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico1);

    densidade1 = (float) populacao1 / area1;
    pib_capita1 = (float) (pib1 * 1000000000) / populacao1;

   
    // CADASTRO DA CARTA 02

    printf("** CARTA 2 ** \n\n");

    printf("Digite o Estado de A a H: ");
    scanf("%s", &estado2);

    printf("Codigo da cidade de 01 a 04: ");
    scanf("%d", &cod_cidade2);

    printf("Nome da cidade: ");
    scanf("%s", &nome2);

    printf("Quantidade de Habitantes: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico2);

    densidade2 = (float) populacao2 / area2;
    pib_capita2 = (float) (pib2 * 1000000000) / populacao2;

    //Exibição dos resultatods

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
     printf("PIB per Capita: %.2f reais\n\n", pib_capita1);
     
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
     
    
    

    return 0;
}
