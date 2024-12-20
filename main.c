#include <stdio.h>
#include "temperatura.c"
#include "comprimento.h"
#include "menu.h"

// Função principal
int main() {
    int opcao = menu();
    while(opcao!=8){
     
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                comprimento();
                break;
            case 2:
                printf("Funcionalidade de massa será implementada aqui.\n");
                break;
            case 3:
                printf("Funcionalidade de volume será implementada aqui.\n");
                break;
            case 4:
                converterTemperatura();
                break;
            case 5:
                printf("Funcionalidade de velocidade será implementada aqui.\n");
                break;
            case 6:
                printf("Funcionalidade de bits & bytes será implementada aqui.\n");
                break;
            case 7:
                printf("Funcionalidade de área será implementada aqui.\n");
                break;
            case 8:
                printf("Saindo do programa. Até mais!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
            }
    }
    return 0;
}
