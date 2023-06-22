#include "function_pointers.h"

/**
 * name_of_something - name of something, to print
 * @ptr: pointer to name to print
 *
 * Return: void
 */
void name_of_something(char *ptr)
{
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
}

/**
 * print_name - print a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f = name_of_something;
	f(name);
}
