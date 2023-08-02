#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line.
 * @s: the string to be printed.
 *
 * Return: Void (Always 0).
 */
void _puts_recursion(char *s)
{
	/* print a new line when EOF */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);		/* print first character */
	s++;			/* move pointer to next character */
	_puts_recursion(s);	/* make recursive call */
}
