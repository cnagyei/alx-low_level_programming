#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 0 at a given index 
 * @n: number to convert to binary
 * @index: index starting from 0 of the bit to set
 *
 * Return: 1 on success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sum = 2;
	int i = 1, j, k, cum = 0;
	unsigned int loop_index = 0;
	unsigned long int buffer[1000], new, exp = 10, *ptr = &new;

	if (*n == 0)
		buffer[loop_index] = 0;
	if (*n == 1)
		buffer[loop_index] = 1;
	while ((sum * 2) <= *n)
	{
		sum *= 2;
		i++;
	}
	while ((*n != 0) && (*n != 1) && (i >= 0))
	{
		sum = 2;
		for (j = i ; j > 1; j--)
			sum *= 2;
		if (i == 1)
			sum = 2;
		if (i == 0)
			sum = 1;

		if ((cum + sum) <= *n)
		{
			cum += sum;
			buffer[loop_index] = 1;
			loop_index++;
		}
		else
		{
			buffer[loop_index] = 0;
			loop_index++;
		}
		i--;
	}
	loop_index -= 1;
	if (index > loop_index)
		return (-1);
	buffer[loop_index - index] = 0;

	for (i = 0; (unsigned int)i <= loop_index; i++)
	{
		if ((buffer[i] == 1))
		{
			for (k = loop_index - i; k > 1; k--)
				exp *= 10;
			if (k == 1)
				exp = 10;
			if (k == 0)
				exp = 1;
			new += 1 * exp;
		}
	}
	n = ptr;
	return (1);
}
