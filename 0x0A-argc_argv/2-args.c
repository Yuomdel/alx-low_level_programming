#include <stdio.h>

/**
* main - prints all arguments it received
*@argc: argument count
*@argv: argument vector
*Return: returns 0
*/

int main(int argc, char *argv[])
{
		int t;

		for (t = 0; t < argc; t++)
			printf("%s\n", argv[t]);

		return (0);
}
