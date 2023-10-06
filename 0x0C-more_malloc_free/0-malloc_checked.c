#include "main.h"

/**
 * malloc_checked - thid will allocates memory using malloc, exit(98) if it fails
 * @b:the size of the memory block that will be allocated
 *
 * Return:return the address of the memory block to the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
