#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of file using macro
 *
 * Return: Success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	exit(EXIT_SUCCESS);
}
