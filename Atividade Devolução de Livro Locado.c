/*Escreva um programa que obtenha o valor da locação e os dias de atraso de um determinado livro e mostre o valor total da multa a ser paga.

Obs.: Se tiver atraso, é cobrado R$ 1,50 por dia de atraso.*/

#include <stdio.h>
#define MULTA_DIARIA 1.5

int main(){

    int diasAtraso;
    float valorMulta=0;

    printf("Quantos dias de atraso?\n");
    scanf("%d", &diasAtraso);

    if(diasAtraso>0){
        valorMulta = diasAtraso * MULTA_DIARIA;
    }
    printf("Voce deve pagar o valor de R$%2.f", valorMulta);
    
    return 0;
}