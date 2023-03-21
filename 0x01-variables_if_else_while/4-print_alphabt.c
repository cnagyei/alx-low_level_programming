#include <stdio.h>

/**
 * main - prints alphabets in lower case except 'q' and 'e'
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
