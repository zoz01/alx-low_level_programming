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
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
block = malloc(nmemb * size);
if (block != NULL)
{
for (i = 0; i < (nmemb * size); i++)
block[i] = 0;
return (block);
}
else
return (NULL);
}
