#include "lists.h"
#include <stdio.h>
size_t print_listint(const listint_t *h){
size_t nodes = 0;
while (h != NULL){
printf("%d\n", h->n);
h=h->next;
nodes=nodes+1;
}
return (nodes);
}