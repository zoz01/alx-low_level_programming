#ifndef LIST_H
#define LIST_H

#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
* Description: singly linked list node structure
* for Holberton project
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void _strcpy(list_t * dest,char *str);
int _strlen(char *str);
size_t print_list(const list_t *h);
void print_before(void)__attribute__((constructor));
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);


#endif
