#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets in lower case
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
