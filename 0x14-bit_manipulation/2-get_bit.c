#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to convert to binary
 * @index: index starting from 0 of the bit to get
 *
 * Return: Value of a bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int sum 2;
	int i = 1, j, cum = 0;
	unsigned int loop_index = 0, bit_value;
	int buffer[1000];

	if (n == 0)
		buffer[loop_index] = 0;
	if (n == 1)
		buffer[loop_index] = 1;
	while ((sum * 2) <= n)
	{
		sum *= 2;
		i++;
	}
	while ((n != 0) && (n != 1) && (i >= 0))
	{
		sum = 2;
		for (j = i ; j > 1; j--)
			sum *= 2;
		if (i == 1)
			sum = 2;
		if (i == 0)
			sum = 1;

		if ((cum + sum) <= n)
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
	index = loop_index - 1 - index;
	bit_value = buffer[index];
	return (bit_value);
}
