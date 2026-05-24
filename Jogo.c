#include <stdio.h>

int main() {
    char estado1, estado2, codigo1[10], codigo2[10], cidade1[50], cidade2[50];
    unsigned int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapta1, pibPerCapta2;

    // Carta 1:
    printf("\nCarta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
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
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
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

    int escolhaJogador1;
    int somaCarta1;
    int escolhaJogador2;
    int somaCarta2;

    printf("\nEscolha qual atributo comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite uma das opções: ");
    scanf("%d", &escolhaJogador1);

    switch (escolhaJogador1)
    {
    case 1:
        if (populacao1 > populacao2) {
            somaCarta1++;
        } else {
            somaCarta2++;
        }
        break;
    case 2:
        if (area1 > area2) {
            somaCarta1++;
        } else {
            somaCarta2++;
        }
        break;
    case 3:
        if (pib1 > pib2) {
            somaCarta1++;
        } else {
            somaCarta2++;
        }
        break;
    case 4:
        if (pontosTuristicos1 > pontosTuristicos2) {
            somaCarta1++;
        } else {
            somaCarta2++;
        }
        break;
    case 5:
        if (densidade1 > densidade2) {
            somaCarta1++;
        } else {
            somaCarta2++;
        }
        break;
    default:
        printf("Opção invalida!\n");
        break;
    }

    printf("\nEscolha outro atributo:\n");
    escolhaJogador1 != 1 ? printf("1. População\n") : 0;
    escolhaJogador1 != 2 ? printf("2. Área\n"): 0;
    escolhaJogador1 != 3 ? printf("3. PIB\n") : 0 ;
    escolhaJogador1 != 4 ? printf("4. Número de pontos turísticos\n"): 0;
    escolhaJogador1 != 5 ? printf("5. Densidade demográfica\n") : 0;
    printf("Digite uma das opções: ");
    scanf("%d", &escolhaJogador2);

    if (escolhaJogador2 == escolhaJogador1) {
        printf("A opção %d não está mais disponivel\n", escolhaJogador1);
    } else {
        switch (escolhaJogador2)
        {
        case 1:
            if (populacao1 > populacao2) {
                somaCarta1++;
            } else {
                somaCarta2++;
            }
            break;
        case 2:
            if (area1 > area2) {
                somaCarta1++;
            } else {
                somaCarta2++;
            }
            break;
        case 3:
            if (pib1 > pib2) {
                somaCarta1++;
            } else {
                somaCarta2++;
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                somaCarta1++;
            } else {
                somaCarta2++;
            }
            break;
        case 5:
            if (densidade1 > densidade2) {
                somaCarta1++;
            } else {
                somaCarta2++;
            }
            break;
        default:
            printf("Opção invalida!\n");
            break;
        }
    }

    if (somaCarta1 == somaCarta2)
    {
        printf("Empate!");
    } else if (somaCarta1 > somaCarta2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }
    

    return 0;
}
