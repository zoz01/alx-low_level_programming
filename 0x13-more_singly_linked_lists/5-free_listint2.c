#include "lists.h"

/**
 * free_listint2 - the keuiy govu ogiy
 * @head: the keuiy govu ogiy
 * Return: the keuiy govu ogiy
 */
void free_listint2(listint_t **head)
{
listint_t *freed;

if (head == NULL || *head == NULL)
return;
while (*head != NULL)
{
freed = *head;
*head = (*(head))->next;
free(freed);
}
*head = NULL;
}
