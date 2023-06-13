#include "main.h"

/**
 * _strlen - determines the length of a string
 * @str: string
 *
 * Return: length of string in bytes
 */
int _strlen(char *str)
{
	char *p = str;

	while (*p != '\0')
		p++;
	return (p - str);
}

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: string to copy
 * @n: bytes to copy
 *
 * Return: pointer to resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_src;

	len_src = _strlen(src);

	/* copy src into dest for n bytes */
	if (len_src < n)
	{
		while ((*dest++ = *src++))
			;
		dest -= (len_src + 1);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			*dest = *src;
			dest++;
			src++;
		}
		dest -= n;
	}
	return (dest);
}
