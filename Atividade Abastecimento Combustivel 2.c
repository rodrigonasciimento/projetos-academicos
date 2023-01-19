/*Um abastecimento de combustível foi realizado em três bombas (parte em gasolina, parte em etanol e parte em GNV).
Elabore um programa que leia os valores abastecidos de cada tipo de combustível e mostre o valor total do abastecimento*/

#include <stdio.h>

int main(void){

    float gasolina = 50;
    float etanol = 50; 
    float gnv = 30;
    float totalAbastecimento = gasolina+etanol+gnv;

    printf("O total abastecido por Gasolina foi de %2.f\n", gasolina);
    printf("O total abastecido por Etanol foi de %2.f\n", etanol);
    printf("O total abastecido por GNV foi de %2.f\n", gnv);
    printf("O total do abastecimento foi de %2.f", totalAbastecimento);

    return 0;
}