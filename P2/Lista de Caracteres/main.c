#include <stdio.h>
#include "palavra.h"

int main(void) {
  Palavra *p = nova_palavra();
  
  adiciona(p, 'A');
  adiciona(p, 'L');
  adiciona(p, 'G');
  adiciona(p, 'o');
  adiciona(p, 'R');
  adiciona(p, 'i');
  adiciona(p, 't');
  adiciona(p, 'm');
  adiciona(p, 'O');
  adiciona(p, 's');
  adiciona(p, '-');
  adiciona(p, 'E');
  adiciona(p, '-');
  adiciona(p, 'P');
  adiciona(p, 'R');
  adiciona(p, 'O');
  adiciona(p, 'G');
  adiciona(p, 'R');
  adiciona(p, 'a');
  adiciona(p, 'm');
  adiciona(p, 'A');
  adiciona(p, 'C');
  adiciona(p, 'a');
  adiciona(p, 'O');
  
 imprimir(p);

 remove_vogais(p);

 // imprimir(p);

  
  
  return 0;
}