#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cubo1 (float L, float * area, float *volume);

void cubo1 (float L, float * area, float *volume){
    *area = 6*pow(L,2);
    *volume = pow(L,3);

}


int main()
{
    int contador = 0;
    float L, area,volume;

    while (contador <100){
        printf("\nDados do cubo %i:\n", contador +1);
        printf("\nValor do lado (L > 0): ");
        scanf("%f", &L);

        if (L<= 0){
            printf("ERRO");
        } else {
            printf("Dados de saida:\n");
            cubo1(L, &area, &volume);
            printf("Area: %.1f metros quadrados.\n", area);
            printf("volume: %.1f metros cubicos.\n",volume);
            contador++;

        }


    }


    return 0;
}
