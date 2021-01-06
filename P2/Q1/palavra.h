#ifndef PALAVRA_H
#define PALAVRA_H

#include "node.h"

typedef struct {
  Node *begin;
  Node *end;
  int size;
}Palavra;


Palavra* nova_palavra();

//add_end
void adiciona(Palavra *palavra, char c);

//remove_end
char backspace(Palavra *palavra);

Node* get_node(Palavra *palavra, int index);

void clear_stack(Palavra *palavra);

void add_empty(Palavra *palavra, int data);

//Node * imprime(Palavra *palavra);
void imprime(Palavra *palavra);

#endif