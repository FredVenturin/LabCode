#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int atletas = 0, tempo;
    int matricula, matriculaVencedor;
    float tempoVencedor = INFINITY;
    int matriculaLanterna;
    float tempoLanterna = -INFINITY;
    printf("Dez milhas garoto: \n");
    while (atletas < 5){
        printf("Atleta %i: tempo : ", atletas +1);
        scanf("%i", &tempo);
        printf("matricula(XXXXX): ");
        scanf("%i", &matricula);

        if (tempo<= 0){
            printf("Erro, insira um valor valido.");
        }
        else if (matricula<10000|| matricula>100000){
            printf("Erro, insira um valor valido.");
        }
        else {
            if (tempo <tempoVencedor){
                tempoVencedor = tempo;
                matriculaVencedor = matricula;
            }
            if (tempo >tempoLanterna){
                tempoLanterna = tempo;
                matriculaLanterna = matricula;
            }
            atletas++;
        }
    }
    printf("Resultados da corrida: \n");
    printf("Dados do vencedor: \n");
    printf("tempo: %.0f\n", tempoVencedor);
    printf("matricula: %i\n", matriculaVencedor);
    printf("Dados do lanterna: \n");
    printf("tempo: %.0f\n", tempoLanterna);
    printf("matricula: %i\n", matriculaLanterna);
}
