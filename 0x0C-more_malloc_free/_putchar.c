#include <unistd.h>

/**
 * _putchar - the char c to stdout
 * @c:  char to be printed
 *
 * Return: 1  On success.
 * On error, -1 will be returned, and errno is set as appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
