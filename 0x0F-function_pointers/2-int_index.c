#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - will returns the index of an array if the function matches.
 * @array:the pointer to the array of numbers.
 * @size: array size.
 * @cmp: the pointer to compared func
 * Return:return  index of array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (t = 0; t < size; t++)
	{
		if (cmp(*(array + t)) != 0)
		{
			return (t);
		}
	}
	return (-1);
}
