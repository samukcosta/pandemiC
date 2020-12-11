/**
 * @file writeoutput.h
 * @brief Contém as assinaturas dos métodos de escrita no arquivo output.csv
*/

#ifndef writeoutput
#define writeoutput
#include <stdio.h>
#include <stdlib.h>

#include "readinput.h"

/**
 * @brief Escreve os 3 cenarios calculados no arquivo .csv de saida
 * @param cenarios Array com os 3 cenários cenários da simulação
 * @param output É o ponteiro para o arquivo csv de saída
 * @param t Quantidade de iterações usado para percorrer os arrays
 */

void writeOutput(double ***cenarios, FILE *Output, int t, varTxt *inputVar);

#endif
