#ifndef Sistema_conversor_de_unidades_H
#define Sistema_conversor_de_unidades_H

#include <stdio.h>

void conversor_de_unidades_SI()
{
    int escolha;
    double valor;

    printf("Conversor de Unidades\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("Escolha uma conversão (1-3): ");
    scanf("%d", &escolha);

    printf("Digite o valor para converter: ");
    scanf("%lf", &valor);

    switch (escolha)
    {
    case 1:
    {
        printf("%.2f metros = %.2f centímetros\n", valor, valor * 100);
        break;
    }

    case 2:

    {
        printf("%.2f metros = %.2f milímetros\n", valor, valor * 1000);
        break;
    }
    case 3:

    {
        printf("%.2f centímetros  = %.2fmetros\n", valor, valor / 100);
        break;
    }

    default:
        break;
    }
}

#endif
