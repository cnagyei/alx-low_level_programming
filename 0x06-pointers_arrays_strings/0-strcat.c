#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string
 * @src: string
 *
 * Description: This function appends the `src` string to the `dest`
 * string, overwriting the terminating null byte (`\0`) at the end
 * of `dest`, and then adds a terminating null byte
 *
 * Return: Pointer to `dest`
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	int len_dest, len_src;

	/* determine length of dest */
	while (*p != '\0')
		p++;
	len_dest = p - dest;

	/* determine length of src */
	p = src;
	while (*p != '\0')
		p++;
	len_src = p - src;

	/* move dest to the null byte */
	while (*dest != '\0')
		dest++;

	/* copy src into dest */
	while ((*dest++ = *src++))
		;

	/* move dest back to first element */
	dest = (dest - (len_dest + len_src + 1));

	return (dest);
}
