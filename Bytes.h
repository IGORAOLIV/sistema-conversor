#ifndef BYTES_H
#define BYTES_H

void converterUnidades(double valor, int unidadeOrigem, int unidadeDestino) {
    double resultado;

    if (unidadeOrigem == 1) {  // bits
        valor /= 8;  // bits para bytes
    } else if (unidadeOrigem == 2) {  // bytes
    
    } else if (unidadeOrigem == 3) {  // kilobytes
        valor *= 1024;  // kilobytes para bytes
    } else if (unidadeOrigem == 4) {  // megabytes
        valor *= 1024 * 1024;  // megabytes para bytes
    } else if (unidadeOrigem == 5) {  // gigabytes
        valor *= 1024 * 1024 * 1024;  // gigabytes para bytes
    } else if (unidadeOrigem == 6) {  // terabytes
        valor *= 1024 * 1024 * 1024 * 1024;  // terabytes para bytes
    }

    if (unidadeDestino == 1) {  // bits
        resultado = valor * 8;  // bytes para bits
    } else if (unidadeDestino == 2) {  // bytes
        resultado = valor;
    } else if (unidadeDestino == 3) {  // kilobytes
        resultado = valor / 1024;  // bytes para kilobytes
    } else if (unidadeDestino == 4) {  // megabytes
        resultado = valor / (1024 * 1024);  // bytes para megabytes
    } else if (unidadeDestino == 5) {  // gigabytes
        resultado = valor / (1024 * 1024 * 1024);  // bytes para gigabytes
    } else if (unidadeDestino == 6) {  // terabytes
        resultado = valor / (1024 * 1024 * 1024 * 1024);  // bytes para terabytes
    }

    printf("Resultado: %.2f ", resultado);
    switch (unidadeDestino) {
        case 1: printf("bits\n"); break;
        case 2: printf("bytes\n"); break;
        case 3: printf("kilobytes\n"); break;
        case 4: printf("megabytes\n"); break;
        case 5: printf("gigabytes\n"); break;
        case 6: printf("terabytes\n"); break;
    }
}

int conversor_bytes() {
    double valor;
    int unidadeOrigem, unidadeDestino;
    char resposta;

    do {
        printf("\n-----------------------------------------------\n");
        printf("\nDigite o valor: ");
        scanf("%lf", &valor);
        printf("\n-----------------------------------------------\n");
        printf("\nEscolha a unidade de origem:\n\n");
        printf("1 - bits\n2 - bytes\n3 - kilobytes\n4 - megabytes\n5 - gigabytes\n6 - terabytes\n\n");
        printf("Digite o numero da unidade de origem: ");
        scanf("%d", &unidadeOrigem);
        printf("\n-----------------------------------------------\n");
        printf("\nEscolha a unidade de destino:\n\n");
        printf("1 - bits\n2 - bytes\n3 - kilobytes\n4 - megabytes\n5 - gigabytes\n6 - terabytes\n\n");
        printf("Digite o numero da unidade de destino: ");
        scanf("%d", &unidadeDestino);
        printf("\n-----------------------------------------------\n");

        if (unidadeOrigem < 1 || unidadeOrigem > 6 || unidadeDestino < 1 || unidadeDestino > 6) {
            printf("Unidade invalida! As unidades validas sao entre 1 e 6.\n");
            return 1;
        }

        converterUnidades(valor, unidadeOrigem, unidadeDestino);

        printf("\n-----------------------------------------------\n");
        printf("\nGostaria de realizar outra conversao? (s/n): ");
        scanf(" %c", &resposta);  
        printf("\n\n");
    } while (resposta == 's' || resposta == 'S');  
    printf("\n-----------------------------------------------\n");
    printf("\nObrigado por usar o conversor! Ate a proxima.\n\n");
    return 0;
}


#endif
