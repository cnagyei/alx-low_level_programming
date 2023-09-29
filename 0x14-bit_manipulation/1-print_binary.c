#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: number
 *
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int sum;
	int i, j, cum = 0;

	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	i = 1;
	sum = 2;
	while ((sum * 2) <= n)
	{
		sum *= 2; /* move 2 to the highest power */
		i++;
	}
	/* check from higest power and descend */
	while ((n != 0) && (n != 1) && (i >= 0))
	{
		sum = 2;
		for (j = i ; j > 1; j--)
			sum *= 2; /* calculate powers of 2 */
		if (i == 1)
			sum = 2;
		if (i == 0)
			sum = 1;
		/* accumulate total and check if equal or less than n */
		if ((cum + sum) <= n)
		{
			cum += sum;
			_putchar('1');
		}
		else
			_putchar ('0');
		i--;
	}
}
