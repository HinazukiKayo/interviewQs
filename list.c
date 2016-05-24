#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

link createNode (int value){
   link node = malloc(sizeof(link));
   assert(node != NULL);
   node -> data = value;
   node -> next = NULL;
   return node; 
}

link appendNode (link list, int value){
   link curr = list;
   link head = list;
   link newNode = createNode(value);
   if (curr == NULL){
      return newNode;
   }
   while (curr -> next != NULL){
      curr = curr -> next;
   }
   curr -> next = newNode; 
   return head; 
}

link reverseList (link list) {
    link curr = list;
    link prev = NULL;
    link temp = NULL;
    while (curr != NULL){
       temp = curr;
       curr = curr -> next;
       temp -> next = prev;
       prev = temp;
    }
    return temp;
}

void printList (link list){
   link curr = list;
   while (curr != NULL){
      printf("%d -> ", curr -> data);
      curr = curr -> next;
   }
   printf("X\n");
}