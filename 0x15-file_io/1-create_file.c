#include "main.h"

/**
 * create_file - oidfu do8tu io;tgu dgu9
 * @filename: oidfu do8tu io;tgu dgu9
 * @text_content: oidfu do8tu io;tgu dgu9
 * Return: oidfu do8tu io;tgu dgu9
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rstatus, i;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	if (text_content)
	{
	for (i = 0; text_content[i] != '\0'; i++)
	;
	rstatus = write(fd, text_content, i);
	if (rstatus == -1)
	return (-1);
	}

	close(fd);
	return (1);
}
