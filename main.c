#include <stdio.h>
#include <stdlib.h>

#include "temperatura.h"
#include "comprimento.h"
#include "conversorarea.h"
#include "volume.h"
#include "Bytes.h"
#include "massa.h"
#include "tempo.h"
#include "velocidade.h"
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
            conversor_area();
            break;
        case 2:
            conversor_bytes();
            break;
        case 3:
            comprimento();
            break;
        case 4:
            converterMassa();
            break;
        case 5:
            converterTemperatura();
            break;
        case 6:
            converterTempo();
            break;
        case 7:
            converterVelocidade();
            break;
        case 8:
            converterVolume();
            break;
        case 9:
            printf("Saindo do programa. Até mais!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

        if (opcao != 9 && opcao != 5)
        {
            system("PAUSE");
        }

    } while (opcao != 9);

    return 0;
}
