#include "lists.h"

/**
 * print_listint - riueynoen  oruihtio oirh
 * @h: lrkgjlgnf lihrn  irtg uih
 * Return:fg oiho oeihjr
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
