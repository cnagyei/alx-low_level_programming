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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add to the end of the file
 *
 * Return: 1 on success,
 * -1 if filename is NULL,
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t count_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* open a filename in APPEND mode, don't create it if not exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* find number of bytes in text_content */
	len = _strlen(text_content);

	/* write from buffer to filename */
	count_write = write(fd, text_content, len);
	if (count_write == -1)
		return (-1);

	close(fd);
	return (1);
}
