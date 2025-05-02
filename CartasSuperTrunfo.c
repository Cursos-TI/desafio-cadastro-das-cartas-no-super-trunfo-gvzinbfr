#include <stdio.h>

int main(){
    
    char estado [77];
    char codigo [7];
    char cidade [77];
    int populacao;
    int PontosTuristico;
    float area;
    float pib;

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);

    printf("Código da carta:\n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade);

    printf("População total:\n");
    scanf("%d", &populacao);
    
    printf("Numero de Pontos Turisticos:\n");
    scanf("%d", &PontosTuristico);

    printf("Area:\n");
    scanf("%f", &area);

    printf("Pib:\n");
    scanf("%f", &pib);

    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s%s \n", estado, codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Pontos Turisticos: %d \n", PontosTuristico);
    printf("Area: %f \n", area);
    printf("Pib: %f \n", pib);
    
        
                    ///CARTA 2///
            
    char estado2 [77];
    char codigo2 [7];
    char cidade2 [77];
    int populacao2;
    int PontosTuristico2;
    float area2;
    float pib2;
    

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado2);

    printf("Código da carta:\n");
    scanf("%s", &codigo2);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("População total:\n");
    scanf("%d", &populacao2);
    
    printf("Numero de Pontos Turisticos:\n");
    scanf("%d", &PontosTuristico2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("Pib:\n");
    scanf("%f", &pib2);

    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Pontos Turisticos: %d \n", PontosTuristico2);
    printf("Area: %f \n", area2);
    printf("Pib: %f \n", pib2);


    return 0;
}