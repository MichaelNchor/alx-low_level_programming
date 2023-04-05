#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new){
const listint_t **newlist;
size_t i;
newlist = malloc(size * sizeof(listint_t *));
if(newlist == NULL){
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
newlist[i] = list[i];
newlist[i] = new;
free(list);
	return (newlist);
}
size_t print_listint_safe(const listint_t *top){
	size_t i, num = 0;
	const listint_t **list = NULL;
	while (top != NULL){
		for (i = 0; i < num; i++)
{
if (top == list[i])
			{
				printf("-> [%p] %d\n", (void *)top, top->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, top);
		printf("[%p] %d\n", (void *)top, top->n);
		top = top->next;
	}
	free(list);
	return (num);
}
