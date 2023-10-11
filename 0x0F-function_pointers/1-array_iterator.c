#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -will executes a fuction of the task of an array.
 * @array:the pointer of the array.
 * @size:the size of array.
 * @action:the function to be executed
 * Return:returned the  executed func.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t t;

	if (array != NULL && action != NULL)
	for (t = 0; t < size; t++)
		action(*(array + t));
}
