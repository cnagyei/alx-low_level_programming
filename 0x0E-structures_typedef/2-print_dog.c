#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: struct variable
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);

	if (d->name == NULL)
		printf("Name: \"(nil)\"\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: \"(nil)\"\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: \"(nil)\"\n");
	else
		printf("Owner: %s\n", d->owner);
}
