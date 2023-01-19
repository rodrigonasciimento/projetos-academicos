/*Problema: Determinar o valor da ajuda de custo
concedido por uma determinada empresa ao seus colaboradores, baseado na quantidade
de filhos com menos de 13 anos que possui.

Requisitos: Como gestor do departamento de pessoal eu
gostaria que o programa leia a quantidade de filho de um colaborador e, se
houver filhos, leia a idade de cada um deles e mostre o valor da ajuda de
custo.

Regras do negócio: Para cada filho com menor de 13 anos é concedido uma
ajuda de custo de R$ 100,00.

Recomendação: Utilizar a estrutura de repetição while para
receber as idades dos filhos.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define VALOR_AJUDA 100

int main ()
{

    int qntFilhos, idadeFilhos, cont;
    float menorTreze, ajudaCusto = 0;
    char possuiFilhos;

    qntFilhos = 0;
    cont = 1;
    menorTreze = 0;

    printf("O colaborador possui filhos? Digite 's' ou 'n'\n");
    scanf(" %c", &possuiFilhos);
    

    switch(possuiFilhos)
    {
        case 's':
            printf("O colaborador possui quantos filhos?\n");
            scanf(" %d", &qntFilhos);

            if(qntFilhos > cont){
                cont = qntFilhos;
            } else if(qntFilhos == 0){
              printf("Invalido!\n");
              exit(EXIT_FAILURE);
            }
            
            while (cont > 0){
            printf("Qual a idade do(s) seu(s) %d filho(s)?\n", qntFilhos);
            scanf("%d", &idadeFilhos);
            qntFilhos--;
            cont--;

            if(idadeFilhos < 13){
            menorTreze++;  

            }  

                       
            }         
            break;

            
        case 'n':
        printf("Obrigado pela sua resposta!\n");
        exit(EXIT_FAILURE);
            break;

        default:
        printf("Digite uma resposta valida\n");
        exit(EXIT_FAILURE);
            break;
    }

            ajudaCusto = menorTreze * VALOR_AJUDA;
            
            printf("O colaborador possui direito a ajuda de custo e recebera o valor de R$%2.f\n", ajudaCusto);

    return 0;
}