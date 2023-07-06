#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two numbers
 *
 * @argc: total count of arguments
 * @argv: array of pointer to char of all arguments
 *
 * Return: Always success, other Error (1)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
