#include <stdio.h>
#include "tempo.h"

void converterTempo(){ 

    int escolha;
    double valor;
    
       printf("Conversor de Unidades de Tempo\n");
       printf("1. Horas para Minutos\n");
       printf("2. Horas para Segundos\n");
       printf("3. Minutos para Horas\n");
       printf("4. Minutos para Segundos\n");
       printf("5. Segundos para Horas\n");
       printf("6. Segundos para Minutos\n");
       printf("Escolha uma conversão (1-6): ");
       scanf("%d", &escolha);
       printf("Digite o valor para converter: ");
       scanf("%lf", &valor);
