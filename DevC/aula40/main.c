#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO     100
#define QUANTIDADE    5

int main() {

    char palavra[TAMANHO], maiorPalavra[TAMANHO], menorPalavra[TAMANHO];
    int contador = 0;
    unsigned t1;
    

    while (contador < QUANTIDADE) {

        printf("\nInsira a palavra %i: ", contador + 1);
        scanf("\n%[^\n]", palavra);

        t1 = strlen(palavra);
        

        if (t1 < 2) {
            printf("\nInsira uma palavra com mais de 2 caracteres.\n");
            continue;
        }
        if (contador == 0){
            
            strcpy(maiorPalavra, palavra);
            strcpy(menorPalavra, palavra);
            
        } else {
            
            if (t1 > strlen(maiorPalavra)) {
                strcpy(maiorPalavra, palavra);
            } else if (t1 < strlen(menorPalavra)) {
                strcpy(menorPalavra, palavra);
            }            
        }
        
        contador++;
        
    }

    printf("\nA maior palavra e %s\n", maiorPalavra);
    printf("\nA menor palavra e %s\n", menorPalavra);

    return 0;
}
