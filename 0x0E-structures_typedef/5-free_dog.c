#include <stdlib.h>
#include "dog.h"

/**
* free_dog - the start
* @d: the strt w ptr
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
