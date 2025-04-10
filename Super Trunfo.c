#include <stdio.h>

int main() {
 char estado[50], cidade[40], codigo[2];
 int populacao, pontos_turisticos;
 float area, pib;

 char estado2[50], cidade2[50], codigo2[2];
 int populacao2, pontos_turisticos2;
 float area2, pib2;
 
 // Inserindo os dados da primeira carta

 printf("Digite o Estado da primeira carta: \n");
 scanf("%s", estado);

 printf("Digite a Cidade da primeira carta: \n");
 scanf("%s", cidade);

 printf("Digite o Codigo da primeira carta: \n");
 scanf("%s", codigo);

 printf("Digite a Populacao primeira carta: \n");
 scanf("%d", &populacao);

 printf("Digite o Numero de pontos turisticos primeira carta: \n");
 scanf("%d", &pontos_turisticos);

 printf("Digite a Area primeira carta: \n");
 scanf("%f", &area);

 printf("Digite o PIB primeira carta: \n");
 scanf("%f", &pib);

 //Exibindo os resultados da primeira carta

 printf("Os dados da primeira carta sao: \n Estado: %s\n Cidade: %s\n Codigo: %s\n Populacao: %d\n Numero de pontos turisticos: %d\n Area: %.3f\n PIB: %.3f\n", estado, cidade, codigo, populacao, pontos_turisticos, area, pib);


// Inserindo os dados da segunda carta

 printf("Digite o Estado da segunda carta: \n");
 scanf("%s", estado2);

 printf("Digite a Cidade da segunda carta: \n");
 scanf("%s", estado2);

 printf("Digite o Codigo da segunda carta: \n");
 scanf("%s", codigo2);

 printf("Digite a Populacao da segunda carta: \n");
 scanf("%d", &populacao2);

 printf("Digite o Numero de pontos  turisticos da segunda carta: \n");
 scanf("%d", &pontos_turisticos2);
 
 printf("Digite a Area da segunda carta: \n");
 scanf("%f", &area2);

 printf("Digite o PIB da segunda carta: \n");
 scanf("%f", &pib2);

 // Exibindo os resultados da segunda carta

 printf("Os dados da segunda carta sao: \n Estado: %s\n Cidade: %s\n Codigo: %s\n Populaca: %d\n Numero de pontos turisticos: %d\n Area: %f\n PIB: %f\n", estado2, cidade2, codigo2, populacao2, pontos_turisticos2, area2, pib2);

}