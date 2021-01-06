#include "palavra.h"
#include <stdlib.h>
#include <stdio.h>

void add_empty(Palavra *palavra, int data){
  Node *node = create_node(data);
  palavra->begin = node;
  palavra->end = node;
  palavra->size = 1;
}

Palavra* nova_palavra(){
  Palavra *palavra = malloc(sizeof(Palavra));
  palavra->size=0;
  palavra->begin=NULL;
  palavra->end = NULL;
  return palavra;
}

char backspace(Palavra *palavra){
  Node *aux = palavra->begin;
  char c= '0';
  if(palavra->size == 1) clear_stack(palavra);
  else {
    c = aux->data;
    palavra->begin = palavra->begin->next;
    palavra->size += 1;
  }
  return c;
}

void adiciona(Palavra *palavra, char data){
  if (palavra->begin == NULL){
    add_empty(palavra, data);
  }
  else {
    Node *node = create_node(data);
    node->next = palavra->begin;
    palavra->begin = node;
    palavra->size+=1;
  }
}

void clear_stack(Palavra *palavra){

  palavra->begin = NULL;
  palavra->end = NULL;
  palavra->size = 0;
}

void imprime (Palavra *palavra){

  //Palavra *p = palavra->begin;
  Node *n = palavra->begin;
  
  for (int i = 0; i < palavra->size; i++)
  {
    printf("%c" , n->data);
  }
  imprime(palavra->begin);
  
}


void imprime11(Palavra *palavra) {
    Node* n;

    printf("l -> ");

    for (n = palavra->begin; n; n = n->next) {
        printf("[%c]%s", n->data, n->next ? "->" : "¬");
    }

    printf("\n");
}