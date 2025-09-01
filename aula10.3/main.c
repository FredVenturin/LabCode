#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fulano = 0, beltrano = 0, cicrano = 0, voto,moradores = 0;
    float pfulano,pbeltrano,pcicrano;
    printf("votacao para sindico:\n");
    printf("menu dos candidatos\n");
    printf("1-fulano\n2-beltrano\n3-cicrano\n");
    while(moradores<5){
        printf("voto do morador %i: ",moradores);
        scanf("%i",&voto);
        if(voto < 0 || voto > 3)
            printf("escolha um numero que esteja disponivel");
        else{
            if(voto==1)
                fulano++;
            else if (voto==2)
                beltrano++;
            else {
                cicrano++;
            }
            moradores++;
            pfulano = 100.0 * fulano/moradores;
            pbeltrano = 100.0 * beltrano/moradores;
            pcicrano = 100.0 * cicrano/moradores;
            printf("resultado:\n");
            printf("votos de fulano: %i (%.2f %%)\n",fulano, pfulano);
            printf("votos de beltrano: %i (%.2f %%)\n",beltrano, pbeltrano);
            printf("votos de cicrano: %i (%.2f %%)\n",cicrano, pcicrano);


    }

    }
}
