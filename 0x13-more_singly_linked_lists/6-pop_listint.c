#include "lists.h"
#include <stdlib.h>
int pop_listint(listint_t **head){
listint_t *top;
int i;
if (*head == NULL)
return (0);
top = *head;
i = (*head)->n;
*head = (*head)->next;
free(top);
return (i);
}
