#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* strtov- the cons of all the args
*@str: this is a str
*@av: this is an arg
* Return: ppntr o nev
*/
char **strtow(char *str)
{
        int s, v, c, t, count, q, wordt;
        char **pp;
        char *xx;

        v= 0;
        c = 0;
        s= 0;
        count = 0;
        if (*str == '\0' || str == NULL)
                return (NULL);
        for (s= 0; str[s] != '\0'; s++)
        {
                if (str[s] == ' ' && (str[s+ 1] != ' ' || str[s+ 1] == '\0'))
                        v++;
        }
        pp = (char **)malloc((v+ 1) * sizeof(char *));
        if (pp == NULL)
                return (NULL);
        for (wordt = 0; str[wordt] && c <= v; wordt++)
        {
                count = 0;
                if (str[wordt] != ' ')
                {
                        for (s= wordt ; str[s] != '\0'; s++)
                        {
                                if (str[s] == ' ')
                                        break;
                                count++;
                        }
                        *(pp + c) = (char *)malloc((count + 1) * sizeof(char));
                        if (*(pp + c) == NULL)
                        {
                                for (t = 0; t <= c; t++)
                                {
                                        xx = pp[t];
                                        free(xx);
                                }
                                free(pp);
                                return (NULL);
                        }
                        for (q = 0; wordt < s; wordt++)
                        {
                                pp[c][q] = str[wordt];
                                q++;
                        }
                        pp[c][q] = '\0';
                        c++;
                }
        }
        pp[c] = NULL;
        return (pp);
}
