#include "main.h"

/**
*  _strcmp - the Func which compare two strings and
*@s1: the first string
*@s2:the second string
*Return:
*	will	returns zero if s1 == s2
*	will	returns negative number if s1 < s2
*	will	returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (diff);
}
