#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* strtoww- the cons of all the args
*@str: this is a str
*@av: this is an arg
* Return: ppntr o neww
*/
char **strtow(char *str)
{
        int ii, ww, jj, kk, count, mm, wooordff;
        char **pp;
        char *xx;

        ww= 0;
        jj = 0;
        ii= 0;
        count = 0;
        if (*str == '\0' || str == NULL)
                return (NULL);
        for (ii= 0; str[ii] != '\0'; i++)
        {
                if (str[ii] == ' ' && (str[ii+ 1] != ' ' || str[ii+ 1] == '\0'))
                        ww++;
        }
        pp = (char **)malloc((ww+ 1) * sizeof(char *));
        if (pp == NULL)
                return (NULL);
        for (wooordff = 0; str[wooordff] && jj <= ww; wooordff++)
        {
                count = 0;
                if (str[wooordff] != ' ')
                {
                        for (ii= wooordff ; str[ii] != '\0'; ii++)
                        {
                                if (str[ii] == ' ')
                                        break;
                                count++;
                        }
                        *(pp + jj) = (char *)malloc((count + 1) * sizeof(char));
                        if (*(pp + jj) == NULL)
                        {
                                for (kk = 0; kk <= jj; kk++)
                                {
                                        xx = pp[kk];
                                        free(xx);
                                }
                                free(pp);
                                return (NULL);
                        }
                        for (mm = 0; wooordff < ii; wooordff++)
                        {
                                pp[jj][mm] = str[wooordff];
                                mm++;
                        }
                        pp[jj][mm] = '\0';
                        jj++;
                }
        }
        pp[jj] = NULL;
        return (pp);
}
