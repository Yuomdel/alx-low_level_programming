#include "main.h"
/**
*_memcpy -  _memcpy() function copies n bytes
* from memory area src to memory area dest
*@dest: the area where bytes are copied to
*@src: the area where bytes are copied from
*@n: the numb of bytes to copy
*Return: will returns a pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
