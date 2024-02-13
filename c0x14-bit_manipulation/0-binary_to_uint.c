#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number; 0 if there is one or more chars
 * in string b that is not 0 or 1; 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] ; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		sum = 2 * sum + (b[i] - '0');
	}
	return (sum);
}
