#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;

typedef struct node {
   int data;
   link next;
} node;

link createNode (int value);
link appendNode (link list, int value);
link reverseList (link list);
void printList (link list);