#include "TStaticList.h"
#include <stdio.h>

int main() {
    TStaticList* lista = TStaticList_create();

    int V[] = {2, 3, 4, 1, 6, 7, 8, 9, 10, 12, 15};

    for(int i=0; i<11; i++)
        if (!TStaticList_insert(lista, V[i]))
            printf("Nao consegui inserir o V[%d] = %d\n", i, V[i]);

    TStaticList_print(lista);
    return 0;
}