#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer to array
 * @n: number of elements of array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int cpy[1000];
	int *p = cpy;
	int i, j;

	/* copy elements of a into p */
	for (i = 0; i < n; i++)
		p[i] = a[i];

	/* copy p in reverse to replace elements in a */
	for (i = (n - 1), j = 0; i >= 0 || j < n; i--, j++)
		a[j] = p[i];
}
