/* Escreva um programa para receber um número e mostrar todos os números do número recebido até 0.*/

#include <stdio.h>

int main(){

    int num, cont;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for(cont = num; cont >= 0; cont--){
        printf("%d ", cont);
    }
    
    return 0;
}