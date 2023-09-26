#include "lists.h"

/**
 * sum_listint - the keuiy govu ogiy
 * @head: the keuiy govu ogiy
 * Return: the keuiy govu ogiy
 */
int sum_listint(listint_t *head)
{
listint_t *cursor = head;
size_t sum = 0;

while (cursor != NULL)
{
sum += cursor->n;
cursor = cursor->next;
}
return (sum);
}
