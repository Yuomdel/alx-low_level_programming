#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main -to prints multiplication
*of two numbers
*@argc:the  number of arguments
*@argv:the array of arguments
*Return:  0
*/

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
