#include "main.h"
/**
*_memcpy - The _memcpy() function copies n bytes
* from mem area src to mem area dest
*@dest:the area where bytes are copied to
*@src:the area which the bytes are copied from
*@n:the number of bytes to copy
*Return: will returns a pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
