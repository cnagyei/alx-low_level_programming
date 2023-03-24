#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
	int largest;

	if ((x > y) && (y > z))
	{
		largest = x;
	}
	else if ((y > x) && (x > z))
	{
		largest = y;
	}
	else if ((z > x) && (x > y))
	{
		largest = z;
	}
	/* additional code */
	else if ((x == y) && (x == z))
	{
		largest = x;
	}
	else if ((x == y) && (x > z))
	{
		largest = x;
	}
	else if ((x == z) && (x > y))
	{
		largest = x;
	}
	else if ((y == z) && (y > x))
	{
		largest = y;
	}


	return (largest);
}
