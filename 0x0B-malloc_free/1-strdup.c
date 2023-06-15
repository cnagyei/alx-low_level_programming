#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - determine number of characters in string
 * @str: string
 *
 * Return: int - number of characters
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: a string
 *
 * Return: success - pointer to duplicated string, otherwise NULL
 */
char *_strdup(char *str)
{
	char *dup_string;
	int len;

	if (str == NULL)
		return (NULL);

	/* find length of string */
	len = _strlen(str);

	/* allocate block of memory, + 1 for null byte */
	dup_string = malloc((sizeof(char) * len) + 1);

	/* handle malloc return*/
	if (dup_string != NULL)
	{
		while ((*dup_string++ = *str++))
			;
	}
	dup_string -= (len + 1);

	return (dup_string);
	free(dup_string);
}
