#include "main.h"

/**
 * print_line - prints a straight line
 * @n: an integer
 * Return:void
 */

void print_line(int n)
{
	char a = '_';

	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
