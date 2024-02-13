#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index 
 * @n: number to convert to binary
 * @index: index starting from 0 of the bit to set
 *
 * Return: 1 on success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sum = 2;
	int i = 1, j, cum = 0;
	unsigned long int buffer[1000], exp = 10;

	*buffer = 0;
	if (*n == 0)
		*buffer = 0;
	if (*n == 1)
		*buffer = 1;
	while ((sum * 2) <= *n)
	{
		sum *= 2;
		i++;
	}
	while ((*n != 0) && (*n != 1) && (i >= 0))
	{
		sum = 2;
		for (j = i ; j > 1; j--)
		{
			sum *= 2;
			exp *= 10;
		}
		if (i == 1)
		{
			sum = 2;
			exp = 10;
		}
		if (i == 0)
		{
			sum = 1;
			exp = 1;
		}
		if ((cum + sum) <= *n)
		{
			cum += sum;
			*buffer += 1 * exp;
		}
		else
			*buffer += 0;
		i--;
	}
	buffer[index] = 1;
	n = buffer;
	return (1);
}
