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
 * main - copies the content of a file to another file
 * @file_from - file to copy content from
 * @file_to - file to copy content to
 *
 * Return: 1 on success
 */
int main (int argc, char **argv)
{
	int fd_source, fd_dest;
	size_t len;
	ssize_t read_from_source;
	ssize_t write_to_dest;
	char *buffer;
	int close_source, close_dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	/* open source file into file descriptor table  - should be O_RDONLY*/
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit (98);
	}

	/* open destination file into file descriptor table */
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}

	/* allocate memory for buffer */
	buffer = malloc(sizeof(char) * 1024);


	/* read content from fd_source into buffer */
	read_from_source = read(fd_source, buffer, 1024);
	if (read_from_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit (98);
	}

	/* check length of source file */
	len = _strlen(buffer);
	
	/* write content from souce file into destination file in fd table*/
	write_to_dest = write(fd_dest, buffer, len);
	if (write_to_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}

	close_source = close(fd_source);
	if (close_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit (100);
	}
	close_dest = close(fd_dest);
	if (close_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit (100);
	}

	free(buffer);
	return (0);
}

