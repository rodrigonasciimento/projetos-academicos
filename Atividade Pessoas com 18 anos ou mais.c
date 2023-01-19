/*Escreva um programa para receber a idade de 5 pessoas e mostrar:
a quantidade de pessoas com 18 anos ou mais
a idade média
a idade da pessoa mais idosa
a idade da pessoa mais nova
Fazer crítica para não aceitar idade negativa nem idade maior que 150 anos*/

#include <stdio.h>
int main(){

    int cont = 1;
    int idade;
    int contm18 = 0;
    int totalIdades = 0;
    int maiorIdade = 0;
    int menorIdade = 151;

    do{
        printf("Idade: ");
            scanf("%d", &idade);
            cont++;

            if(idade < 0 || idade>150){
            printf("Idade invalida! Digite de 0 a 150\n");
            cont--;
        }
        
    if(idade >= 18){
    contm18 = contm18 + 1;
    } totalIdades = totalIdades + idade;
    if(idade > maiorIdade){
    maiorIdade = idade;
    }
    if(idade < menorIdade){
    menorIdade = idade;
    }
        //cont = cont + 1;
    } while(cont <=  5);
    printf("\nPessoas com 18 anos ou mais: %d", contm18);
    float media = totalIdades/5;
    printf("\nMedia: %.3f", media);
    printf("\nMaior idade: %d", maiorIdade);
    printf("\nMenor idade: %d", menorIdade);

    return 0;
    }