/**
* custom_string_nconcat - Concatenates two strings using at most a specified
* number of bytes.
* @s1: The first input is deff string.
* @s2: The second input is deffff string.
* @n: The maximum number of bytes from s2 to concatenate to s1.
* Return: If the function fails - NULL.
* Otherwise - a pointer to the allocated memory containing the concatenated string.
*/

char *custom_string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concatenated;
    unsigned int total_length = n, i;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    for (i = 0; s1[i]; i++)
        total_length++;

    concatenated = malloc(sizeof(char) * (total_length + 1));

    if (concatenated == NULL)
        return (NULL);

    total_length = 0;

    for (i = 0; s1[i]; i++)
        concatenated[total_length++] = s1[i];

    for (i = 0; s2[i] && i < n; i++)
        concatenated[total_length++] = s2[i];

    concatenated[total_length] = '\0';

    return (concatenated);
}
