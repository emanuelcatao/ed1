#include <stdio.h>
#include "racional.h"

int main(void) {
  Racional* n1 = Racional_create(1, 2);
  Racional* n2 = Racional_create(3, 4);

  Racional_print(n1);
  Racional_print(n2);
  printf("Soma: ");
  Racional_print(Racional_soma(n1, n2));
  printf("Multiplicacao: ");
  Racional_print(Racional_mult(n1, n2));
  printf("Comparacao: ");
  bool x = Racional_iguais(n1, n2);
  fputs(x ? "true" : "false", stdout);
  return 0;
}