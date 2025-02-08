#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alex

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome01[50], nome02[50], nome03[50], nome04[50] ;
    int num_ponto_turistico01, num_ponto_turistico02, num_ponto_turistico03, num_ponto_turistico04;
    float area01, area02, area03, area04, pib01, pib02, pib03, pib04, populacao01, populacao02, populacao03, populacao04;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("** VAMOS CADASTRAR AS QUATRO CIDADES DO ESTADO A ** \n\n");
    printf("** PRIMEIRA CIDADE ** \n");

    printf("Nome da cidade: ");
    scanf("%s", &nome01);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao01);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area01);

    printf("Digite o PIB: ");
    scanf("%f", &pib01);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico01);
   
    // Cadastro da Segunda cidade
    printf("\n** CADASTRO DA SEGUNDA CIDADE ** \n");

    printf("Nome da cidade: ");
    scanf("%s", &nome02);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao02);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area02);

    printf("Digite o PIB: ");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico02);

    // Cadastro da terceira cidade

    printf("\n** TERCEIRA CIDADE ** \n");

    printf("Nome da cidade: ");
    scanf("%s", &nome03);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao03);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area03);

    printf("Digite o PIB: ");
    scanf("%f", &pib03);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico03);

    // Cadastro da Quarta cidade

    printf("\n** QUARTA CIDADE ** \n");

    printf("Nome da cidade: ");
    scanf("%s", &nome04);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao04);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area04);

    printf("Digite o PIB: ");
    scanf("%f", &pib04);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico04);

   //Exibição dos resultatods
    printf("\n** RESULTADOS ** /n");
   //Primeira cidade
    printf("O código da carta da cidade %s é A01 \n", nome01);
    printf("População: %f \n", populacao01);
    printf("Área: %f \n", area01);
    printf("PIB: %f \n", pib01);
    printf("Número de pontos turísticos: %d \n\n", num_ponto_turistico01);

    // Segunda cidade
    printf("O código da carta da cidade %s é A02 \n", nome02);
    printf("População: %f \n", populacao02);
    printf("Área: %f \n", area02);
    printf("PIB: %f \n", pib02);
    printf("Número de pontos turísticos: %d \n\n", num_ponto_turistico02);

    // Terceira cidade
    printf("O código da carta da cidade %s é A03 \n", nome03);
    printf("População: %f \n", populacao03);
    printf("Área: %f \n", area03);
    printf("PIB: %f \n", pib03);
    printf("Número de pontos turísticos: %d \n\n", num_ponto_turistico03);

    //Quarta cidade
    printf("O código da carta da cidade %s é A04 \n", nome04);
    printf("População: %f \n", populacao04);
    printf("Área: %f \n", area04);
    printf("PIB: %f \n", pib04);
    printf("Número de pontos turísticos: %d \n", num_ponto_turistico04);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
