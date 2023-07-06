#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for functions that perform simple operations
 * @argc: total count of arguments
 * @argv: pointer to char array of all argument
 *
 * Return: Always success
 */
int main(int argc, char **argv)
{
	int atoiNum1, atoiNum2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != '+' ||
			argv[2] != '-' ||
			argv[2] != '*' ||
			argv[2] != '/' ||
			argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") &&
			argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	atoiNum1 = atoi(argv[1]);
	atoiNum2 = atoi(argv[3]);

	get_op_func(argv[2])(atoiNum1, atoiNum2);

	exit(EXIT_SUCCESS);
}
