#include <stdio.h>

int main(){
   // Cadastro carta 1
    char estado;
    char codigo[50];
    char cidade[50];
    int populacao , pontos;
    float area;
    float PIB;

    // Cadastro carta 1
    printf("Digite o estado da carta 1: \n");
    scanf(" %c" , &estado); 

    printf("Digite o código da carta 1: \n");
    scanf("%s" , codigo);

    printf("Digite o nome da cidade: \n ");
    scanf("%s" , cidade);

    printf("Digite a população: \n ");
    scanf("%d" , &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d" , &pontos);

    printf("Digite a Área da carta 1:");
    scanf("%f" , &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f" , &PIB);

    printf("\nCadastro carta 1:\n");
    printf("Estado: %c \n" , estado);
    printf("Código: %s\n" , codigo);
    printf("Cidade: %s\n" , cidade);
    printf("População: %d\n" , populacao);
    printf("Pontos turísticos: %d\n" , pontos);
    printf("Área: %f\n" , area);
    printf("PIB: %f\n" , PIB);

    // Cadastro Carta 2
    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2 , pontos2;
    float area2;
    float PIB2;

    // Cadastro Carta 2
    printf("Digite o estado da carta 2: \n");
    scanf(" %c" , &estado2); 

    printf("Digite o código da carta 2: \n");
    scanf("%s" , codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s" , cidade2);

    printf("Digite a população: \n");
    scanf("%d" , &populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d" , &pontos2);

    printf("Digite a Área da carta 2:");
    scanf("%f" , &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f" , &PIB2);

    printf("\nCadastro carta 2:\n");
    printf("Estado: %c \n" , estado2);
    printf("Código: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %d\n" , populacao2);
    printf("Pontos turísticos: %d\n" , pontos2);
    printf("Área: %f\n" , area2);
    printf("PIB: %f\n" , PIB2);





    return 0;
}