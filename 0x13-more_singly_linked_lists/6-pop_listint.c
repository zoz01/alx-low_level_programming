#include "lists.h"

/**
 * pop_listint - entry point
 * @head: the keuiy govu ogiy
 * Return: the keuiy govu ogiy
 */
int pop_listint(listint_t **head)
{
int num = 0;

listint_t *prev;

if ((*head) == NULL)
return (0);

prev = (*head);

num = prev->n;

(*head) = prev->next;
free(prev);

return (num);
}
