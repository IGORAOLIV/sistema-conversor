//arquivo para definir função converterTempo()
#ifndef TEMPO_H
#define TEMPO_H
 
void converterTempo() {
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

    if (escolha < 1 || escolha > 6) {
        printf("Opção inválida. Por favor, escolha um número entre 1 e 6.\n");
        return;
    }

    printf("Digite o valor para converter: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1:
            printf("%.2f horas = %.2f minutos\n", valor, valor * 60);
            break;
        case 2:
            printf("%.2f horas = %.2f segundos\n", valor, valor * 3600);
            break;
        case 3:
            printf("%.2f minutos = %.2f horas\n", valor, valor / 60);
            break;
        case 4:
            printf("%.2f minutos = %.2f segundos\n", valor, valor * 60);
            break;
        case 5:
            printf("%.2f segundos = %.2f horas\n", valor, valor / 3600);
            break;
        case 6:
            printf("%.2f segundos = %.2f minutos\n", valor, valor / 60);
            break;
        default:
            printf("Opção inválida.\n");
    }
}

#endif
