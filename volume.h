#ifndef VOLUME_H
#define VOLUME_H

void converterVolume(){
    printf("=============== Conversor de Volume ===============\n");
    printf("Escolha a opção correspondente a sua conversão: \n");
    printf("1. Litros para Mililitros\n");
    printf("2. Litros para Metros Cubicos\n");
    printf("3. Mililitros para Litros\n");
    printf("4. Mililitros para Metros Cubicos\n");
    printf("5. Metros Cubicos para Litros\n");
    printf("6. Metros cubicos para Mililitros\n");

    //Leitura da opção do usuario
    int opcao;
    scanf("%d", &opcao);

    //Solicitação dos valores para conversao e leitura do valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    double valor1, valor2;
    scanf("%lf", &valor1);

    // Processamento da opção escolhida para a conversão
    switch (opcao)
    {
        //converter Litro para mililitro
    case 1:
    {
        valor2 = valor1 * 1000;
        printf("%.2f Litros = %.2f Mililitros\n", valor1, valor2);

        break;
    }
        
    //converter Litro para Metros Cubicos
    case 2:
    {
        valor2 = valor1 / 1000;
        printf("%.2f Litros = %.2f Metros Cubicos\n", valor1, valor2);
        break;  
    }

    //converter Mililitro para Litro   
    case 3:
    {
        valor2 = valor1 / 1000;
        printf("%.2f Mililitros = %.2f Litros\n", valor1, valor2);
        break;  
    }

    //converter Mililitro para Metros Cubicos
    case 4:
    {
        valor2 = valor1 / 1000000;
        printf("%.2f Mililitros = %.6f Metros Cubicos\n", valor1, valor2);
        break;  
    }

    //converter Metros Cubicos para Litro
    case 5:
    {
        valor2 = valor1 * 1000;
        printf("%.2f Metros Cubicos = %2f Litros\n", valor1, valor2);
        break;  
    }

    //converter Metros Cubicos para Mililitro
    case 6:
    {
        valor2 = valor1 * 1000000;
        printf("%2f Metros Cubicos = %.2f Mililitros\n");
        break;  
    }

    //Em caso de escolha de numeros diferentes das opções listadas
    default:
    printf("OPÇÃO INVALIDA! POR FAVOR, ESCOLHA UMA OPÇÃO ENTRE 1 E 6.\n");
    }
}

#endif