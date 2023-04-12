#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: A given string.
 *
 * Description: Returns a pointer to a new string which is a duplicate
 * of the string `str`.
 * Memore for the new string is obtained with `malloc`, and can be freed
 * with `free`.
 * Returns NULL if `str` = NULL
 *
 * Return: Pointer to the duplicated string, otherwise NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	char *p = str;
	int len;

	/* Determine length of string */
	while (*p != '\0')
		p++;
	len = p - str;

	if (str == NULL)
		return (NULL);

	/* Allocate space in memory */
	new_str = malloc(sizeof(char) * (len + 1));	/* + 1 to hold '\0' */

	/* Create a duplicate string */
	if (new_str != NULL)
	{
		while ((*new_str++ = *str++))
			;
	}

	new_str -= (len + 1);

	return (new_str);
	free(new_str);		/* Free up memory */
}
