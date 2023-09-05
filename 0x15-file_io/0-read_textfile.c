#include "main.h"

/**
 * read_textfile - reads a text file and print it to POSIX standard output
 * @filename: name of file
 * @letters: number of letters read and printed
 *
 * Return: Actual number of letters read and printed,
 * 0 if file cannot be open or read or if filename is NULL,
 * 0 if 'write' fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* declare int value for file descriptor */
	char *buffer; /* space in memory to write file to */
	ssize_t count_read, count_write; /* save return values of read()
					   and write() */

	/*
	 * open file to save return value (file descriptor)
	 * return value of open() is a file descriptor, a small non-negative
	 * integer that is an index to an entry in the process' table
	 * of open file descriptors.
	 *
	 * the file descriptor is used in subsequent system calls -
	 * read(2), write(2), lseek(2), fcntl(2) -
	 * to refer to the open file
	 */
	fd = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	
	/* read bytes from file descriptor into buffer */
	count_read = read(fd, buffer, letters);

	/* write bytes from buffer to STDOUT_FILENO */
	count_write = write(STDOUT_FILENO, buffer, count_read);

	close(fd);
	free(buffer);
	return (count_write);
}
