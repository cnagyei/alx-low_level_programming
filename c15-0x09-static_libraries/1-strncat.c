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
 * _strncat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n: number of bytes from src
 *
 * Description: It will use at most n bytes from `src`
 * `src` doest not need to be null-terminated if it contains `n` or more bytes
 *
 * Return: Pointer to `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	/* determine length of dest */
	len_dest = _strlen(dest);

	/* move dest to the null byte */
	while (*dest != '\0')
		dest++;

	/* copy src into dest for n bytes */
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* move dest back to first element */
	dest -= (len_dest + n);

	return (dest);
}
