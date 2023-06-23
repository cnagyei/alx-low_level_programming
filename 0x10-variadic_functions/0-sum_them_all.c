#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: constant integer
 *
 * Return: pointer to integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ptr;		/* argument list */

	if (n == 0)
		return (0);

	/* initialize argument to the list pointer */
	va_start(ptr, n);

	sum = 0;
	for (i = 0; i < n; i++)
		/* get the next argument value */
		sum += va_arg(ptr, const unsigned int);

	/* clean up */
	va_end(ptr);

	return (sum);
}
