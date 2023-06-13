#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: any value of type int
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
