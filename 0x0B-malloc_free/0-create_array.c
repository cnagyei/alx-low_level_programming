#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it with
 * a specific char
 * @size: Size of the array
 * @c: Character used to intialize the array
 *
 * Description: Returns NULL if size = 0
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
			*(arr + i) = c;		/* Same as arr[i] */
	}
	return (arr);
	free(arr);
}
