#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - the name of it
 * @name: name of the d2
 * @age: age of the d2
 * @owner: name of the owner2
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->owner = owner;
	p->name = name;
	p->age = age;
	return (p);
}
