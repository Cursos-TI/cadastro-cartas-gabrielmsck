#include <stdio.h>
 int main(){

    int populacao, pontos_turisticos, num_cidade;
    float area, pib;
    char estado;


    

//recolhimento
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado);

    printf("Digite o numero da cidade: \n");
    scanf("%d", &num_cidade);

    printf("Digite a populacao da sua carta: \n");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turisticos ha em sua carta: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area da sua carta: \n");
    scanf("%f", &area);

    printf("Digite o pib da sua carta: \n");
    scanf("%f", &pib);

//entrega
    printf("\nCadastro de carta realizado\n");
    printf("Letra do estado: %c \n", estado);
    printf("Numero da cidade: %d \n", num_cidade);
    printf("Populacao da carta: %d \n", populacao);
    printf("Quantidade de pontos turisticos da carta: %d \n", pontos_turisticos);
    printf("Area da sua carta: %.3f \n", area);
    printf("PIB da sua carta: %.0f \n", pib);
    printf("\nCodigo da carta: %c%d \n", estado, num_cidade);






    return 0;

 }