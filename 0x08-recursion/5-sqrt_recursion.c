#include "main.h"

/**
 * _sqrt_recursion: return the natural square root of a number.
 * @n: a number.
 *
 * Return: square rooot of n (int).
 */
int _sqrt_recursion(int n)
{
	int count = 0, i = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	_sqrt_recursion(n - i);
	i += 1;
	count++;
	return (count);
}
