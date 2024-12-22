#include <stdio.h>

// Função que converte litro para mililitro

double litro_para_mililitros(double litros) {
    return litros * 1000.0;
}
//Função que converte litros para metodos cubicos

double litros_para_metrosCubicos(double litros) {
    return litros / 1000.0;
}

//Função que converte mililitros para litros

double mililitros_para_litros(double mililitros) {
    return mililitros / 1000.0;
}

//Função que converte mililitros em metros cubicos

double mililitros_para_metros_cubicos(double mililitros) {
    return mililitros / 1000000.0;
}

//Função para converter metros cubicos para litros

double metros_cubicos_para_litros(double metros_cubicos) {
    return metros_cubicos * 1000.0;
}

//Função para converter metros cubicos em mililitros

double metros_cubicos_para_mililitros(double metros_cubicos) {
    return metros_cubicos * 1000000.0;
}
