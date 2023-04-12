#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 *
 * @s1: A string
 * @s2: A string
 *
 * Description: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of `s1`, followed by
 * the contents of `s2`, and null terminated
 * If NULL is passed, treat it as an empty string
 *
 * Return: Pointer to new string, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	char *p = s1;
	int len_s1, len_s2, len_tot;

	/* Determine length of s1 without null byte */
	while (*p != '\0')
		p++;
	len_s1 = p - s1;
	/* Determine length of s2 without null byte */
	p = s2;
	while (*p != '\0')
		p++;
	len_s2 = p - s2;
	/* Determine total length plus null byte of s2 */
	len_tot = len_s1 + (len_s2 + 1);
	/* Allocate new space in memory */
	new_str = malloc(sizeof(char) * len_tot);

	if (new_str != NULL)
	{
		/* Fill new_str with s1 string */
		while (*s1 != '\0')
		{
			*new_str = *s1;
			s1++;
			new_str++;
		}
		/* Fill new_str with s2 string */
		while ((*new_str++ = *s2++))
			;
		/* Bring pointer to the start position */
		new_str -= len_tot;
	}
	return (new_str);
	free(new_str);
}
