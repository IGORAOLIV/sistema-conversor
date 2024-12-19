#include <stdio.h>
#include "temperatura.c"

// Função principal
int main() {
    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Selecione uma opção para começar:\n");
    // Exemplo de opções (a serem implementadas)
    printf("1. Converter Comprimento\n");
    printf("2. Converter Massa\n");
    printf("3. Converter Volume\n");
    printf("4. Converter Temperatura\n");
    printf("5. Sair\n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Funcionalidade de comprimento será implementada aqui.\n");
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
            printf("Saindo do programa. Até mais!\n");
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
