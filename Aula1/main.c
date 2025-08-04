#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N1, N2;
    printf("mini calculadora de inteiros: N1 e N2\n");

    printf("valor de N1: ");
    scanf("%i", &N1);

    printf("valor de N2: ");
    scanf("%i", &N2);

    printf("adicao: N1 + N2 = %i + %i = %i\n", N1, N2, N1+N2);
    printf("subtracao: N1 - N2 = %i - %i = %i\n", N1, N2, N1-N2);
    printf("multiplicacao: N1 * N2 = %i * %i = %i\n", N1, N2, N1*N2);
    printf("divisao: N1 / N2 = %i / %i = %i\n", N1, N2, N1/N2);
    return 0;
}
