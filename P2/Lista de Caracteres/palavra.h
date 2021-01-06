#ifndef PALAVRA_H
#define PALAVRA_H

#include "node.h"

typedef struct {
  Node *begin;
  Node *end;
  int size;
}Palavra;


Palavra* nova_palavra();

void add_empty(Palavra *palavra, char data);

void add_begin(Palavra *palavra, char data);

void adiciona(Palavra *palavra, char data);

void imprimir(Palavra *palavra);

void delete_list(Palavra *palavra);

Node* get_node(Palavra *palavra, int index);

void clear_list(Palavra *palavra);

void remove_begin(Palavra *palavra);

void remove_end(Palavra *palavra);

void remove_index(Palavra *palavra, int index);

void remove_vogais(Palavra *palavra);

#endif