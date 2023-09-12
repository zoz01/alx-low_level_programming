#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - the name of it
 * @name: name of the d2
 * @age: age of the d2
 * @owner: name of the owner2
 * Return: v
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *v = malloc(sizeof(dog_t));
	if (v == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(v);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(v);
		free(name);
		return (NULL);
	}
	v->name = name;
	v->age = age;
	v->owner = owner;
	return (v);
}
