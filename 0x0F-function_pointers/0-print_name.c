#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name -will prints the name of the func.
 * @name:the points to thr Name of the
 * string.
 * @f:the points to func.
 * Return: return the str.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
