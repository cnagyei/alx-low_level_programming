#include <stdio.h>

int _strlen(char *s);

int main(void)
{
	char a[6] = "Hello";
	int len;

	len = _strlen(a);

	printf("Length of string is %d\n", len);
}
