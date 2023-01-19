/*Escreva um programa para receber um
número inteiro e mostrar se o número recebido é Positivo
ou Negativo.*/

#include <stdio.h>

int main(){

    int numeroDigitado;

    printf("Digite um numero: \n");
    scanf("%d", &numeroDigitado);

    if(numeroDigitado>0){
        printf("O numero que voce digitou e positivo");
    }
        else{
        printf("O numero que voce digitou e negativo");
    }

}