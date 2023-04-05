#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index){
unsigned int search;
if(head==NULL)
return (NULL);
for(search = 0; search < index; search++){
head=head->next;
if(head == NULL)
return (NULL);
}
return (head);
}
