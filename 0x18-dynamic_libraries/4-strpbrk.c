#include "main.h"
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the str s of any of the bytes in
*accept by the str
*@s:the str where search is made
*@accept:the str where searched bytes are located
*
*Return:will Returns a pointer to the byte in s that matches
* one of the bytes will accept, or NULL if no such is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
