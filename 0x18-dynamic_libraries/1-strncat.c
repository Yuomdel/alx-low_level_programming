#include "main.h"
/**
 *_strncat - concatenate two str but add inputted number of bytes
 *@dest:the string to be appended upon
 *@src:the string to be completed at end of dest
 *@n:the int parameter to compare index to
 *Return:will returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
