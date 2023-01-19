/*Escreva um programa que obtenha o valor da locação e os dias de atraso de um
determinado livro e mostre o valor total da multa a ser paga.

Se tiver atraso, é cobrado o percentual de 0,5% por dia de atraso.*/

#include <stdio.h>
#define MULTA_DIARIA 0.005

int main(){
    int diasAtraso;
    float valorLoc = 10.00;

    printf("Quantos dias em atraso?\n");
    scanf("%d", &diasAtraso);

    if (diasAtraso>0){
        float valorMulta = (valorLoc + diasAtraso) * MULTA_DIARIA;
        printf("O valor da multa e de R$ %2.f", valorMulta);
    }
    else if(diasAtraso==0){
        printf("Ok, obrigado!");
    }
    
}