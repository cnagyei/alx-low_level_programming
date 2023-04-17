#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @str: string
 *
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		for ( ; (*str >= 'A' || *str >= 'a') &&
				(*str <= 'Z' || *str <= 'z'); str++)
		{
			if (*str <= 'M' || *str <= 'm')
				*str += 13;
			else
				*str -= 13;
		}
		str++;
	}
	str = p;
	return (str);
}
