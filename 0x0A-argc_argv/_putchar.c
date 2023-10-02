#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the char c to stdout
 * @c: The character which will be printed
 *
 * Return: success 1.
 * On error, -1 will be returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
