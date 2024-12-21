//arquivo para definir função converterTemperatura()
#ifndef TEMPERATURA_H
#define TEMPERATURA_H

void converterTemperatura(){    //Função para converter a temperatura que o usuário dá para temperatura que o usuário quer
    
    int inicial, final, loop1 = 1, loop2 = 1;
    float valor1, valor2;
    while(loop1){   //O while(loop1) serve para criar a opção de "4.Voltar"
        //Usuário dá uma unidade de temperatura
        printf("Selecione a unidade inicial:\n");
        printf("1. Celsius\n");
        printf("2. Fahrenheit\n");
        printf("3. Kelvin\n");
        printf("4. Voltar\n");
        scanf("%d", &inicial);

        switch(inicial){
            case 1:
                //-----------------------------------------------
                //Usuário indica o valor
                printf("Agora digite o valor: ");
                scanf("%f", &valor1);


                while(loop2){   //O while(loop2) serve para criar a opção de "3.Voltar"
                    //-----------------------------------------------
                    //A partir daqui o usuário escolhe qual a unidade que deseja
                    printf("Agora escolha a unidade que deseja:\n");
                    printf("1. Fahrenheit\n");
                    printf("2. Kelvin\n");
                    printf("3. Voltar\n");
                    scanf("%d", &final);

                
                    switch(final){
                        //Conversão Celsius para...
                        case 1:
                            //...Fahrenheit
                            valor2 = valor1 * 1.8 + 32;
                            printf("%.2fºC é equivalente a %.2fºF\n", valor1, valor2);

                            //-----------------------------------------------
                            //Permite que a execução retorne à interface principal
                            loop1 = 0;
                            loop2 = 0;
                            break;

                        case 2:
                            //...Kelvin
                            valor2 = valor1 + 273;
                            printf("%.2fºC é equivalente a %.2fºK\n", valor1, valor2);

                            //-----------------------------------------------
                            //Permite que a execução retorne à interface principal
                            loop1 = 0;
                            loop2 = 0;
                            break;

                        case 3:
                            loop2 = 0;
                            break;
                        
                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                }
                //-----------------------------------------------
                //Caso o usuário retorne durante a seleção de final, loop2 = 1 permite que while(loop2) seja executado novamente caso necessário
                loop2 = 1;
                break;

            case 2:
                //-----------------------------------------------
                //Usuário indica o valor
                printf("Agora digite o valor: ");
                scanf("%f", &valor1);

                while(loop2){   //O while(loop2) serve para criar a opção de "3.Voltar"
                    //-----------------------------------------------
                    //A partir daqui o usuário escolhe qual a unidade que deseja
                    printf("Agora escolha a unidade que deseja:\n");
                    printf("1. Celsius\n");
                    printf("2. Kelvin\n");
                    printf("3. Voltar\n");
                    scanf("%d", &final);

                    switch(final){
                        //Conversão Fahrenheit para...
                        case 1:
                            //...Celsius
                            valor2 = (valor1-32)/1.8;
                            printf("%.2fºF é equivalente a %.2fºC\n", valor1, valor2);

                            //-----------------------------------------------
                            //Permite que a execução retorne à interface principal
                            loop1 = 0;
                            loop2 = 0;
                            break;

                        case 2:
                            //...Kelvin
                            valor2 = (valor1-32)/1.8 + 273;
                            printf("%.2fºF é equivalente a %.2fºK\n", valor1, valor2);

                            //-----------------------------------------------
                            //Permite que a execução retorne à interface principal
                            loop1 = 0;
                            loop2 = 0;
                            break;
                        
                        case 3:
                            loop2 = 0;
                            break;

                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                }
                //-----------------------------------------------
                //Caso o usuário retorne durante a seleção de final, loop2 = 1 permite que while(loop2) seja executado novamente caso necessário
                loop2 = 1;
                break;
                
            case 3:
                //-----------------------------------------------
                //Usuário indica o valor
                printf("Agora digite o valor: ");
                scanf("%f", &valor1);


                while(loop2){   //O while(loop2) serve para criar a opção de "3.Voltar"
                    //-----------------------------------------------
                    //A partir daqui o usuário escolhe qual a unidade que deseja
                    printf("Agora escolha a unidade que deseja:\n");
                    printf("1. Celsius\n");
                    printf("2. Fahrenheit\n");
                    printf("3. Voltar\n");
                    scanf("%d", &final);

                    switch(final){
                        //Conversão Kelvin para...
                        case 1:
                            //...Celsius
                            valor2 = valor1 - 273;
                            printf("%.2fºK é equivalente a %.2fºC\n", valor1, valor2);

                            //-----------------------------------------------
                            //Permite que a execução retorne à interface principal
                            loop1 = 0;
                            loop2 = 0;
                            break;

                        case 2:
                            //...Fahrenheit
                            valor2 = (valor1 - 273)*1.8 + 32;
                            printf("%.2fºK é equivalente a %.2fºF\n", valor1, valor2);

                            //-----------------------------------------------
                            //Permite que a execução retorne à interface principal
                            loop1 = 0;
                            loop2 = 0;
                            break;
                        
                        case 3:
                            loop2 = 0;
                            break;

                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                }
                //-----------------------------------------------
                //Caso o usuário retorne durante a seleção de final, loop2 = 1 permite que while(loop2) seja executado novamente caso necessário
                loop2 = 1;
                break;
                
            case 4:
                loop1 = 0;
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
    printf("\n\n");
    return;
}

#endif