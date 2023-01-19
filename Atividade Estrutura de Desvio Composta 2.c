/*Uma loja fornece desconto de 10% para pagamento a vista e de 5% para outras formas
de pagamento.

Escreva um programa para receber:
- Valor da compra
- Forma de pagamento (1 = a vista; 2 = outras formas)

Mostrar:
- Valor original da compra
- Valor do desconto
- Valor a pagar*/

#include <stdio.h>
#define DESCONTO_PRAZO 0.05
#define DESCONTO_A_VISTA 0.1

int main()
{
    float valorCompra, valorDesconto, valorTotal;
    int forma;
    
    printf("Digite o valor bruto do produto: \n");
    scanf("%f", &valorCompra);
    
    printf("Qual a forma de pagamento?\n1 - A vista, 2 - Outras Formas\n");
    scanf("%d", &forma);
    
    if(forma==1)
    {
        float desconto = valorCompra * DESCONTO_A_VISTA;
        float valorTotal = valorCompra - desconto;
        printf("Total a ser pago à vista é de R$ %.2f", valorTotal);
    }
    if(forma==2)
    {
        float desconto2 = valorCompra * DESCONTO_PRAZO;
        float valorTotal = valorCompra - desconto2;
        printf("Total a ser pago com outras formas é de R$ %.2f", valorTotal);
    }
    if(forma!=1 && forma!=2) 
    {
        printf("Forma de Pagamento invalido!");
    }
    return 0;
}
