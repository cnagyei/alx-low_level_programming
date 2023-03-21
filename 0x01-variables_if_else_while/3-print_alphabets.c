#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets in lower case and upper case
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char alpha;
	char u_alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	for (u_alpha = 'A'; u_alpha <= 'Z'; ++u_alpha)
	{
		putchar(u_alpha);
	}
	putchar('\n');
	return (0);
}
