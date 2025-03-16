#include <stdio.h>

typedef struct {
    char codigo[50]; // Permite espaços no nome da cidade
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void compararAtributo(Cidade c1, Cidade c2, int opcao) {
    printf("\n=== Resultado da Comparacao ===\n");

    switch (opcao) {
        case 1:
            printf("Comparando Populacao...\n");
            if (c1.populacao > c2.populacao)
                printf("Cidade %s venceu com %d habitantes!\n", c1.codigo, c1.populacao);
            else if (c2.populacao > c1.populacao)
                printf("Cidade %s venceu com %d habitantes!\n", c2.codigo, c2.populacao);
            else
                printf("Empate! Ambas possuem %d habitantes.\n", c1.populacao);
            break;

        case 2:
            printf("Comparando Area...\n");
            if (c1.area > c2.area)
                printf("Cidade %s venceu com %.2f km2!\n", c1.codigo, c1.area);
            else if (c2.area > c1.area)
                printf("Cidade %s venceu com %.2f km2!\n", c2.codigo, c2.area);
            else
                printf("Empate! Ambas possuem %.2f km2.\n", c1.area);
            break;

        case 3:
            printf("Comparando PIB...\n");
            if (c1.pib > c2.pib)
                printf("Cidade %s venceu com %.2f bilhoes de dolares!\n", c1.codigo, c1.pib);
            else if (c2.pib > c1.pib)
                printf("Cidade %s venceu com %.2f bilhoes de dolares!\n", c2.codigo, c2.pib);
            else
                printf("Empate! Ambas possuem PIB de %.2f bilhoes de dolares.\n", c1.pib);
            break;

        case 4:
            printf("Comparando Pontos Turisticos...\n");
            if (c1.pontos_turisticos > c2.pontos_turisticos)
                printf("Cidade %s venceu com %d pontos turisticos!\n", c1.codigo, c1.pontos_turisticos);
            else if (c2.pontos_turisticos > c1.pontos_turisticos)
                printf("Cidade %s venceu com %d pontos turisticos!\n", c2.codigo, c2.pontos_turisticos);
            else
                printf("Empate! Ambas possuem %d pontos turisticos.\n", c1.pontos_turisticos);
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
    }
}

int main() {
    Cidade cidade1, cidade2;
    int opcao;

    printf("Cadastro da primeira cidade:\n");
    printf("Codigo (ex: A01): ");
    scanf(" %[^\n]s", cidade1.codigo);
    printf("Populacao: ");
    scanf("%d", &cidade1.populacao);
    printf("Area (km2): ");
    scanf("%f", &cidade1.area);
    printf("PIB (bilhoes de dolares): ");
    scanf("%f", &cidade1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &cidade1.pontos_turisticos);

    printf("\nCadastro da segunda cidade:\n");
    printf("Codigo (ex: B02): ");
    scanf(" %[^\n]s", cidade2.codigo);
    printf("Populacao: ");
    scanf("%d", &cidade2.populacao);
    printf("Area (km2): ");
    scanf("%f", &cidade2.area);
    printf("PIB (bilhoes de dolares): ");
    scanf("%f", &cidade2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &cidade2.pontos_turisticos);

    do {
        printf("\n=== Menu de Comparacao ===\n");
        printf("Escolha um atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao != 5)
            compararAtributo(cidade1, cidade2, opcao);

    } while (opcao != 5);

    printf("Encerrando o programa...\n");
    return 0;
}
