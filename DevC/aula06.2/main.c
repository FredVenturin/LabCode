#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, p_ideal;
    int genero;
    printf("Calculadora de peso ideal!\n");

    printf("Informe sua altura em metros: ");
    scanf("%f", &h);

    printf("Informe seu genero (1 para homem e 2 para mulher): ");
    scanf("%i", &genero);

    if (genero != 1 && genero != 2 || h <= 0){
        printf("Insira valores validos");
    }
    else {
        if (genero == 1){
           p_ideal = (72.7 *h) - 58;
        }
        else if (genero == 2){
           p_ideal = (62.1*h) - 44.7;
        }
     printf("O peso ideal em kg para voce e de %.2f", p_ideal );
    }



}
