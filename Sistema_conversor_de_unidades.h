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
        metros_para_centimetros(valor);
        break;
    case 2:
        metros_para_quilometros(valor);
        break;
    case 3:
        quilometros_para_metros(valor);
        break;
    default:
        printf("Escolha inválida!\n");
    }

    switch (escolha)
    {
    case 1:
    {
        printf("%.2fmetros = %.2f centímetros\n", valor, valor * 100);
        break;
    }

    case 2:

    {
        printf("%.2fmetros = %.2f milímetros\n", valor, valor * 1000);
        break;
    }
    case 3:

    {
        printf("%.2fcentímetros  = %.2fmetros\n", valor, valor / 100);
        break;
    }

    default:
        break;
    }
}

#endif
