#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int escolha;

    system("cls");

    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Selecione uma opção para começar:\n");
    printf("1. Converter Área\n");
    printf("2. Converter Bits & Bytes\n");
    printf("3. Converter Comprimento\n");
    printf("4. Converter Massa\n");
    printf("5. Converter Temperatura\n");
    printf("6. Converter Tempo\n");
    printf("7. Converter Velocidade\n");
    printf("8. Converter Volume\n");
    printf("9. Sair\n");
    printf("Sua escolha: ");

    scanf("%d", &escolha);

    return escolha;
}

#endif
