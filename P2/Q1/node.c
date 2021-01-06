#include "node.h"
#include <stdlib.h>

Node* create_node(char data){
  Node* node = malloc(sizeof(Node));

  node->data= data;
  
  node->next = NULL;

  return node;
}
