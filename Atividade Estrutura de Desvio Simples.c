/*Escreva um programa para receber dois números inteiros em duas variáveis.
Se o primeiro número for maior que o segundo número, trocar os valores das variáveis para que
o menor número esteja na primeira variável.
Mostre as duas variáveis e verifique se o resultado é o esperado.
Faça o teste unitário do programa pelo menos duas vezes.

1o teste:
Primeiro número: 5
Segundo número: 8
Como o primeiro número não é menor que o segundo
número, não é necessário trocar o conteúdo das variáveis, ao
mostrar o primeiro número e o segundo número devem
parecer: 5 e 8.

2o teste:
Primeiro número: 8
Segundo número: 5
Como o primeiro número é maior que o segundo número, é
necessário trocar o conteúdo das variáveis. Ao mostrar o
primeiro número e o segundo número devem parecer: 5 e 8*/

#include <stdio.h>

int main(){

    int primeiroNumero, segundoNumero;

    printf("Digite o primeiro numero: \n");
    scanf("%d", primeiroNumero);

    printf("Digite o segundo numero: \n");
    scanf("%d", segundoNumero);

    if(primeiroNumero > segundoNumero){
        primeiroNumero = primeiroNumero + segundoNumero;
        segundoNumero = primeiroNumero - segundoNumero;
        primeiroNumero = primeiroNumero - segundoNumero;
    }
    
    printf("O primeiro numero é %d \n", primeiroNumero);
    printf("O segundo numero é %d \n", segundoNumero);

}