#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: The string to be printed.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int len = 0;

	/**
	 * Determine the length of the string
	 * After the loop, s points to the null byte while
	 * len is just before the null byte.
	 */
	for ( ; *s != '\0'; s++)
		len++;

	/**
	 * s is already on the null byte while len is one step before len
	 * To have s point to the very first item, s[0], len must loop to 0
	 */
	for ( ; len >= 0; s--)
	{
		_putchar(*s);
		len--;
	}

	_putchar('\n');
}
