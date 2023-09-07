#include "main.h"

/**
* _realloc - somt to mem
* @ptr: drf somth to mm
* @old_size: bro size
* @new_size: aloc size is
* Return: pntr to adds
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int o;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (o = 0; o < min(old_size, new_size); o++)
				*((char *)temp_block + o) = *((char *) ptr + o);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
