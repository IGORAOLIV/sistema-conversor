#include <stdio.h>

// Função principal
int main() {
    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Selecione uma opção para começar:\n");
    // Exemplo de opções (a serem implementadas)
    printf("1. Converter Comprimento\n");
    printf("2. Converter Massa\n");
    printf("3. Converter Volume\n");
    printf("4. Converter Temperatura\n");
    printf("5. Converter Velocidade\n");
    printf("6. Converter Bits & Bytes\n");
    printf("7. Converter Área\n");
    printf("8. Sair\n");

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
            printf("Funcionalidade de temperatura será implementada aqui.\n");
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
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }
    return 0;
}
