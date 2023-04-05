#include "lists.h"
#include <stdio.h>
size_t listint_len(const listint_t *h){
size_t nodes = 0;
while (h != NULL){
nodes=nodes+1;
h = h->next;
}
return (nodes);
}
