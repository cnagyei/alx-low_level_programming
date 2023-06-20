#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - create a new dog
 * @d: struct dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
