#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: The string from which half is to be printed.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	char *p = str;
	int len;
	int half;

	/* Determine length of string */
	while (*p != '\0')
		p++;
	len = p - str;

	/* Calculate integer half. Same result whether odd or even */
	half = len / 2;

	if (len % 2 == 0)
	{
		str += half;
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		str += half + 1;
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}

	_putchar('\n');
}
