#include <stdio.h>
/**
 * main - prints the sizes of various type
 * Return: returns 0
 */
int main(void)
{
	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ld));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)
			sizeof(lld));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
