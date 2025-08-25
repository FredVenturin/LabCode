#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double B1,B2,PF,media;
    printf("Insira sua nota do primeiro bimestre: ");
    scanf("%lf",&B1);
    printf("Insira sua nota do segundo bimestre: ");
    scanf("%lf",&B2);

    if(B1 < 0 || B1 > 10 || B2 < 0 || B2 > 10){
        printf("ERRO, insira algum valor possivel.");
    }
    else {
        media = (B1 + B2)/2;
        media = round(media * 10) / 10.0;
        printf("Media: %.2lf\n", media);
        if (media <3.0){
            printf("Status: Reprovado ");
        }
        else if (media <7){
            printf("Voce caiu para a prova final\n");
            printf("Insira sua nota da prova final: ");
            scanf("%lf",&PF);
            if(PF < 0 || PF > 10){
               printf("ERRO, insira algum valor possivel.");
            }
            else {
                if(PF <5){
                    printf("Status: Reprovado ");
                }
                else {
                    printf("Status: Aprovado");
                }
            }
        }
        else {
            printf("Status: Aprovado");
        }


    }

}
