#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X,contador, quantidade = 0,soma;
    float media;
    printf("intervalo de numeros:\n");
    printf("escola um numero(X) para visualizar os numeros impares de um intervalo definido por X e X³: ");
    scanf("%i",&X);
        if (X<1){
            printf("insira um numero maior ou igual a 1");
        }
        else{
        for (contador = X; contador <= pow(X,3);contador += 1){
            if(contador % 2 != 0){
                quantidade++;
                printf("valor %i: %i\n" ,quantidade,contador);
                soma = soma+contador;

            }
        }
        media = soma/quantidade;
        printf("a soma e de %i\n",soma);
        printf("a media e de %.1f",media);
    }
}
