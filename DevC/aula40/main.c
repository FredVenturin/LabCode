#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 100
#define QUANTIDADE 5

int main()
{
    char palavra[TAMANHO], menorPalavra[TAMANHO], maiorPalavra[TAMANHO];
    unsigned t1,t2,t3, contador = 0;
    int Flag = 0;


    do{
        printf("Insira a palavra 1: ");
        scanf(" \n%[^\n]", palavra);
        t1 = strlen(palavra);
        if (t1 < 2){

            printf("Insira uma palavra valida (acima de um caracter).\n");
            Flag = 0;

        } else {

            strcpy(maiorPalavra, palavra);
            strcpy(menorPalavra, palavra);
            Flag = 1;

            contador = 1;}

    }while(Flag == 0);


    while (contador < QUANTIDADE){

        printf("Insira a palavra %i: ", contador +1);
        scanf("\n%[^\n]", palavra);

        t1 = strlen(palavra);

        t2 = strlen(maiorPalavra);

        t3 = strlen(menorPalavra);
       if(t1 < 2){
            printf("Insira uma palavra valida (acima de um caracter).\n");
            continue;
        }

        if (t1 > t2){
            strcpy(maiorPalavra, palavra);

        }

        else if (t1 < t3) {
            strcpy(menorPalavra, palavra);

        }


        contador++;

    }

    printf("A maior palavra e %s\n", maiorPalavra);
    printf("A menor palavra e %s", menorPalavra);


    return 0;
}
