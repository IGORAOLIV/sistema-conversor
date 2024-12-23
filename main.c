#include <stdio.h>
#include <stdlib.h>

#include "temperatura.h"
#include "comprimento.h"

#include "menu.h"

// Função principal
int main()
{

    system("chcp 65001 > NULL");


    int opcao;
    do
    {

        opcao = menu();

        switch (opcao)
        {
        case 1:
            printf("Funcionalidade de área será implementada aqui.\n");
            break;
        case 2:
            printf("Funcionalidade de bytes será implementada aqui.\n");
            break;
        case 3:
            comprimento();
            break;
        case 4:
            printf("Funcionalidade de massa será implementada aqui.\n");
            break;
        case 5:
            converterTemperatura();
            break;
        case 6:
            printf("Funcionalidade de tempo será implementada aqui.\n");
            break;
        case 7:
            printf("Funcionalidade de velocidade será implementada aqui.\n");
            break;
        case 8:
            printf("Funcionalidade de volume será implementada aqui.\n");
            break;
        case 9:
            printf("Saindo do programa. Até mais!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

        if (opcao != 9)
        {
            system("PAUSE");
        }

    } while (opcao != 9);

    return 0;
}
