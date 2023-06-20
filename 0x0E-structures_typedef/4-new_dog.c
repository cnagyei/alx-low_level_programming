#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: Alway success, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myNewDog;
	/* char *copyOfName, *copyOfOwner; */

	myNewDog = malloc(sizeof(dog_t));
	if (myNewDog == NULL)
		return (NULL);

	myNewDog->name = name;
	myNewDog->age = age;
	myNewDog->owner = owner;

	return (myNewDog);
	free(myNewDog);
}

/**
 * _strlen - checks the number of characters in a string
 * @s: string
 *
 * Return: number of character in string (int)
 */
int _strlen(char *s)
{
	char *p;

	while (*p != '\0')
		p++;
	return (p - s);
}
