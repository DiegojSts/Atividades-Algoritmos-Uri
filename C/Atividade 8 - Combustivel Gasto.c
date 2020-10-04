#include <stdio.h>



int main(){
	
int hora, minuto, velocidade, tViagem, lUsados;

     printf("Informe o tempo gasto na viagem hora/minuto : \n");
     printf("Exemplo: 2 30\n");
     scanf("%d %d", &hora, &minuto);
     printf("Informe a velocidade media: \n");
     scanf("%d", &velocidade);
     
    tViagem = hora + minuto * velocidade;
    lUsados = tViagem / 12;
    
    printf("Velocidade media: %d\n", velocidade);
    printf("Tempo gasto na viagem: %dh %dmin\n", hora, minuto);
    printf("Litros Usados: %d\n", lUsados);
    printf("Distancia percorrida: %d\n", tViagem);
    
    
    
}
