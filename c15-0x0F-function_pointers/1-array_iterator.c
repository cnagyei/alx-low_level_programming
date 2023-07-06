#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter on each
 * element of an array
 *
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!array || !size || !action)
		exit(EXIT_SUCCESS);

	for (i = 0; i < size; i++)
		action(array[i]);
}
