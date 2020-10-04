#include <stdio.h>

int main()
{
    float tempoDeViagem, kmPorHora;
    float gasolinaNecessaria;
    
    scanf("%f %f", &tempoDeViagem, &kmPorHora);
    
    gasolinaNecessaria = (tempoDeViagem*kmPorHora/12);
    
    printf("%.3f\n", gasolinaNecessaria);

    return 0;
}
