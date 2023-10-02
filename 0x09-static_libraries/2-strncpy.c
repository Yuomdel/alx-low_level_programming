#include "main.h"
/**
*  _strncpy -the C function that copies a str, including the
*  terminate null byte, using atmost an inputted number of bytes.
*  when the length of the source string is less than the maximum byte number,
*  the remainning of the destination string is filled with null bytes.
*  Work identically to the standard library function `strncpy`.
*@dest:the buffer storing the string copy
*@src: source string
*@n:max nummber of the byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
