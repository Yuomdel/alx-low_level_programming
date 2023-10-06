#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb:the numb of elements
*@size:the size of the memory block to be allocated
*
*Return:return poiner to  address of the block memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (j = 0; j < (nmemb * size); j++)
			block[j] = 0;
		return (block);
	}
	else
		return (NULL);
}
