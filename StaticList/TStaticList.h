#ifndef TSTATICLIST_H
#define TSTATICLIST_H

typedef struct static_list TStaticList;

TStaticList* TStaticList_create();

void TStaticList_destroy(TStaticList*);

/**
 * @brief insere um elemento do tipo inteiro no fim da lista.
 * 
 * @param TStaticList* ponteiro para a lista;
 * @param int : dado a ser inserido;
 * 
 * @return int : 1 em caso de sucesso e 0 em caso de falha
 */
int TStaticList_insert(TStaticList*, int);
 
/**
 * @brief Imprime os elementos de uma lista
 * 
 * @param TStaticList* ponteiro para a lista;
 */
void TStaticList_print(TStaticList*);

#endif