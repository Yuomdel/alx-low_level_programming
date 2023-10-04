#include "main.h"


/**
* _strdup -will return a pointer to a newly allocated
*the space in memory, which contains a copy of the
*string given as a parameter.
*@str:the Str to be copied
*Return:return NULL in the case of error, pointer to allocated
*spaces
*/

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);

}
