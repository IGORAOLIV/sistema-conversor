#include <stdio.h>
#include "volume.h"

//Menu para solicitação de escolha de Volume indicado para conversão do Volume escolhido

void converterVolume(){
    printf("=============== Conversor de Volume ===============\n");
    printf("Escolha a opção correspondente a sua conversão: ");
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
        

    case 2:
    {
      break;  
    }
        
    case 3:
    {
      break;  
    }
    case 4:
    {
      break;  
    }

    case 5:
    {
      break;  
    }
    case 6:
    {
      break;  
    }
    default:
    printf("OPÇÃO INVALIDA! POR FAVOR, ESCOLHA UMA OPÇÃO ENTRE 1 E 6.\n");
        break;
    }


}