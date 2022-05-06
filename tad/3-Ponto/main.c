#include "ponto.h"
#include <stdio.h>

int main() {
    Ponto* p1;
    float x, y;

    p1 = Ponto_create(2.5, 6);
    Ponto_print(p1);

    Ponto_get(p1, &x, &y);
    printf("\nx = %f y = %f\n", x, y);

    Ponto_set(p1, 1, 0);
    Ponto_print(p1);
    Ponto* p2 = Ponto_create(1, 6);

    distanciaEntrePontos(p1, p2, &x);
    printf("\nA distancia eh: %f\n", x);

    return 0;
}