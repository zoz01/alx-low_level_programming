#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - kuh ishf flduigh hsg dfopj isfg
 * @c: kuh ishf flduigh hsg dfopj isfg
 * Return: On 1
 *kuh ishf flduigh hsg dfopj isfgap
 */

int _putchar(char c);

/**
 * _memset - kuh ishf flduigh hsg dfopj isfg
 *
 * @s: kuh ishf flduigh hsg dfopj isfg
 * @b: kuh ishf flduigh hsg dfopj isfg
 * @n: kuh ishf flduigh hsg dfopj isfg
 *
 * Return: kuh ishf flduigh hsg dfopj isfg
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - kuh ishf flduigh hsg dfopj isfg
 * @dest: kuh ishf flduigh hsg dfopj isfg
 * @src: skuh ishf flduigh hsg dfopj isfg
 * @n: vkuh ishf flduigh hsg dfopj isfg
 * Return: vkuh ishf flduigh hsg dfopj isfg
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr -kuh ishf flduigh hsg dfopj isfg
 * @s: vkuh ishf flduigh hsg dfopj isfg
 * @c: kuh ishf flduigh hsg dfopj isfg
 *
 * Return: kuh ishf flduigh hsg dfopj isfg
 */

char *_strchr(char *s, char c);

#include "main.h"

/**
 * _strspn - kuh ishf flduigh hsg dfopj isfg
 * @s: kuh ishf flduigh hsg dfopj isfg
 * @accept: tkuh ishf flduigh hsg dfopj isfg
 * Return: kuh ishf flduigh hsg dfopj isfg
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk -  kuh ishf flduigh hsg dfopj isfg
 * @s: kuh ishf flduigh hsg dfopj isfg
 * @accept: kuh ishf flduigh hsg dfopj isfg
 *
 * Return: akuh ishf flduigh hsg dfopj isfg
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - kuh ishf flduigh hsg dfopj isfg
 *
 * @haystack: kuh ishf flduigh hsg dfopj isfg
 * @needle: skuh ishf flduigh hsg dfopj isfg
 *
 * Return:kuh ishf flduigh hsg dfopj isfg
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - kuh ishf flduigh hsg dfopj isfg
 *
 * @a: kuh ishf flduigh hsg dfopj isfg
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - kuh ishf flduigh hsg dfopj isfg
 * @a: kuh ishf flduigh hsg dfopj isfg
 * @size: kuh ishf flduigh hsg dfopj isfg
 */

void print_diagsums(int *a, int size);

/**
 * set_string - kuh ishf flduigh hsg dfopj isfg
 * @s: kuh ishf flduigh hsg dfopj isfg
 * @to: kuh ishf flduigh hsg dfopj isfg
 */

void set_string(char **s, char *to);


#endif
