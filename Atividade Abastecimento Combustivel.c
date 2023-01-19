/*Um abastecimento de combustível foi realizado em três bombas (parte em gasolina, parte em etanol e parte em GNV*). 
O posto cobra R$ 5,45 por litro de gasolina, R$ 4,37 por litro de etanol e R$ 2,259 por metro cúbico do GNV.
Elabore um programa que leia a quantidade de litros abastecidos de cada tipo de combustível
e mostre o valor do abastecimento de  cada tipo de combustível.*/

#include <stdio.h>
#define GASOLINA 5.45
#define ETANOL 4.37
#define GNV 2.259

int main(void){
    float gasolina, etanol, gnv;
    printf("Quantos litros foram abastecidos em gasolina?\n");
    scanf("%f", &gasolina);
    printf("Quantos litros foram abastecidos em etanol?\n");
    scanf("%f", &etanol);
    printf("Qauntos em metros cubido foram abastecido em GNV?\n");
    scanf("%f", &gnv);

    float qtdGaso = GASOLINA * gasolina;
    float qtdEtan = ETANOL * etanol;
    float qtdGnv = GNV * gnv;

    printf("O valor do abastecimento de Gasolina foi de %f litros\n", qtdGaso);
    printf("O valor do abastecimento de Etanol foi de %f litros\n", qtdEtan);
    printf("O valor do abastecimento de GNV foi de %fm³", qtdGnv);    

    return 0;
}