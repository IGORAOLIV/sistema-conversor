//arquivo para definir função converterTemperatura()
#ifndef TEMPERATURA_H
#define TEMPERATURA_H

void converterTemperatura(){    //função para converter a temperatura que o usuário dá para temperatura que o usuário quer
    //Usuário dá uma unidade de temperatura
    printf("Selecione a unidade inicial:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");

    int inicial, final;
    scanf("%d", &inicial);

    //-----------------------------------------------
    //Usuário indica o valor
    printf("Agora digite o valor: ");
    float valor1, valor2;
    scanf("%f", &valor1);

    //-----------------------------------------------
    //A partir daqui o usuário escolhe qual a unidade que deseja
    printf("Agora escolha a unidade que deseja:\n");
    switch(inicial){
        case 1:
            printf("1. Fahrenheit\n");
            printf("2. Kelvin\n");

            scanf("%d", &final);

            switch(final){
                //Conversão Celsius para...
                case 1:
                    //...Fahrenheit
                    valor2 = valor1 * 1.8 + 32;
                    printf("%.2fºC é equivalente a %.2fºF\n", valor1, valor2);
                    break;

                case 2:
                    //...Kelvin
                    valor2 = valor1 + 273;
                    printf("%.2fºC é equivalente a %.2fºK\n", valor1, valor2);
                    break;
                        
                default:
                    printf("Opção inválida. Tente novamente.\n");
            }
            break;

        case 2:
            printf("1. Celsius\n");
            printf("2. Kelvin\n");

            scanf("%d", &final);

            switch(final){
                //Conversão Fahrenheit para...
                case 1:
                    //...Celsius
                    valor2 = (valor1-32)/1.8;
                    printf("%.2fºF é equivalente a %.2fºC\n", valor1, valor2);
                    break;

                case 2:
                    //...Kelvin
                    valor2 = (valor1-32)/1.8 + 273;
                    printf("%.2fºF é equivalente a %.2fºK\n", valor1, valor2);
                    break;
                        
                default:
                    printf("Opção inválida. Tente novamente.\n");
            }
            break;
                
        case 3:
            printf("1. Celsius\n");
            printf("2. Fahrenheit\n");

            scanf("%d", &final);

            switch(final){
                //Conversão Kelvin para...
                case 1:
                    //...Celsius
                    valor2 = valor1 - 273;
                    printf("%.2fºK é equivalente a %.2fºC\n", valor1, valor2);
                    break;

                case 2:
                    //...Fahrenheit
                    valor2 = (valor1 - 273)*1.8 + 32;
                    printf("%.2fºK é equivalente a %.2fºF\n", valor1, valor2);
                    break;
                        
                default:
                    printf("Opção inválida. Tente novamente.\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }
    printf("\n\n");
    return;
}

#endif