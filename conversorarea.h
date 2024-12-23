#include <stdio.h>

void mtocm (){ //função conversor metro quadrado para centimetro quadrado
    double valor, resultado;
    printf("Digite o valor em metros quadrados: ");
                scanf("%lf", &valor);
                resultado = valor * 10000; // 1 m² = 10.000 cm²
                printf("%.2lf metros quadrados equivalem a %.2lf centimetros quadrados.\n\n", valor, resultado); 
}


void cmtom (){ //função conversor centimetro quadrado para metro quadrado
    double valor, resultado;
    printf("Digite o valor em centimetros quadrados: ");
                scanf("%lf", &valor);
                resultado = valor / 10000; // 1 cm² = 0,0001 m²
                printf("%.2lf metros quadrados equivalem a %.2lf centimetros quadrados.\n\n", valor, resultado); 
}


void mtokm(){ //função conversor metro quadrado para quilometro quadrado
    double valor, resultado;
     printf("Digite o valor em metros quadrados: ");
                scanf("%lf", &valor);
                resultado = valor / 100000; // 1 m² = 0,000001 km²
                printf("%.2lf metros quadrados equivalem a %.2lf quilometros quadrados.\n\n", valor, resultado);
}


void kmtom(){ //função conversor quilometro quadrado para metro quadrado
    double valor, resultado;
    printf("Digite o valor em quilometros quadrados: ");
                scanf("%lf", &valor);
                resultado = valor * 100000; // 1 km² = 1000000 m²
                printf("%.2lf quilometros quadrados equivalem a %.2lf metros quadrados.\n\n", valor, resultado);
}

void menu() { //função menu para seleção de conversão
    printf("Bem-vindo ao Conversor de Area!\n");
    printf("Escolha a conversao:\n");
    printf("1. Metros quadrados para Centimetros quadrados\n");
    printf("2. Centimetros quadrados para Metros quadrados\n");
    printf("3. Metros quadrados para Quilometros quadrados\n");
    printf("4. Quilometros quadrados para Metros quadrados\n");
    printf("5. Sair\n");
    printf("Digite sua escolha: ");
}

int conversor_area() {
    int escolha;

    do {
        menu();
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                mtocm();
                break;
            case 2:
                cmtom();
                break;
            case 3:
               mtokm();
               break;
            case 4:
                kmtom();
                 break;
            case 5:
                printf("Obrigado por usar o Conversor de Area!\n");
                break;
            default:
                printf("Invalido. Por favor, escolha novamente.\n\n");
                break;
        }
    } while (escolha != 5);

    return 0;
}
 