#include "main.h"

/**
 * error_fd_source - checks for error for source file
 * @fd_source: file descriptor for source file
 * @argv: argument vector
 *
 * Return: Void
 */
void error_fd_source(int fd_source, char **argv)
{
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
}

/**
 * error_fd_dest - checks for error for destination file
 * @fd_dest: file descriptor for destination file
 * @argv: argument vector
 *
 * Return: Void
 */
void error_fd_dest(int fd_dest, char **argv)
{
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * error_read_source - checks for error for destination file
 * @read_source: file descriptor for destination file
 * @argv: argument vector
 *
 * Return: Void
 */
void error_read_source(int read_source, char **argv)
{
	if (read_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
}

/**
 * error_write_dest - checks for error for destination file
 * @write_dest: file descriptor for destination file
 * @argv: argument vector
 *
 * Return: Void
 */
void error_write_dest(int write_dest, char **argv)
{
	if (write_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

}

/**
 * main - copies the content of a file to another file
 * @argc: count of command line arguments
 * @argv: string array of command line arguments
 *
 * Return: 1 on success
 */
int main(int argc, char **argv)
{
	int fd_source, fd_dest, close_source, close_dest;
	size_t len;
	ssize_t read_source, write_dest;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open source file into file descriptor table  - should be O_RDONLY*/
	fd_source = open(argv[1], O_RDONLY);
	error_fd_source(fd_source, argv);
	/* open destination file into file descriptor table */
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_fd_dest(fd_dest, argv);
	buffer = malloc(sizeof(char) * 1024);
	/* read content from fd_source into buffer */
	read_source = read(fd_source, buffer, 1024);
	error_read_source(read_source, argv);
	/* check length of source file */
	len = _strlen(buffer);
	/* write content from souce file into destination file in fd table*/
	write_dest = write(fd_dest, buffer, len);
	error_write_dest(write_dest, argv);
	close_source = close(fd_source);
	if (close_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	close_dest = close(fd_dest);
	if (close_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	free(buffer);
	return (0);
}

