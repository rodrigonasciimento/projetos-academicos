/*Escreva um programa para receber a quantidade de alunos que frequentaram as aulas em uma determinada semana
(segunda a sexta).

Mostrar:
Total de alunos
Frequência média
Maior frequência
Menor frequência
Número do dia da semana que teve maior frequência
Número do dia da semana que teve menor frequência*/

#include <stdio.h>

    
int main(){
int diaSemana[5];
int i, total, maiorFrequencia, menorFrequencia, maiorDiaSemana, menorDiaSemana;

total = 0;
maiorFrequencia = 0;
maiorDiaSemana = 0;
menorFrequencia = 0;
menorDiaSemana = 0;

for(i = 1 ; i < 5 ; i++){
    printf("Quantos alunos vieram no dia %d? ", i);
    scanf("%d",&diaSemana[i]);
    menorFrequencia = diaSemana[0];
    total = total + diaSemana[i];

    if(diaSemana[i] > maiorFrequencia){
        maiorFrequencia = diaSemana[i];
        maiorDiaSemana = i + 1;       
    }
    if(diaSemana[i] < menorFrequencia){
        menorFrequencia = diaSemana[i];
       menorDiaSemana = i + 1;
        
    }
}
printf("\n");
printf("Frequencia media = %d\n", total / 5);
printf("\n");
printf("Maior frequencia por dia = %d alunos\n", maiorFrequencia);
printf("Menor frequencia por dia = %d alunos\n", menorFrequencia);
printf("\n");
printf("Dia da semana com maior frequencia = %d\n", maiorDiaSemana);
printf("Dia da semana com menor frequencia = %d\n", menorDiaSemana);

    return 0;

}