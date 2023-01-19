/*Os ingressos para um evento foram classificados em 3 grupos: Normal, estudante e acessível.
Elabore um programa para ler a quantidade de ingressos vendidos para cada um dos grupos e mostre o público total.*/

#include <stdio.h>

int main(void) {
  int normal = 200;
  int estudante = 300;
  int acessivel = 200;
  
  int publicoTotal = normal + estudante + acessivel;

  printf("O público Normal foi de %d\n O público de Estudante foi de %d\n O público de Acessível foi de %d\n", normal, estudante, acessivel);
  
  printf("O público total do evento foi de %d pessoas", publicoTotal);
  
  return 0;
}