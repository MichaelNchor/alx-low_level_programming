#include "lists.h"
int sum_listint(listint_t *head){
int totalsum = 0;
while (head != NULL){
totalsum += head->n;
head = head->next;
}
return (totalsum);
}

