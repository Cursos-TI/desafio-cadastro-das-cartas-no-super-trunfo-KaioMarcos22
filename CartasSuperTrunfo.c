#include <stdio.h>

int main(){
//Carta 1
    char estado1;
    char codigo1[3];
    char cidade1[30]; 
    int população1;
    float area1;
    float pib1;
    int turistico1;
//Carta 2
    char estado2;
    char codigo2[3];
    char cidade2[30]; 
    int população2;
    float area2;
    float pib2;
    int turistico2;
//Carta 1 

printf("Preencha a Carta 1\n");

    printf("Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Código de sua carta: \n");
    scanf("%s", &codigo1);

    printf("Digite nome da sua Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o Tamanho da População: \n");
    scanf("%d", &população1); 

    printf("Digite o Tamanho da Área em Km²: \n");
    scanf("%f", &area1); 

    printf("Digite o PIB: \n");
    scanf("%f", &pib1); 

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &turistico1);

//Carta2

printf("Preencha a Carta 2 \n");

printf("Digite o seu Estado: \n");
    scanf("%c", &estado2);

    printf("Digite o Código de sua carta: \n");
    scanf("%s", &codigo2);

    printf("Digite nome da sua Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o Tamanho da População: \n");
    scanf("%d", &população2); 

    printf("Digite o Tamanho da Área em Km²: \n");
    scanf("%f", &area2); 

    printf("Digite o PIB: \n");
    scanf("%f", &pib2); 

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &turistico2);


//Carta 1 Resultado

    printf("Estado: %c \n",estado1);
    printf("Código da Carta: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("População: %d \n",população1);
    printf("Área: %fKm² \n",area1);
    printf("PIB: %f \n",pib1);
    printf("Pontos Turisticos: %d \n",turistico1);

//Carta 2 Resultado

    printf("Estado: %c \n",estado2);
    printf("Código da Carta: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %d \n",população2);
    printf("Área: %fKm² \n",area2);
    printf("PIB: %f \n",pib2);
    printf("Pontos Turisticos: %d \n",turistico2);

return 0;
}
