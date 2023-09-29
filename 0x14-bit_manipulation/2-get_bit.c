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
	unsigned long int sum;
	int i, j, cum = 0;
	unsigned int loop_index = 0, bit_value;
	int buffer[1000];

	if (n == 0)
		buffer[loop_index] = 0;
	if (n == 1)
		buffer[loop_index] = 1;

	/* move 2 to the higest power */
	i = 1;
	sum = 2;
	while ((sum * 2) <= n)
	{
		sum *= 2;
		i++;
	}
	/* check from higest power and descend */
	while ((n != 0) && (n != 1) && (i >= 0))
	{
		/* calculate powers of 2 */
		sum = 2;
		for (j = i ; j > 1; j--)
			sum *= 2;
		if (i == 1)
			sum = 2;
		if (i == 0)
			sum = 1;

		/* accumulate total and check if equal or less than n */
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
