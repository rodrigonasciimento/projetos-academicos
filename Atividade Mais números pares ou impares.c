/*Escreva um programa para receber 5 número positivos. 
No final mostrar ser foi digitado mais números pares ou mais números impares.*/

#include <stdio.h>

int main(void){

    int num, cont;
    int numPar = 0;
    int numImpar = 0;
    

    for(cont = 1; cont <= 5; cont++){
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    
    if(num < 0){
        printf("Invalido, digite um valor inteiro!\n");
        cont--;
    }
    
    else if(num % 2 == 0){
        numPar++;
    } 
    else{
        numImpar++;
    }
    }if(numPar > numImpar){
        printf("Foram digitados mais numeros pares!");
    } else
    {
       printf("Foram digitados mais numeros impares!");
    }

    return 0;
}