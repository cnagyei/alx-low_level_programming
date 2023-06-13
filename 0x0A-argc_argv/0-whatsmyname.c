#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints program name, followed by a new line
 * @argc: total count of arguments
 * @argv: array of pointer to char of all arguments
 *
 * Return: Int
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
