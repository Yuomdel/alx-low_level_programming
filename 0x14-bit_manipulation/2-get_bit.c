#include "main.h"

/**
*get_bit - value of bit
*@n: numb
*@index: index start from 0 of required bit
*
*Return: conv value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
