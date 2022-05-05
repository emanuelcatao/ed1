#ifndef RACIONAL_H
#define RACIONAL_H
#include <stdbool.h>

typedef struct _racional Racional;
/**
* Cria instâncias de números Racionais
* @param: (int) numerador
* @param: (int) denominador
* @return: (Racional*) uma instância válida de um número racional.
*/
Racional* Racional_create(int, int);

/**
* Imprime números racionais
* @param: (Racional*) Instância válida de um número racional.
*/
void Racional_print(Racional*);

/**
* Soma dois números racionais
* @param: (Racional*) Instância válida de um número racional.
* @param: (Racional*) Instância válida de um número racional.
* @return: (Racional*) Instância válida com a soma de duas frações.
*/
Racional* Racional_soma(Racional*, Racional*);

/**
* Multiplicação de dois números racionais
* @param: (Racional*) Instância válida de um número racional.
* @param: (Racional*) Instância válida de um número racional.
* @return: (Racional*) Instância válida com a multiplicação de duas frações.
*/
Racional* Racional_mult(Racional*, Racional*);

/**
* Verifica se dois números racionais são iguais.
* @param: (Racional*) Instância válida de um número racional.
* @param: (Racional*) Instância válida de um número racional.
* @return: (Racional*) Instância válida com a multiplicação de duas frações.
*/
bool Racional_iguais(Racional*, Racional*);

#endif