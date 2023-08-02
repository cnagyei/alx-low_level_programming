#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if number is prime, otherwise 0 (int)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number(n - 1));
}
