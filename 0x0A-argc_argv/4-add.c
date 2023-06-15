#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - add two numbers
 *
 * @argc: total count of arguments
 * @argv: array of pointer to char of all arguments
 *
 * Return: Always success, other Error (1)
 */
int main(int argc, char *argv[])
{
	int sum, count, convert;

	/* print 0 if no number or argument is passed */
	if (argc == 1)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}

	/*
	 * loop the array and check if any member is not int
	 * i.e. cannot be converted to int, then print error and return 1
	 */
	for (count = 1; count < argc; count++)
	{
		/* atoi(int c) return 0 if the input cannot be converted */
		if (atoi(argv[count]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	/* convert arguments from string to int */
	sum = 0;
	argv++;
	for ( ; *argv; argv++)
	{
		convert = atoi(*argv);
		sum += convert;
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
