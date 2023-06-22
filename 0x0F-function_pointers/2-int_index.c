#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer 
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!array || !cmp || !size)
		exit(EXIT_SUCCESS);

	for (i = 0; i < size; i++)
	{
		if ((cmp(array[i])) > 0)
			return (i);
		else
			return (-1);
	}
	return (i);
}
