#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: number
 *
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int sum = 2;
	int i, count = 0;

	if (n == 0)
	{
		_putchar('0');
		EXIT_SUCCESS;
	}
	if (n == 1)
	{
		_putchar('1');
		EXIT_SUCCESS;
	}
	while (sum <= n)
	{
		sum = sum * 2;
		count++;
	}
	if ((n - sum) == 0)
	{
		_putchar('1');
		for (i = 0; i < (count - 1); i++)
			_putchar('0');
	}
	/*
	else
		print_binary(n - sum);
	*/
}
