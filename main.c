#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
  float A,B,C;
  printf ("Calculadora de Hipotenusa (A): Catetos (B e C).\n");

  printf("Valor de B: \n");
  scanf("%f",&B);

  printf("Valor de C: \n");
  scanf("%f",&C);

  float B1 = pow(B,2);
  float C1 = pow(C,2);

  A = pow(B1 + C1, 1.0/2);

  printf("A hipotenusa 'A' mede %.1f \n", A );

  return 0;

}
