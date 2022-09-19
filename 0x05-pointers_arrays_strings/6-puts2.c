#include <stdio.h>
#include "main.h"

/**
 * puts2 - print evenly
 * @str: parameter
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = strlen(str) - 1; i >= 0; i += 2)
	{
		_putchar(str[i]);
	}
}
