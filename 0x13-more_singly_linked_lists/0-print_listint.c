#include "lists.h"
/**
* print_list - the poin dui
* @h: dfh dlu
* Return: doifpo sioufm idf iff
*/

size_t print_listint(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] %p\n", h->str);
h = h->next;
n++;
}
else
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
n++;
}
}
return (n);
}
