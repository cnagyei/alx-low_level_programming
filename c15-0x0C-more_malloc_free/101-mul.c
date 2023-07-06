#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two positve numbers
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always success, otherwise Error (98)
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (count = 1; count < argc; count++)
	{
		if (atoi(argv[count]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
