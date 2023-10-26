#include "main.h"

/**
*flip_bits - from n to m flip numb
*@n: init number
*@m: final numb
*
*Return: return flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
