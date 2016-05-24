#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main (int argc, char *argv[]){
    
    link list = NULL;
    list = appendNode(list, 1);
    list = appendNode(list, 2);
    list = appendNode(list, 3);
    list = appendNode(list, 4);

    printf("Original List\n");
    printList(list);
    printf("Reversed List\n");
    printList(reverseList(list));

    return 0;
}