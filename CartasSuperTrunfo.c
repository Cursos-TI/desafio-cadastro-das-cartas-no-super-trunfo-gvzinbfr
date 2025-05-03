#include <stdio.h>

int main(){

// carta 1
char estado;
char codigo[7];
char nomecidade[77];
int populacao;
float area;
float pib;
int pontosturisticos;

// carta 2
char estado2;
char codigo2[7];
char nomecidade2[77];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

//carta 1
printf("Digite os dados da Carta 1:\n");

printf("Estado (letra de A a H): ");
scanf(" %c", &estado);

printf("Código da Carta (ex: A01): ");
scanf("%s", codigo);

printf("Nome da Cidade: ");
scanf(" [^\n]", nomecidade);

printf("População: ");
scanf("%d", &populacao);

printf("Área (em km²): ");
scanf("%f", &area);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos);

//carta 2
printf("\nDigite os dados da Carta 2:\n");

printf("Estado (letra de A a H): ");
scanf(" %c", estado2);

printf("Código da Carta (ex: B03): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" [^\n]", nomecidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

//cartas
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomecidade);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);


//GUSTAVO JESUS DOS SANTOS//

return 0;

}