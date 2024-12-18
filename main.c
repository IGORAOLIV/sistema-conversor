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
            printf("Selecione a unidade inicial:\n");
            printf("1. Celsius\n");
            printf("2. Fahrenheit\n");
            printf("3. Kelvin\n");

            int inicial;
            scanf("%d", &inicial);

            float valor1, valor2;
            printf("Agora escreva o valor: ");
            scanf("%f", &valor1);


            int final;
            switch(inicial){
                case 1:
                    printf("Escolha para qual unidade deseja converter:\n");
                    printf("1. Fahrenheit\n");
                    printf("2. Kelvin\n");

                    scanf("%d", &final);

                    switch(final){
                        case 1:
                            valor2 = valor1*1.8 + 32;
                            printf("%.2fºC é equivalente a %.2fºF", valor1, valor2);
                            break;
                        case 2:
                            valor2 = valor1+273;
                            printf("%.2fºC é equivalente a %.2fºK", valor1, valor2);
                            break;
                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                    break;
                
                case 2:
                    printf("Escolha para qual unidade deseja converter:\n");
                    printf("1. Celsius\n");
                    printf("2. Kelvin\n");

                    scanf("%d", &final);

                    switch(final){
                        case 1:
                            valor2 = (valor1-32)/1.8;
                            printf("%.2fºF é equivalente a %.2fºC", valor1, valor2);
                            break;
                        case 2:
                            valor2 = (valor1-32)/1.8 + 273;
                            printf("%.2fºF é equivalente a %.2fºK", valor1, valor2);
                            break;
                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                    break;
                
                case 3:
                    printf("Escolha para qual unidade deseja converter:\n");
                    printf("1. Celsius\n");
                    printf("2. Fahrenheit\n");

                    scanf("%d", &final);

                    switch(final){
                        case 1:
                            valor2 = valor1 - 273;
                            printf("%.2fºK é equivalente a %.2fºC", valor1, valor2);
                            break;
                        case 2:
                            valor2 = (valor1 - 273)*1.8 + 32;
                            printf("%.2fºK é equivalente a %.2fºF", valor1, valor2);
                            break;
                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                    break;
                default:
                    printf("Opção inválida. Tente novamente.\n");
            }

            break;
        
        case 5:
            printf("Saindo do programa. Até mais!\n");
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
