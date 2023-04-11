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
	char a[1000];
	char *cpy;	/* Pointer to copy string to */
	int len;
	char *p = s;

	cpy = &a[0];

	while (*p != '\0')
		p++;
	len = p - s;

	/* Create a copy */
	while ((*cpy++ = *s++))
		;

	/* Move s back to */
	s -= (len + 1);
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
