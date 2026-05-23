#include <stdio.h>

int main()
{
    char estado1, estado2, codigo1[2], codigo2[2], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapta1, pibPerCapta2;

    // Carta 1:

    printf("\nCarta 1: \nEstado: ");
    scanf("%s", &estado1);

    printf("Código: ");
    scanf("%s", &codigo1);
    
    printf("Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%i", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos Turisticos: ");
    scanf("%i", &pontosTuristicos1);

    // Carta 2:

    printf("\nCarta 2: \nEstado: ");
    scanf("%s", &estado2);

    printf("Código: ");
    scanf("%s", &codigo2);
    
    printf("Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos Turisticos: ");
    scanf("%i", &pontosTuristicos2);

    // Resultado:

    printf("RESULTADO: \n");

    densidade1 = populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;


    printf("Carta 1: \nEstado: %c, \nCódigo: %s, \nCidade: %s, \nPopulação: %i, \nÁrea: %f, \nPIB: %f, \nNumero de pontos turísticos: %i, \nDensidade populacional: %f, \nPIB per capta: %f \n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapta1);
    
    printf("Carta 2: \nEstado: %c, \nCódigo: %s, \nCidade: %s, \nPopulação: %i, \nÁrea: %f, \nPIB: %f, \nNumero de pontos turísticos: %i, \nDensidade populacional: %f, \nPIB per capta: %f \n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapta2);

    return 0;
}
