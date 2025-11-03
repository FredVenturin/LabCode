#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float distanciaPeQ (float px,float qx,float py,float qy){

    float distancia;
    distancia = sqrt(pow(px-qx,2)+ pow(py-qy,2));
    return distancia;
}

int main()
{
    float a,b,c,d;
    int select;

    printf("\nInsira sua opcao do que deseja fazer.\n");
    printf("\n[1] Calcular distancia entre dois pontos no plano cartesiano.\n");
    printf("\n[0] Encerrar programa.\n");

    do {
        printf("\nInsira sua opcao: ");
        scanf("%i", &select);

        if (select ==0){
            printf("nObrigado por utilizar o programa, encerrando...n");
        }
        else if (select <0 || select >1){
            printf("\nInsira uma das opcoes!!!\n");
        } else {


            printf("\nInsira o valor de Px: ");
            scanf("%f", &a);
            printf("\nInsira o valor de Py: ");
            scanf("%f", &c);
            printf("\nInsira o valor de Qx: ");
            scanf("%f", &b);
            printf("\nInsira o valor de Qy: ");
            scanf("%f", &d);

            float resultado = distanciaPeQ(a,b,c,d);

            printf("\nO resultado e %.1f\n",resultado);
        }



    }while(select != 0);




    return 0;
}
