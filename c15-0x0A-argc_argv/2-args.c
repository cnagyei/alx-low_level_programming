#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments program receives
 *
 * @argc: total count of arguments
 * @argv: array of pointer to char of all arguments
 *
 * Return: Always success
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	exit(EXIT_SUCCESS);
}
