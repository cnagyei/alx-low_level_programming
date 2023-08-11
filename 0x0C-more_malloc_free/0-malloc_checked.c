#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: total bytes to allocate
 *
 * Return: pointer to allocated memory, otherwise
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b == 0)
		return (NULL);

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
	free(mem);
}
