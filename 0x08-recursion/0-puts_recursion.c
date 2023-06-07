#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line.
 * @s: the string to be printed.
 *
 * Return: Void (Always 0).
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
