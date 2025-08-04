#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    printf("divisao: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1/N2);
    printf("quociente: N1 div N2 = %i / %i = %i\n", N1, N2, N1/N2);
    printf("resto: N1 mod N2 = %i %% %i = %i\n", N1, N2, N1%N2);
    printf("potenciacao: N1 elevado N2 = %i elevado %i = %.1f\n", N1, N2, pow(N1, N2));
    printf("raiz: N1 raiz N2 = %i raiz %.1f = %.1f\n", N1, 1.0 / N2, pow(N1, 1.0 / N2));

    return 0;
}
