#include "main.h"

/**
* array_range - somthn is created
* @min: lil somthin
* @max: huge som ethin
* Return: ptr t addres
*/

int *array_range(int min, int max)
{
	int *block;
	int o, k = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (o = min; o <= max; o++)
		{
			block[k] = o;
			k++;
		}
		return (block);
	}
	else
		return (NULL);

}
