/*Escreva um programa para receber um número inteiro e mostrar se o número recebido é
par ou impar.
Dica: Todo número par quando dividido por 2 resta 0.*/

#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Digite um numero:\n");
    scanf("%d", &num);
    
    if (num%2 == 0)
    {
        printf("O numero digitado e par");
    }
     else
        printf("O numero digitado e impar");
    
    return 0;
}

