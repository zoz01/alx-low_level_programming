#include <stdlib.h>
#include <stdio.h>

/**
* main - out put the result
* @argc:sze of vec og arg
* @argv: vec of arg
* Return:wil be 0
*/
int main(int argc, char *argv[])
{
int b;
char *mem = (char *) main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

b = atoi(argv[1]);

if (b < 0)
{
printf("Error\n");
exit(2);
}

while (b--)
printf("%02x%c", *mem++ & 0xff, b ? ' ' : '\n');

return (0);
}
