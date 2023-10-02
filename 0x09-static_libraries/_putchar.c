#include <unistd.h>

/**
 * _putchar - the character c to stdout
 * @c: The character to be printed
 *
 * Return: return  On success 1.
 * On error, -1 will be returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
