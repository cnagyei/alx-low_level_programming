#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * create_array - create array of chars, and initialize with a specific
 * char
 *
 * @size: size of array
 * @c: char
 *
 * Return: pointer to the array, NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	new_array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		*(new_array + i) = c;

	return (new_array);
	free(new_array);
}
