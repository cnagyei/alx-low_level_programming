#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets in lower case in reverse order
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
