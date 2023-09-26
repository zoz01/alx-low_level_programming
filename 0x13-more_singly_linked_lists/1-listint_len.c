#include "lists.h"

/**
 * listint_len - dgh trhyh ryh iikfty tyuj
 * @h:dgh trhyh ryh iikfty tyuj
 * Return: dgh trhyh ryh iikfty tyuj
 */
size_t listint_len(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
count += 1;
cursor = cursor->next;
}
return (count);
}
