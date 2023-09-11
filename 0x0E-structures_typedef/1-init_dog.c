#include "dog.h"
#include <stdlib.h>


/**
* init_dog - the struct s inted w it
* @name: the dog name
* @age: the dog age
* @owner: the name of the owner
*
* Description: it will say oofffff as a dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
