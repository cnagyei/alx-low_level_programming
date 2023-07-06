#include "main.h"

/**
 *_abs - prints the absolute value of an integer
 * @n : any value of type int
 * Return: Always 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);

	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
