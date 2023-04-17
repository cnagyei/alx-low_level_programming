#include "main.h"

/**
 * print_number - print an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	/* 
	 * if number is smaller than 0, put a - sign and
	 * change number to positive
	 */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* remove last digit and recur */
	if (n / 10)
		print_number(n / 10);

	/* print last digit */
	_putchar((n % 10) + '0');
}
