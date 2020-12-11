/**
 * @file readinput.h
 * @brief Contém as assinaturas dos métodos de leitura do arquivo input.txt
*/

#ifndef readinput
#define readinput
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double value; // valor do parametro passado
    char name[21]; // Identificador do parametro.
} varTxt;

void readInputTxt(FILE *input, varTxt *parametersValues); // Lê o arquivo input.txt e armazena os valores no vetor inputVar

#endif
