#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SM 1518.01
int main()
{
    float salario, media, soma = 0;
    int quantidade = 0;

    printf("pesquisa salarial: \n");

    while(quantidade < 5){
        printf("aluno %i - salario (>= R$ %.2f): ",quantidade+1, SM);
        scanf("%f",&salario);
        if(salario<SM)
            printf("erro: escolha de novo.\n");

        else {
            soma+=salario;
            quantidade++;
        }
    }
    media = soma/quantidade;
    printf("a media final  de %.2f", media);
}
