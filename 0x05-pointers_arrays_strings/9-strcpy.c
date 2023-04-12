#include "main.h"

/**
 * _strcpy - copy string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by `dest`.
 *
 * @dest: pointer to buffer.
 * @src: pointer to string to be copied.
 *
 * Return: pointer to `dest`.
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	char *p = src;

	while (*p != '\0')
		p++;
	len = p - src;

	while ((*dest++ = *src++))
		;
	dest -= (len + 1);

	return (dest);
}
