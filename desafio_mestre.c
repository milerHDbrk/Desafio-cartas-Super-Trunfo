#include <stdio.h>

int main () {

// VARIÁVEIS DAS CARTAS 1 E 2

    char estado1, estado2;
    char codigo_estado1[3], codigo_estado2[3];
    char nome_cidade1[3], nome_cidade2[3];
    int populacao1, populacao2;
    float area1, area2, densidade_popul1, densidade_popul2;
    float pib1, pib2, pib_capita1, pib_capita2;
    int num_pontos_T1, num_pontos_T2;
    float super_poder1, super_poder2;
    int resultado; 

// INSERIR INFORMAÇÕES DA (CARTA 1)

printf("Carta 1: \n");

    printf("Digite uma Letra de A - H (carta 1): \n");
        scanf("%s", &estado1); // estado A - H (carta 1)

    printf("Digite o Código da carta 1 (carta 1): \n");
        scanf("%s", &codigo_estado1); // código do estado (carta 1)

    printf("Digite o nome da cidade (carta 1): \n");
        scanf("%s", &nome_cidade1); // nome da cidade (carta 1)

    printf("Digite a quantidade populacional (carta 1): \n");
        scanf("%d", &populacao1); // população total da cidade (carta 1)

    printf("Digite a area (carta 1): \n");
        scanf("%f", &area1); // área da cidade (carta 1)

    printf("Digite o pib (carta 1): \n");
        scanf("%f", &pib1); // produto interno bruto da cidade (carta 1)

    printf("Digite o número de pontos turisticos (carta 1): \n");
        scanf("%f", &num_pontos_T1); // número de pontos turisticos da cidade (carta 1)

// CALCULO E EXIBIÇÃO DA DENSIDADE (CARTA 1)
    densidade_popul1 = populacao1 / area1 ;
    printf("densidade populacional (carta 1): \n%f\n", densidade_popul1) ;

// CALCULO E EXIBIÇÃO DO PIB PER CAPITA (CARTA 1)
    pib_capita1 = pib1 / populacao1 ;
    printf("PIB per capita (carta 1): \n%f\n", pib_capita1) ;

// SUPER PODER DA (CARTA 1)
    super_poder1 = populacao1 + area1 + num_pontos_T1 + pib_capita1 + (1 / densidade_popul1);
    printf("super poder da carta 1: \n%f\n", super_poder1) ;

// INSERIR INFORMAÇÕES DA CARTA 2

printf("Carta 2: \n");

    printf("Digite uma Letra de A - H (carta 2): \n");
        scanf("%s", &estado2); // estado A - H (carta 2)

    printf("Digite o Código da carta 1 (carta 2): \n");
        scanf("%s", &codigo_estado2); // código do estado (carta 2)

    printf("Digite o nome da cidade (carta 2): \n");
        scanf("%s", &nome_cidade2); // nome da cidade (carta 2)

    printf("Digite a quantidade populacional (carta 2): \n");
        scanf("%d", &populacao2); // população total da cidade (carta 2)

    printf("Digite a area (carta 2): \n");
        scanf("%f", &area2); // área da cidade (carta 2)

    printf("Digite o pib (carta 2): \n");
        scanf("%f", &pib2); // produto interno bruto da cidade (carta 2)

    printf("Digite o número de pontos turisticos (carta 2): \n");
        scanf("%f", &num_pontos_T2); // número de pontos turisticos da cidade (carta 2)

// CALCULO E EXIBIÇÃO DA DENSIDADE (CARTA 2)
    densidade_popul2 = populacao2 / area2 ;
    printf("densidade populacional (carta 2): \n%f\n", densidade_popul2) ;

// CALCULO E EXIBIÇÃO DO PIB PER CAPITA (CARTA 2)
    pib_capita2 = pib2 / populacao2 ;
    printf("PIB per capita (carta 2): \n%f\n", pib_capita2) ;

// SUPER PODER DA (CARTA 2)
    super_poder2 = populacao2 + area2 + num_pontos_T2 + pib_capita2 + (1 / densidade_popul2);
    printf("super poder da carta 2: \n%f\n", super_poder2) ;

// COMPARAÇÕES ENTRE CARTA 1 E CARTA 2
    resultado = populacao1 > populacao2;
        printf("venceu: %d\n", resultado); // 1 vence carta 1 || 0 vence carta 2 (comparação da população)

    resultado = area1 > area2;
        printf("venceu: %d\n", resultado); // 1 vence carta 1 || 0 vence carta 2 (comparação da área da cidade)
        
    resultado = pib1 > pib2;
        printf("venceu: %d\n", resultado); // 1 vence carta 1 || 0 vence carta 2 (comparação do PIB da cidade)

    resultado = num_pontos_T1 > num_pontos_T2;
        printf("venceu: %d\n", resultado); // 1 vence carta 1 || 0 vence carta 2 (comparação de quantidade de pontos turisticos)

    resultado = densidade_popul1 < densidade_popul2;
        printf("venceu: %d\n", resultado); // 1 vence carta 1 || 0 vence carta 2 (comparação da densidade populacional)

    resultado = pib_capita1 > pib_capita2;
        printf("venceu: %d\n", resultado); // 1 vence carta 1 || 0 vence carta 2 (comparação do PIB per capita) 

return 0;
}