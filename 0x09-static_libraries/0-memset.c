#include "main.h"
/**
*_memset - The _memset() function fills
*  first n bytes of the memory area
* pointed to by s with the constant byte b
*@s:the  target
*@b:the constant byte
*@n:the number of byte
*Return: will return the new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
