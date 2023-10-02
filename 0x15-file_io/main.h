#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_fd_source(int fd_source, char **argv);
void error_fd_dest(int fd_dest, char **argv);
void error_read_source(int read_source, char **argv);
void error_write_dest(int write_dest, char **argv);

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

#endif /* MAIN_H */
