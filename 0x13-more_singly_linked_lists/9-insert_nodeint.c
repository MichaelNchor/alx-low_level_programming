#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n){
unsigned int node;
listint_t *current, *new;
if (head == NULL)
return (NULL);
if (idx != 0)
{
curr_item = *head;
for (node = 0; node < idx - 1 && curr_item != NULL; node++){
curr_item = curr_item->next;
}
if (curr_item == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0){
new->next = *head;
*head = new;
return (new);
}
new->next = curr_item->next;
curr_item->next=new;
return (new);
}

