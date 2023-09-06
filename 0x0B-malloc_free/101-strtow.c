#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number_of_words - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int number_of_words(char *str)
{
	int index, num = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[index] != ' ' && str[index] != '\0'; index++)
				str++;
			num++;
		}
	}
	return (num);
}

/**
 * free_memory - frees the memory
 * @string_array: pointer values being passed for freeing
 * @count: counter
 */
void free_memory(char **string_array, int count)
{
	for (; count > 0;)
		free(string_array[--count]);
	free(string_array);
}

/**
 * string_split - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **string_split(char *str)
{
	int total_words = 0, index1 = 0, index2 = 0, length = 0;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = number_of_words(str);
	if (total_words == 0)
		return (NULL);
	words = malloc((total_words + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' && index1 < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}
			words[index1] = malloc((length + 1) * sizeof(char));
			if (words[index1] == 0)
			{
				free_memory(words, index1);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{
				words[index1][index2] = *found_word;
				found_word++;
				index2++;
			}
			words[index1][index2] = '\0';
			index1++;
			index2 = 0;
			length = 0;
			str++;
		}
	}
	return (words);
}
