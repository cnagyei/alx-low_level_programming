#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - return a pointer to the function that correspond to
 * the operator given
 *
 * @s: the operator
 *
 * Return: pointer to operator's function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i] != NULL)
	{
		if (s == ops[i])
		{
			get_op_func = ops[i][0];
			i++;
		}
		else
			return (NULL);
		i++;
	}
	return get_op_func;
}
