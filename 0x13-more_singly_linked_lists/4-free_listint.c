#include "lists.h"

/**
 * free_listint - dgh trhyh ryh iikfty tyuj
 * @head: dgh trhyh ryh iikfty tyuj
 * Return: dgh trhyh ryh iikfty tyuj
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
