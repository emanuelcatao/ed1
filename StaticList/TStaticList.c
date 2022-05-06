#include "TStaticList.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX 10

struct static_list{
    int qty;
    int data[MAX];
};

/**
 * @brief verifica se a lista está cheia
 * 
 * @param TStaticList*: lista a ser verificada
 * @return int 
 */
int TStaticList_is_full(TStaticList*);

TStaticList* TStaticList_create() {
    TStaticList* novo = malloc(sizeof(TStaticList));
    if(novo != NULL) {
        novo->qty = 0;
    }
}

int TStaticList_insert(TStaticList* lista, int dado) {
    if(TStaticList_is_full(lista)) return 0;
    
    lista->data[lista->qty] = dado;
    lista->qty++;
    return 1;
}

int TStaticList_is_full(TStaticList* lista) {
    return (lista->qty == MAX);
}

void TStaticList_print(TStaticList* lista) {
    for(int i=0; i<lista->qty; i++)
        printf("[%d], ", lista->data[i]);
    putchar('\n');
}