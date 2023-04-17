#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: string
 *
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	char *p = str;
	int len;

	/* determine length of str */
	while (*p != '\0')
		p++;
	len = p - str;

	/* loop through str and change lowercase to uppercase */
	while (*str != '\0')
	{
		for ( ; (*str >= 'a' && *str  <= 'z'); str++)
			*str -= 32;
		str++;
	}

	/* move str to first element and return it */
	str -= len;
	return (str);
}
