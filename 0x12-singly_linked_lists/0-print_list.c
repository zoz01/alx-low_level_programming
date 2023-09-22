#include "lists.h"
/**
 * print_them - the tsxet wil br pribtde
 * @h: the heead to be
 * Return: nodes num
 */

size_t print_them (const listint_t *h)
{
const listint_t *tmp;
size_t count;

tmp = h;
count = 0;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
count++;
tmp = tmp->next;
}
return (count);
}
