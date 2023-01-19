/*Os ingressos para um evento foram classificados em 3 grupos: Normal R$ 100,00, estudante R$ 50,00 e acessível R$ 30,00.
Elabore um programa para ler a quantidade de ingressos vendidos para cada um dos grupos e mostre o valor total das vendas de ingressos.*/

#include <stdio.h>
#define NORMAL 100
#define ESTUDANTE 50
#define ACESSIVEL 30

int main(void){

    int normal, estudante, acessivel;

    printf("Quantos ingressos foram vendidos para o publico normal?\n");
    scanf("%d", &normal);
    printf("Quantos ingressos foram vendidos para o publico estudante?\n");
    scanf("%d", &estudante);
    printf("Quantos ingressos foram vendidos para o publico acessivel?\n");
    scanf("%d", &acessivel);

    int qtdNormal = NORMAL * normal;
    int qtdEstudante = ESTUDANTE * estudante;
    int qtdAcessivel = ACESSIVEL * acessivel;

    int totalVendido = qtdAcessivel + qtdEstudante + qtdNormal;

    printf("A quantidade vendida para o publico normal foi de %d ingressos\nA quantidade vendida para o publico estudante foi de %d ingressos\nA quantidade vendida para o publico acessivel foi de %d ingressos\n", qtdNormal, qtdEstudante, qtdAcessivel);

    printf("O valor total arrecadado pelo evento foi de R$%d", totalVendido);

    return 0;
}
