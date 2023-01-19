/* Escreva um programa para receber um número positivo e mostrar todos os números pares de 0 até o número recebido.*/

#include <stdio.h>

int main(){

    int num, cont;

    cont = 0;

    printf("Digite um numero positivo: \n");
    scanf("%d", &num);

    for(cont = 0; cont <= num; cont+=2){
        printf("%d ", cont);
    }
    
    return 0;
}