#include "lists.h"
#include <stdlib.h>
listint_t *add_nodeint_end(listint_t **head, const int n){
listint_t *curr, *end;
curr = malloc(sizeof(listint_t));
if (curr == NULL)
return (NULL);
curr->n = n;
curr->next = NULL;
if (*head == NULL)
*head = curr;
else{
end = *head;
while (end->next != NULL)
end = end->next;
end->next = curr;
}
return (*head);
}
