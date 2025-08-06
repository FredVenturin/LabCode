#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
  float A,B,C;
  printf ("Calculadora de Hipotenusa (A): Catetos (B e C).\n");

  printf("Valor de B: ");
  scanf("%f",&B);

  printf("Valor de C: ");
  scanf("%f",&C);

  float B1 = pow(B,2);
  float C1 = pow(C,2);

  A = sqrt(B1 + C1);

  printf("A hipotenusa 'A' mede %.1f \n", A );

  return 0;

}

