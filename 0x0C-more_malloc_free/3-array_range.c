#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: minimum and first integer in array
 * @max: maximum and last integer in array
 *
 * Return: Success - pointer to allocated memory, failure - NULL
 */
int *array_range(int min, int max)
{
	int i, *intArray;

	if (min > max)
		return (NULL);

	intArray = malloc(sizeof(int) * (max - min + 1));

	if (intArray == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		*(intArray + i) = (min + i);
	}
	return (intArray);
	free(intArray);
}
