#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
listint_t **_ra(listint_t **list, size_t size, listint_t *new){
listint_t **newlist;
size_t i;
newlist = malloc(size * sizeof(listint_t *));
if (newlist == NULL){
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
newlist[i] = list[i];
newlist[i] = new;
free(list);
return (newlist);
}
size_t free_listint_safe(listint_t **head){
size_t i, item = 0;
listint_t **list = NULL;
listint_t *next;
if (head == NULL || *head == NULL)
return (item);
while (*head != NULL){
for (i = 0; i < item; i++)
{
if (*head == list[i])
{
*head = NULL;
free(list);
return (item);
}
}
item=item+1
list = _ra(list, item, *head);
next = (*head)->next;
free(*head);
*head = next;
}
free(list);
return (item);
}
