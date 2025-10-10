#include <stdio.h>

int main () {

// VARIÁVEIS DAS CARTAS 1 E 2

    char estado1, estado2;
    char codigo_estado1[3], codigo_estado2[3];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pontos_T1, num_pontos_T2;


// INSERIR INFORMAÇÕES A CARTA 1

printf("Carta 1: \n");

    printf("Digite uma letra de A - H (carta 1): \n");
        scanf("%s", &estado1); // estado A - H (carta 1)

    printf("Digite o Código da carta 1 (carta 1): \n");
        scanf("%s", &codigo_estado1); // código do estado (carta 1)

    printf("Digite o nome da cidade (carta 1): \n");
        scanf("%s", &nome_cidade1); // nome da cidade (carta 1)

    printf("Digite a quantidade populacional (carta 1): \n");
        scanf("%d", &populacao1); // população total da cidade (carta 1)

    printf("Digite a área (carta 1): \n");
        scanf("%f", &area1); // área da cidade (carta 1)

    printf("Digite o PIB (carta 1): \n");
        scanf("%f", &pib1); // produto interno bruto da cidade (carta 1)

    printf("Digite o número de pontos turísticos (carta 1): \n");
        scanf("%f", &num_pontos_T1); // número de pontos turísticos da cidade (carta 1)

// INSERIR INFORMAÇÕES A CARTA 2

printf("Carta 2: \n");

    printf("Digite uma letra de A - H (carta 2): \n");
        scanf("%s", &estado2); // estado A - H (carta 2)

    printf("Digite o Código da carta 1 (carta 2): \n");
        scanf("%s", &codigo_estado2); // código do estado (carta 2)

    printf("Digite o nome da cidade (carta 2): \n");
        scanf("%s", &nome_cidade2); // nome da cidade (carta 2)

    printf("Digite a quantidade populacional (carta 2): \n");
        scanf("%d", &populacao2); // população total da cidade (carta 2)

    printf("Digite a área (carta 2): \n");
        scanf("%f", &area2); // área da cidade (carta 2)

    printf("Digite o PIB (carta 2): \n");
        scanf("%f", &pib2); // produto interno bruto da cidade (carta 2)

    printf("Digite o número de pontos turísticos (carta 2): \n");
        scanf("%f", &num_pontos_T2); // número de pontos turísticos da cidade (carta 2)

return 0;
}