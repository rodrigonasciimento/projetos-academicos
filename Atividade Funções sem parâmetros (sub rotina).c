/*Escreva um programa que execute as seguintes funcionalidades:
a) Calcular Valor do Lucro: Receber o preço de venda e o preço de custo  
b) Calcular Preço de Venda: Receber o preço de custo e o percentual de lucro
c) Calcular Percentual de Lucro: Receber preço de venda e preço de custo

Requisitos:
Cada funcionalidade deve ser acessada por uma opção de um menu que deverá ter o seguinte título: 

*** Cálculo Financeiro do Produto ***
Cada funcionalidade deve ser implementada em uma sub rotina.
Cada funcionalidade deve ter um título.*/

#include <stdio.h>

void valorLucro(void){
            float valorVenda, valorCusto;
            printf("Qual o valor de custo do produto? R$");
            scanf("%f", &valorCusto);
            printf("Qual o valor para venda? R$");
            scanf("%f", &valorVenda);
            float valorLucro = valorVenda - valorCusto;
            printf("\nO valor do lucro é: R$%2.f\n", valorLucro); 
            return;
}

void calculoPercentual(void){
            float precoCusto, percentualLucro;
            printf("Qual o preco do custo? R$");
            scanf("%f", &precoCusto);
            printf("Qual o percentual de lucro? ");
            scanf("%f", &percentualLucro);
            float calculoPercentual = (precoCusto * percentualLucro)/100;
            float calculoP = precoCusto + calculoPercentual;
            printf("\nO valor de venda é: R$%2.f\n", calculoP);
            return;
}

void calculo(void){
            float custo, venda;
            printf("Qual o preco de custo? R$");
            scanf("%f", &custo);
            printf("Qual o preco de venda? R$");
            scanf("%f", &venda);
            float calculo = venda-custo;
            float valor = (calculo/venda)*100;
            printf("\nO percentual de lucro é: %f\n", valor);
            return; 
}


int main(){
    do{
        printf("**** Calcule Financeiro do Produto****\n");
        printf("1 - Calcular o valor do lucro\n");
        printf("2 - Calcular preco de venda\n");
        printf("3 - Calcular percentual de lucro\n");
        printf("0 - Encerrar o programa\n");

        int selecao;
        printf("\nDigite a opcao que deseja calcular: ");
        scanf("%d", &selecao);
        switch (selecao){
        case 1:
            valorLucro();
            break;
        case 2:
            calculoPercentual();
            break;
        case 3:
            calculo();           
            break;
        case 0:
            break;
        default:
            printf("Invalido!\n");
        }
        if(selecao == 0){
            printf("Programa encerrado!\n");
            break;
        }
            
    }while(1);


    return 0;
}