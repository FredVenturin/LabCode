#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int n);
int arranjo(int N, int K);
int combinacao(int N, int K);

int fat(int N) {
    int resultado = 1;

    if (N == 0 || N == 1) {
        return 1;
    }
    else if (N < 0) {
        printf("Insira valor positivo.");
        return -1;
    }
    else {
        for (int i = 2; i <= N; i++) {
            resultado = resultado * i;
        }
        return resultado;
    }
}

int arranjo(int N, int K) {
    int A;
    A = fat(N) / fat(N - K);
    return A;
}

int combinacao(int N, int K) {
    int C;
    C = arranjo(N, K) / fat(K);
    return C;
}

int main() {
    int N, K, A, C, resultado;
    int select;

    printf("\n[1] Utilizar funcoes matematicas de analise combinatoria.\n");
    printf("\n[0] Encerrar programa.");

    do {
        printf("\nOpcao: ");
        scanf("%i", &select);

        if (select == 0) {
            printf("\nObrigado por utilizar o programa, encerrando...\n");
        }
        else if (select < 0 || select > 1) {
            printf("\nInsira uma das opcoes!!!\n");
        }
        else {
            printf("\nInsira os valores de N >= 0 e K >= 0: \n");
            printf("\nN: ");
            scanf("%i", &N);
            printf("\nK: ");
            scanf("%i", &K);

            if (N < 0 || K < 0) {
                printf("\nERRO, N e K devem ser maiores que 0\n");
            }
            else {
                printf("\nResultados de saida.\n");

                resultado = fat(N);
                printf("\nFatorial(%i): %i\n", N, resultado);

                A = arranjo(N, K);
                printf("\nArranjo(%i,%i): %i\n", N, K, A);

                C = combinacao(N, K);
                printf("\nCombinacao(%i,%i): %i\n", N, K, C);
            }
        }
    } while (select != 0);

    return 0;
}
