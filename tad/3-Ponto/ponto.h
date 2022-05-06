#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;

/**
 * @brief Cria instâncias de ponto
 * 
 * @param x abscissa do ponto
 * @param y ordenada do ponto
 * @return Ponto* 
 */
Ponto* Ponto_create(float, float);

/**
 * @brief imprime um ponto
 * 
 * @param p ponto
 */
void Ponto_print(Ponto*);

/**
 * @brief atribui valores para as coordenadas de um ponto
 * 
 * @param ponto
 * @param float: x
 * @param float: y
 */
void Ponto_set(Ponto*, float, float);

/**
 * @brief getter para obter as coordenadas do ponto para as variaveis
 *
 * @param ponto
 * @param float*: variavel1
 * @param float*: variavel2
 */
void Ponto_get(Ponto*, float*, float*);


/**
 * @brief calcula a distancia euclidiana entre dois pontos para a variavel
 * passada no parametro
 * 
 * @param ponto1
 * @param ponto2
 * @param float*: variavel
 */
void distanciaEntrePontos(Ponto*, Ponto*, float*);

#endif