#include <stdio.h>
int main() {
    
    // Informações da Carta Um

    char Pais1[100];
    char Estado1;
    char Cidade1;
    double area1;
    double PIB1;
    int populacao1;
    int pontosturisticos1;
    
    // Informações da Carta Dois

    char Pais2[100];
    char Estado2;
    char Cidade2;
    double area2;
    double PIB2;
    int populacao2;
    int pontosturisticos2;

    // Interação com o usuário para a Carta Um

    printf("Bem-vindo usuário! \n");
    printf("Ao super trunfo de cartas, onde você irá preencher os dados de duas cartas e depois comparar elas. \n");
    printf("Vamos começar a preencher os dados da Carta Um! \n");
    printf("--------------------------------------\n");

    printf("Informe o nome do País escolhido para a Carta Um \n");
    scanf("%s", Pais1);
    printf("O País escolhido é %s\n", Pais1);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe o Estado da Carta Um, de A a H \n");
    scanf("%c", &Estado1);
    printf("O Estado escolhido é %c\n", Estado1);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe a Cidade da Carta Um, de 1 a 4 \n");
    scanf("%c", &Cidade1);
    printf("A Cidade escolhida é %c\n", Cidade1);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("O código da Carta Um é %c%c\n", Estado1, Cidade1);
    printf("--------------------------------------\n");

    printf("Informe a área da cidade da Carta Um, em Km² \n");
    scanf("%lf", &area1);
    printf("A área da Carta Um é %2.2lf Km²\n", area1);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe o PIB da Carta Um \n");
    scanf("%lf", &PIB1);
    printf("O PIB da Carta Um é %2.3lf \n", PIB1);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe a população da Carta Um \n");
    scanf("%d", &populacao1);
    printf("A população da Carta Um é %d \n", populacao1);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe a quantidade de pontos turísticos da Carta Um \n");
    scanf("%4d", &pontosturisticos1);
    printf("A quantidade de pontos turísticos da Carta Um é %d \n", pontosturisticos1);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Agora que foi terminada a primeira carta, vamos para a segunda carta! \n");
    printf("--------------------------------------\n");

    // Interação com o usuário para a Carta Dois

    printf("Informe os parametros da Carta Dois agora. \n");
    printf("--------------------------------------\n");

    printf("Informe o nome do País escolhido para a Carta Dois \n");
    scanf("%s", Pais2);
    printf("O País escolhido é: %s\n", Pais2);
    printf("--------------------------------------\n");
    while (getchar() != '\n'); 

    printf("Informe o Estado da Carta Dois, de A a H \n");
    scanf("%c", &Estado2);
    printf("O Estado escolhido é %c\n", Estado2);   
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe a Cidade da Carta Dois, de 1 a 4 \n");
    scanf("%c", &Cidade2);
    printf("A Cidade escolhida é %c\n", Cidade2);
    printf("--------------------------------------\n");
    while (getchar() != '\n');
   
    printf("O código da Carta Dois é %c%c\n", Estado2, Cidade2);
    printf("--------------------------------------\n");

    printf("Informe a área da cidade da Carta Dois, em Km² \n");
    scanf("%lf", &area2);
    printf("A área da Carta Dois é %2.2lf Km²\n", area2);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe o PIB da Carta Dois \n");
    scanf("%lf", &PIB2);
    printf("O PIB da Carta Dois é %2.3lf \n", PIB2);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe a população da Carta Dois \n");
    scanf("%d", &populacao2);
    printf("A população da Carta Dois é %d \n", populacao2);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    printf("Informe a quantidade de pontos turísticos da Carta Dois \n");
    scanf("%4d", &pontosturisticos2);
    printf("A quantidade de pontos turísticos da Carta Dois é %d \n", pontosturisticos2);
    printf("--------------------------------------\n");
    while (getchar() != '\n');

    // Comparação das Cartas

    printf("Agora que as duas cartas foram preenchidas, vamos comparar elas! \n");
    printf("--------------------------------------\n");
    
    printf("Comparação das Cartas: \n");
    printf("====================================================\n");
    printf("Carta Um: %s, %c%c \n - Área: %2.2lf Km² \n - PIB: %2.3lf \n - População: %d\n", Pais1, Estado1, Cidade1, area1, PIB1, populacao1);
    printf("--------------------------------------------------\n");
    printf("Carta Dois: %s, %c%c \n - Área: %2.2lf Km² \n - PIB: %2.3lf \n - População: %d\n", Pais2, Estado2, Cidade2, area2, PIB2, populacao2);
    printf("====================================================\n");
    return 0;
}
