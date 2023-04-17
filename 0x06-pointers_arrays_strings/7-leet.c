#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	char p1[6] = {'a', 'e', 'o', 't', 'l'};
	char p2[6] = {'A', 'E', 'O', 'T', 'L'};
	char p3[6] = {'4', '3', '0', '7', '1'};
	char *p  = str;
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
			if (*str == p1[i] || *str == p2[i])
				*str = p3[i];
		str++;
	}
	str = p;
	return (str);
}
