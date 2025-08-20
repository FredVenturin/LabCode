#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, porcentagem, opcao, preco_f;
   printf("Calculadora de descontos ou acrescimos no preco de um produto!\n");

   printf("Insira o valor do preco do produto em reais: ");
   scanf("%f", &preco);

   printf("Insira a porcentagem que deseja acrescentar ou diminuir do preco do produto (numero de 0 a 100): ");
   scanf("%f", &porcentagem);

   printf("Escolha a opcao de acrescimo (escreva 1) ou a de decrescimo (escreva 2): ");
   scanf("%f", &opcao);

   if ((opcao != 1 && opcao != 2) || preco < 0 || porcentagem >100 || porcentagem < 0){
    printf("Por favor insira valores validos");
   }
   else {
    if ((opcao==1)){
        preco_f = preco + (preco * (porcentagem /100));
    }
    else if ((opcao == 2)){
        preco_f = preco - (preco * (porcentagem /100));
    }
    printf("O preco final e de R$ %2.f", preco_f);
   }



}
