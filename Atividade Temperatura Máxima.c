/*Escreva um programa para receber a temperatura máxima em cada um dos dia de uma semana.
 No final mostrar o nome do dia da semana que teve a maior temperatura.
Observações:
Considerar que não houveram dias da semana com a mesma temperatura máxima.
O sistema deverá funcionar para qualquer região do planeta.
1 = domingo, 2 = segunda, ... 7 = sábado*/

#include <stdio.h>

int main (){

    int diaSemana;
    int temperatura = 0;
    int temperaturaMaxima;
    int i;

    for(i = 1; i <= 7; i++){
    printf("Digite a temperatura do dia %d: ", i);
    scanf("%d", &temperatura);

    if (temperatura > temperaturaMaxima){
        temperaturaMaxima = temperatura;
        diaSemana = i;
    } 
  
    }
    switch (diaSemana)
    {
    case 1:
        printf("O dia mais quente da semana foi Domingo!", temperaturaMaxima);
        break;
    case 2: 
        printf("O dia mais quente da semana foi Segunda-Feira!", temperaturaMaxima);
        break;
    case 3: 
        printf("O dia mais quente da semana foi Terça-Feira!", temperaturaMaxima);
        break;
    case 4: 
        printf("O dia mais quente da semana foi Quarta-Feira!", temperaturaMaxima);
        break;
    case 5: 
        printf("O dia mais quente da semana foi Quinta-Feira!", temperaturaMaxima);
        break;
    case 6: 
        printf("O dia mais quente da semana foi Sexta-Feira!", temperaturaMaxima);
        break;
    case 7: 
        printf("O dia mais quente da semana foi Sábado!", temperaturaMaxima);
        break;
    default:
        break;
    }
    return 0;
}