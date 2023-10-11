#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - compares the struct and proceed to operates.
 * @s: operator of the string.
 * Return:return retsult.
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
	int t;

	t = 0;

	while (t < 5)
	{
		if (*s == *ops[t].op)
			return (ops[i].f);
		t++;
	}
	return (NULL);
}
