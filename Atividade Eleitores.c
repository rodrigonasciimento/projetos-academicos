/*Dado um vetor com a  idade de 10 pessoas, mostre:
Quantos são eleitores obrigatório
Quantos são eleitores opcionais
Quantos não são eleitores*/

#include <stdio.h>

int main(){

    int idade[10] = {18, 23, 22, 31, 24, 30, 80, 9,56,30};
    int eleObrigatorio = 0;
    int eleOpcional = 0;
    int naoEle = 0;
    int i;  

    for(i = 1; i <= 10; i++){
        
        if(idade[i] < 16){
            naoEle++;
        }
        if((idade[i] >=16 && idade[i] < 18) || idade[i] >= 70){
            eleOpcional++;
        }
        if(idade[i] > 18 && idade[i] < 70){
            eleObrigatorio++;
        }

    }

    printf("Temos %d eleitores que tem obrigatoriedade\n", eleObrigatorio);
    printf("Temos %d eleitores que nao tem obrigatoriedade para votar\n", eleOpcional);
    printf("Temos %d que nao sao eleitores\n", naoEle);
      
    return 0;
}