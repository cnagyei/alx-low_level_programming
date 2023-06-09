#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed to the program,
 * followed by a new line
 *
 * @argc: total count of arguments
 * @argv: array of pointer to char of all arguments
 *
 * Return: Always success
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
