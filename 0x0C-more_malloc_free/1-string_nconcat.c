#include <stdlib.h>
#include "main.h"

/**
 * _strlen - determine number of characters in string
 * @s: string
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
 * string_nconcat - concatenates two strings
 * @s1: a string
 * @s2: a string
 * @n: first total bytes of s2
 *
 * Return: Success - pointer to newly allocated space
 * failure - NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1, len2;

	/* when NULL is passed */
	if (s1 == NULL)
		*s1 = ' ';
	if (s2 == NULL)
		*s2 = ' ';
	/* length of s1 */
	len1 = _strlen(s1);
	/* length of s2 */
	len2 = _strlen(s2);
	/* allocate memory */
	str = malloc((sizeof(char) * (len1 + n)) + 1);
	if (str == NULL)
		return (NULL);
	/* copy s1 into str */
	while ((*str++ = *s1++))
		;
	/* copy s2 into str to add to s1 */
	if (n < len2)
	{
		for (i = 0; (i < n); i++)
			*(str + i) = *(s2 + i);
		*(str + n) = '\0';
		str -= (len1 + n + 1);
	}
	else
	{
		while ((*str++ = *s2++))
			;
		/* add null byte */
		*str = '\0';
		str -= (len1 + len2 + 1);
	}
	return (str);
	free(str);
}
