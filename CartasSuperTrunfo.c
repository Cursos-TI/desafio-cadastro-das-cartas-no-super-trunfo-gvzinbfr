#include <stdio.h>

int main() {
    // Carta 1
    char estado;
    char codigo[7];
    char nomecidade[77];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
    float superpoder;

    // Carta 2
    char estado2;
    char codigo2[7];
    char nomecidade2[77];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // Entrada da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade);

    printf("População: ");
    scanf("%uli", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);

    // Entrada da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("População: ");
    scanf("%uli", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

     //DENSIDADE POPULACIONAL CARTA 1//
    densidadepopulacional = populacao / area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);

    //PIB PER CAPITA CARTA 1//
    pibpercapita = pib / populacao;
    printf("Pib Per Capita: %.2f reais\n", pibpercapita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    //DENSIDADE POPULACIONAL CARTA 2//
    densidadepopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

    //PIB PER CAPITA CARTA 2//
    pibpercapita2 = pib2 / populacao2;
    printf("Pib Per Capita: %.2f reais\n", pibpercapita2);

    //SUPER PODER CARTA 1//
    superpoder = (populacao + area + pib + pontosturisticos + pibpercapita + 1 / densidadepopulacional);
    
    //SUPER PODER CARTA2//
    superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + 1 / densidadepopulacional2);
    
    //COMPARAÇÃO
    
    printf("Se carta 1 vencer: 1\n Se carta 2 vencer: 0\n Carta Vencedora: %d", superpoder > superpoder2);

    return 0;
}
