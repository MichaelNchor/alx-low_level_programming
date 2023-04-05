#include "lists.h"
#include <stdlib.h>
listint_t *add_nodeint(listint_t **head, const int n){
listint_t *curr;
if (head == NULL)
return (NULL);
curr = malloc(sizeof(listint_t));
if (curr == NULL)
return (NULL);
curr->n = n;
curr->next = *head;
*head = curr;
return (curr);
}
