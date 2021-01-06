#include <stdio.h>
#include "palavra.h"

// Esta usando estrutura de pilha

int main(void) {
  Palavra *my_stack = nova_palavra();
  
  adiciona(my_stack, 'A');
  adiciona(my_stack, 'B');
  
  char removido = backspace(my_stack);

  printf("%c\n", removido);

  adiciona(my_stack, 'C');
  adiciona(my_stack, 'D');
  
  printf("%c\n", backspace(my_stack));
  printf("%c\n", backspace(my_stack));
  printf("%c\n", backspace(my_stack));
  
  return 0;
}