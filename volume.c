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
    

}