#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000


int main()
{
    char str1[TAMANHO], str2[TAMANHO], aux[TAMANHO];
    unsigned t1,t2;

    printf("Palavra 1: ");
    scanf("\n%[^\n]", str1);
    printf("Palavra 2: ");
    scanf("\n%[^\n]", str2);

    t1 = strlen(str1);
    t2 = strlen(str2);

    if (t1 <2 || t2 <2){
        printf("Erro: inserir palavra maior");
    }
    else {
        strcpy(aux, str1);
        strcat(str1, "-");
        strcat(str1, str2);
        printf("strcat - str1 + str2: %s = str1: %s - str2: %s\n", str1,aux, str2 );


    }







    return 0;
}
