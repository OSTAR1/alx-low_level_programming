#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all arguments received.
 *
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: zero.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
