#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size:the Size of  array
*@c: Char to be insert
*Return:return NULL if size is 0 or if it fails,
*the pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
