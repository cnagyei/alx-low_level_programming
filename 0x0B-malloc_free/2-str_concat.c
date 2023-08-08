#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates the number of characters in a string
 * @s: string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}

/**
 * _strcpy - copies string
 * @dest: destination for string
 * @src: source of string
 *
 * Return: Void
 */
void _strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++))
		;
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1, len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* calculate lengths of s1 and s2 */
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	/* allocate a block of memory */
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	
	/* p = new_str; */

	if (new_str != NULL)
	{
		/* copy s1 to new location */
		_strcpy(new_str, s1);
		new_str += len1;

		_strcpy(new_str, s2);
		new_str -= len1;
	}
	return (new_str);
	free(new_str);
}
