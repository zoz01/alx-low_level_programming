#include "lists.h"

/**
 * list_len - dgfkg fkjg
 *	@h: gfd gfb djk
 * Return: fidh dsifj lnkdf
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
