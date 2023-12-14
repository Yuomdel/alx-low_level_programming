#include "main.h"
/**
 *_strlen - will returns the length of a string
 * @s: the string
 *Return:will returns the lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
