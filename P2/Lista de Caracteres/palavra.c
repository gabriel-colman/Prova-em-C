#include "palavra.h"
#include <stdlib.h>
#include <stdio.h>


Palavra* nova_palavra(){
  Palavra *palavra = malloc(sizeof(Palavra));
  palavra->size=0;
  palavra->begin=NULL;
  palavra->end = NULL;
  return palavra;
}

void add_empty(Palavra *palavra, char data){
  Node *node = create_node(data);
  palavra->begin = node;
  palavra->end = node;
  palavra->size = 1;
}

void add_begin(Palavra *palavra, char data){
  if (palavra->begin == NULL){
    add_empty(palavra, data);
  }
  else {
    Node *node = create_node(data);
    node->next=palavra->begin;
    palavra->begin=node;
    palavra->size+=1;
  }
}

void adiciona(Palavra *palavra, char data){
  if (palavra->begin == NULL){
    add_empty(palavra, data);
  }
  else {
    Node *node = create_node(data);
    palavra->end->next = node;
    palavra->end = node;
    palavra->size+=1;
  }
}


void imprimir(Palavra *palavra){
  Node *aux = palavra->begin;
  while (aux != NULL){
    printf("%c ", aux->data);
    aux = aux->next;
  }
  printf("\n");
}

void delete_list(Palavra *palavra){
  Node *aux = palavra->begin;
  while (aux != NULL){
    Node *tmp = aux;
    aux = aux->next;
    free(tmp);
  }
  free(palavra);
}

Node* get_node(Palavra *palavra, int index){
  Node *aux = palavra->begin;
  int i=0;
  while (aux != NULL){
    if (i == index) 
    return aux;
    aux = aux->next;
    i++;
  }
  return NULL;
}

void clear_list(Palavra *palavra){

  palavra->begin = NULL;
  palavra->end = NULL;
  palavra->size = 0;
}


void remove_begin(Palavra *palavra){
  if (palavra->size == 1) {
    clear_list(palavra);
  }
  else {
    //guardar o nó a ser removido, para que a memória seja liberada
    Node *n = palavra->begin;
    //Atualizar o início da lista
    palavra->begin = (palavra->begin)->next; 
    //Decrementar o tamanho da lista
    palavra->size = palavra->size -1;
    //Liberar a memória
    free(n);
  }
}

void remove_end(Palavra *palavra){
  if (palavra->size == 1) {
    clear_list(palavra);
    
  }
  else {
    Node *n = get_node(palavra, palavra->size-2);
    Node *aux = n->next;
    n->next = NULL;
    palavra->end = n;
    free(aux);
    palavra->size = palavra->size -1;
  }
  
}

void remove_index(Palavra *palavra, char index){
  if (index == 0){
    remove_begin(palavra);
  }
  else if (index == palavra->size-1){
    remove_end(palavra);
  }
  else {
    Node *n = get_node(palavra, index-1);
    Node *aux = n->next;

    n->next = aux->next;
    palavra->size -= 1;
    free(aux);
  }

}

void remove_vogais(Palavra *palavra){

 
  Node *n = palavra->begin;

  char a = 'A';
  
while(n != NULL){
     if (n->data == 'A')
     {
         remove_end(palavra->begin);
     }
     
 }
      Node* n;

    printf("l -> ");

    for (n = palavra->begin; n; n = n->next) {
        printf("aa");
    }

    
        n = n->next;
          
  }
  /*

void remove_vogais(Palavra *palavra){

 
  Node *n = palavra->begin;

  char a = 'A';
  
//while(n != NULL){
  //   if (n->data == a) {
       //remove_end();
  //}
    // }
    //Na teoria é excluir pulando o nó apontando outro
     for (n = palavra->begin; n; n = n->next) {
      
      //  int cont = 0;
          if(n->data =='A'){
           Node *o = get_node(palavra, 0);
           Node *aux = o->next;
             o->next = aux;
           
            palavra->size -= 1;
            free(aux);
          }
          
          
           //if (n->data == 'A') {
             
             // n->data = n->next;//so com esse da certo
             
                
              //palavra->size -= 1;
             // free(aux);
           //}
  //  cont++;        
           
 }
  
}
     
          
  
  

  */