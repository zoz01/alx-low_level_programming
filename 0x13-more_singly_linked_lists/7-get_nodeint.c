#include "lists.h"

/**
 * get_nodeint_at_index - the keuiy govu ogiy
 * @head: the keuiy govu ogiy
 * @index: the keuiy govu ogiy
 * Return: the keuiy govu ogiy
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *cursor = NULL;
unsigned int i = 0;

while (head != NULL)
{
if (i <= index)
{
if (i == index)
{
cursor = head;
break;
}
head = head->next;
i++;
}
else
return (NULL);
}
return (cursor);
}
