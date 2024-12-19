#include <stdio.h>

void metros_para_centimetros(double metros) {
    printf("%.2f metros = %.2f centímetros\n", metros, metros * 100);
}

void metros_para_quilometros(double metros) {
    printf("%.2f metros = %.2f quilômetros\n", metros, metros / 1000);
}

void quilometros_para_metros(double quilometros) {
    printf("%.2f quilômetros = %.2f metros\n", quilometros, quilometros * 1000);
}

int main() {
    int escolha;
    double valor;

    printf("Conversor de Unidades\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Quilômetros\n");
    printf("3. Quilômetros para Metros\n");
    printf("Escolha uma conversão (1-3): ");
    scanf("%d", &escolha);

    printf("Digite o valor para converter: ");
    scanf("%lf", &valor);

    switch (escolha) {
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

    return 0;
}
