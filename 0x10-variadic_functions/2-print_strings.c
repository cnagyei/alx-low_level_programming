#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print string, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ptr, const unsigned int) != NULL)
		{
			printf("%s", va_arg(ptr, const unsigned int));
			if 
		}
		else
			printf("(nil)");
	}
}
