#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory previously allocated with call to malloc
 * @old size: size, in bytes, of allocated space for ptr
 * @new size: size, in bytes, of new memory block
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *oldMemory, *newMemory;

	oldMemory = malloc(old_size);
	ptr = &oldMemory;

	if (new_size == old_size)
		return (ptr);
	
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newMemory = malloc(new_size);

	if (newMemory == NULL)
		return (NULL);

	while ((*newMemory++ = *oldMemory++))
		;

	return (newMemory);
	free(newMemory);
}
