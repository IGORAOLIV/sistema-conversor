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
    printf("1. Converter Comprimento\n");
    printf("2. Converter Massa\n");
    printf("3. Converter Volume\n");
    printf("4. Converter Temperatura\n");
    printf("5. Converter Velocidade\n");
    printf("6. Converter Bits & Bytes\n");
    printf("7. Converter Área\n");
    printf("8. Sair\n");
    printf("Sua escolha: ");

    scanf("%d", &escolha);

    return escolha;
}

#endif
