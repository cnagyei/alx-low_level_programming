#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: Pointer to array
 * @n: Number of elements to print
 *
 * Description: Numbers must be separated by comma, followed by a space.
 * The numbers should be displayed in the same order as they are stored
 * in the array.
 * You are allowed to use printf
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
