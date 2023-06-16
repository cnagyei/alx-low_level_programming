#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: byte size of each array element
 *
 * Return: Success - pointer to allocated memory, failure - NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newArray;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory */
	newArray = malloc(nmemb * size);

	if (newArray == NULL)
		return (NULL);

	/* set memory - initialize with zero */
	for (i = 0; i < (nmemb * size); i++)
		*(newArray + i) = 0;

	return (newArray);
}
