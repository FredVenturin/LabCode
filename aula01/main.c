#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numeroP(int numero){

    int contador, soma = 1;

    if (numero == 1){
        return 1;
    }
    for (contador = 2; contador <= numero /2; contador++){
        if (numero % contador == 0){
            soma+= contador;
        }
    }
    if (soma == numero){
        return 1;
    } else {
        return 0;
    }

}



int main()
{
    int select;

    printf("\nInsira sua opcao do que deseja fazer.\n");
    printf("\n[1] Descobrir se um numero e perfeito.\n");
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

            int numero;
            printf("\nSelecione um numero: ");
            scanf("%i",&numero);

            int check = numeroP(numero);

            if (check == 1){
                printf("O numero e perfeito!");
            }
            else {
                printf("O numero nao e perfeito");
            }

        }



    }while(select != 0);




    return 0;
}
