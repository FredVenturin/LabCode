#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000

void contadorLetras (char texto[TAMANHO], int *Q1, int *Q2);

void contadorLetras (char texto[TAMANHO], int *Q1, int *Q2){
    int indice = 0;

    *Q1 = 0;
    *Q2 = 0;

    while (texto[indice] != '\0'){
        if (texto[indice] >= 'a' && texto[indice] <= 'z'){
            (*Q1)++;
        } else if (texto[indice] >= 'A' && texto[indice] <= 'Z'){
            (*Q2)++;
        }
        indice++;
    }


}



int main()
{
    char texto[TAMANHO];
    int Q1,Q2;

    do {
        printf("\nentre com um texto qualquer: ");
        scanf("\n%[^\n]",texto);

        if (strcmp(texto, "SAIR") == 0 || strcmp(texto, "sair") == 0){
            printf("\nObrigado por utilizar o programa, encerrando...\n");
        } else {
            contadorLetras(texto,&Q1,&Q2);
            printf("\nTexto: %s\n", texto);
            printf("nQuantidade de letras minusculas: %i\n", Q1);
            printf("\nQuantidade de letras maiusculas: %i\n", Q2);

        }

    }while (strcmp(texto, "SAIR") != 0 && strcmp(texto, "sair") != 0);







    return 0;
}
