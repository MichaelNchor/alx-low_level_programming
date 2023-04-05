#include "lists.h"
listint_t *reverse_listint(listint_t **head){
listint_t *old, *next;
if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
old = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = old;
old = *head;
*head = next;
}
*head =old;
return (*head);
}
