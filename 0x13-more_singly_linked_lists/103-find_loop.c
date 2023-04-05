#include "lists.h"
listint_t *find_listint_loop(listint_t *head){
listint_t *animals, *faster;
animals = faster = head;
while (animals && faster && faster->next){
animals =animals->next;
faster = faster->next->next;
if (animals == faster){
animals = head;
break;
}
}
if (!animals ||!faster || !faster->next)
return (NULL);
while (animals != faster)
{
animals = animals->next;
faster = faster->next;
}
return (faster);
}
