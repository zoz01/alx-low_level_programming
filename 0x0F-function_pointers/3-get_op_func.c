#include "3-calc.h"
#include <string.h>

/**
* get_op_func - do the progg
* @s:th emath do be done
* Return: basicly the progg
*/

int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod },
{ NULL, NULL }
};

while (s && ops[i].op != NULL)
{
if (!strcmp(s, ops[i].op))
return (ops[i].f);
++i;
}

return (NULL);
}
