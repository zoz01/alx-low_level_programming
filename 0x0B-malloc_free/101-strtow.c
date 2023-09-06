#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_delimiter(char c, const char *delimiters)
{
    while (*delimiters != '\0')
    {
        if (c == *delimiters)
            return 1;
        delimiters++;
    }
    return 0;
}

int count_words(const char *str, const char *delimiters)
{
    int count = 0;
    int in_word = 0;

    while (*str != '\0')
    {
        if (is_delimiter(*str, delimiters))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }

        str++;
    }

    return count;
}

char **strtow(const char *str, const char *delimiters)
{
    int total_words, word_length, index;
    char **words, *word_start;

    if (str == NULL || *str == '\0')
        return NULL;

    total_words = count_words(str, delimiters);
    words = malloc((total_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    index = 0;
    while (*str != '\0')
    {
        if (is_delimiter(*str, delimiters))
        {
            str++;
            continue;
        }

        word_start = (char *)str;
        word_length = 0;

        while (!is_delimiter(*str, delimiters) && *str != '\0')
        {
            str++;
            word_length++;
        }

        words[index] = malloc((word_length + 1) * sizeof(char));
        if (words[index] == NULL)
        {
            while (index > 0)
                free(words[--index]);
            free(words);
            return NULL;
        }

        strncpy(words[index], word_start, word_length);
        words[index][word_length] = '\0';
        index++;
    }

    words[index] = NULL;
    return words;
}

int main(void)
{
    const char *str = "Hello, world! This is a test string.";
    const char *delimiters = " ,.!";

    char **words = strtow(str, delimiters);
    if (words == NULL)
    {
        printf("Failed to split the string.\n");
        return 1;
    }

    int i = 0;
    while (words[i] != NULL)
    {
        printf("%s\n", words[i]);
        free(words[i]);
        i++;
    }

    free(words);

    return 0;
}
