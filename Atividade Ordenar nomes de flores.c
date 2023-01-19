/*Utilizando  as variáveis flor1 e flor2, escreva um programa para ordenar os nomes de duas flores nas variáveis.*/

#include <stdio.h>
#include <string.h>

int main(){
    char flor1[6] = "Cravo";
    char flor2[6] = "Rosa";
    int aux[6];

    if(flor1 > flor2){ 
    strcpy(aux, flor1);
    strcpy(flor1, flor2);
    strcpy(flor2, aux);
    }
    
    printf("%s antecede %s", flor1, flor2);

    return 0;
}