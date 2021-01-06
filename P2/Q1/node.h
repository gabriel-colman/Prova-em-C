#ifndef NODE_H
#define NODE_H

struct Node_Struct {
  char data;
  struct Node_Struct *next;
};

typedef struct Node_Struct Node;

Node* create_node(char data);



#endif