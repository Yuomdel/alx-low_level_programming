#include "main.h"
/**
 *_puts -to prints a string
 * @str:the string to print
 *
 * Desc:will prints a string
 * On success:will return the number of char printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
