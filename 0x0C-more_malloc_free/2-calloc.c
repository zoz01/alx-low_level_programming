#include "main.h"

/**
* _calloc - action within mem
*@nmemb: just the num
*@size: just the size
*Return: just he pntr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *block;
unsigned int o;
if (nmemb == 0 || size == 0)
return (NULL);
block = malloc(nmemb * size);
if (block != NULL)
{
for (o = 0; o < (nmemb * size); o++)
block[o] = 0;
return (block);
}
else
return (NULL);
}
