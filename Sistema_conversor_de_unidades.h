#ifndef Sistema_conversor_de_unidades_H
#define Sistema_conversor_de_unidades_H

#include <stdio.h>

void conversor_de_unidades_SI()
{

    int valor, escolha;

    switch (escolha)
    {
    case 1:
    {
        printf("%.2fmetros = %.2f centímetros\n", valor, valor * 100);
        break;
    }

    case 2:

    {
        printf("%.2fmetros = %.2f milimetros\n", valor, valor * 1000);
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
