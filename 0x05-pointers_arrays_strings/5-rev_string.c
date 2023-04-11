#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	char a[1000];		/* Large array - used as copy of s */
	char *cpy;		/* Pointer to a, the array copy of s */
	int len;		/* To determine length of s */
	char *p = s;

	cpy = &a[0];		/* Assign pointer to first element of a */

	while (*p != '\0')	/* Determine the length of s */
		p++;
	len = p - s;

	/* Create a copy */
	while ((*cpy++ = *s++))	/* Brings s '\0' plus 1, cpy to same */
		;

	s -= (len + 1); 	/* Move s back to first element */

	/* This section could also be coded as: cpy -= 2; */
	cpy = a;
	cpy += (len - 1);
	
	/* Reverse string */
	while (*s != '\0')
	{
		*s = *cpy;
		s++;
		cpy--;
	}
}
