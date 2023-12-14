#include "main.h"
/**
*_strstr -  _strstr() function finds the first occurrence
* the substring needle in the string haystack.
*  terminating null bytes (\0) are not compared
*@haystack:  where the str search is made
*@needle: string whose occurence is searched in haystack
*Return:will Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
