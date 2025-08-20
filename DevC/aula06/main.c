#include <stdio.h>
#include <stdlib.h>

int main()
{

    float base, altura;

    printf("Calculadora de perimetro de um retangulo em diferentes unidades de medida!\n");

    printf("Insira o valor da base em centimetros: ");
    scanf("%f", &base);

    printf("Insira o valor da altura em centimetros: ");
    scanf("%f", &altura);

    if (base <=0 || altura <= 0){
        printf ("Insira um valor valido");
    }
    else {
        float perimetro_c = (2*base) + (2*altura);
        float perimetro_p = perimetro_c * 0.3937;
        float perimetro_j = perimetro_c * 0.0109;

        printf("A medida do perimetro é de %.2f centimetros\n", perimetro_c);
        printf("A medida do perimetro é de %.2f polegadas\n", perimetro_p);
        printf("A medida do perimetro é de %.2f jardas\n", perimetro_j);
    }


}
