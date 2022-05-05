#include "racional.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct _racional{
  int num, den;
};

Racional* Racional_create(int num, int den){
  Racional* novo = malloc(sizeof(Racional));
  if(novo != NULL){
    novo->num = num;
    novo->den = den;
  }
  return novo;
}

void Racional_print(Racional* frac){
  printf("(%d/%d)\n", frac->num, frac->den);
}

Racional* Racional_soma(Racional* num1, Racional* num2) {
  Racional* soma = Racional_create(-1,-1);
  int numerador, denominador;

  denominador = num1->den * num2->den;
  numerador = (num1->num * num2->den) + (num1->den * num2->num);
  if(soma != NULL){
    soma->num = numerador;
    soma->den = denominador;
  }
  return soma; 
}

Racional* Racional_mult(Racional* num1, Racional* num2) {
  Racional *mult = Racional_create(-1,-1);
  int numerador, denominador;

  denominador = num1->den * num2->den;
  numerador = (num1->num * num2->num);
  if(mult != NULL){
    mult->num = numerador;
    mult->den = denominador;
  }
  return mult; 
}

bool Racional_iguais(Racional* num1, Racional* num2){
  if(num1->den == num2->den && num1->num == num2->num){ return true; }
  else if((num1->num / num1->den) == (num2->num / num2->den)){ return true; }
  else { return false; }
}

