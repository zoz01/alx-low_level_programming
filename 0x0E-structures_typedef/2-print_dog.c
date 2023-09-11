#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
* print_dog - the printed data
* @d: ptr to dog struct
* Return: none or void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name:"(nil)");
		printf("Age: %f\n", (d->age) ? d->age: 0);
		printf("Owner: %s\n", (d->owner) ? d->owner:"(nil)");
	}
}
