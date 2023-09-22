#include "lists.h"
/**
* add_node - gd dty ytrg gyht kij
* @head: ty ty ghy tjhg
* @str: tr kiu oi fty johj
* Return: fhty ytiuj drt uih
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

int i = 0;

while (str[i])
{
i++;
}

new = (list_t *) malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = i;
new->next = (*head);

(*head) = new;

return (*head);
}
