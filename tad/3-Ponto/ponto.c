#include "ponto.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    float x, y;
};

Ponto* Ponto_create(float x, float y) {
    Ponto* novo = malloc(sizeof(Ponto));

    if(novo) {
        novo->x = x;
        novo->y = y; 
    }

    return novo;  
}

void Ponto_print(Ponto* p) {
    if(p != NULL) {
        printf("(%0.2f, %0.2f)", p->x, p->y);
    }
}

void Ponto_set(Ponto* ponto, float x, float y) {
    if(ponto != NULL) {
        ponto->x = x;
        ponto->y = y; 
    }
}

void Ponto_get(Ponto* ponto, float* x, float* y) {
    if(ponto != NULL) {
        *x = ponto->x;
        *y = ponto->y; 
    }
}

void distanciaEntrePontos(Ponto* p1, Ponto* p2, float* distancia) {
    float d = 0;
    if(p1 != NULL && p2 != NULL) {
        d = sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
        *distancia = d;
    }
}