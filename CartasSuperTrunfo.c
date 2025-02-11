#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alex

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50];
    char estado[50];
    int num_ponto_turistico, cod_cidade;
    float area, pib, populacao;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("** VAMOS CADASTRAR AS CARTAS ** \n\n");

    printf("Digite o Estado de A a H: ");
    scanf("%s", &estado);

    printf("Codigo da cidade de 01 a 04: ");
    scanf("%d", &cod_cidade);

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico);

       
    /*// Cadastro da Segunda cidade
    printf("\n** CADASTRO DA SEGUNDA CIDADE ** \n");

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico);

    // Cadastro da terceira cidade

    printf("\n** TERCEIRA CIDADE ** \n");

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico);

    // Cadastro da Quarta cidade

    printf("\n** QUARTA CIDADE ** \n");

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("Quantidade de Habitantes: ");
    scanf("%f", &populacao);
    
    printf("Digite a area geométrica: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &num_ponto_turistico);*/

   //Exibição dos resultatods
    printf("\n** RESULTADO ** \n");
    printf("Estado: %s \n", estado);
    printf("O código da carta: %s0%d   \n", estado, cod_cidade);
    printf("Nome da cidade: %s", nome);
    printf("População: %.2f habitantes \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", num_ponto_turistico);
    printf("\n** CARTA REGISTRADA COM SUCESSO ** \n");

   /* // Segunda cidade
    printf("O código da carta da cidade %s é A02 \n", nome);
    printf("População: %f \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n\n", num_ponto_turistico);

    // Terceira cidade
    printf("Estado: A");
    printf("O código da carta: %s A03 \n", nome);
    printf("População: %f \n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d \n\n", num_ponto_turistico);

    //Quarta cidade
    printf("O código da carta da cidade %s é A04 \n", nome);
    printf("População: %f \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", num_ponto_turistico);*/

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
