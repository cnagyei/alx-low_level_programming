#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to the variable holding the string.
 *
 * Return: Length of string as int.
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	for ( ; *s != '\0'; s++)
		len++;
	return (len);
}

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success,
 * -1 on failure (file cannot be created, file cannot be written, etc.),
 * -1 if filename is NULL,
 *  emplty file if 'text_content' is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t count_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* open a filename, create it if not exist */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* find bytes in text_content */
	len = _strlen(text_content);

	/* write from text_content to filename */
	count_write = write(fd, text_content, len);
	if (count_write == -1)
		return (-1);

	close(fd);
	return (1);
}
