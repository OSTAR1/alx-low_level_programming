#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers - check thr code for betty School students.
 *
 * Return: zero
 */
void print_numbers(void)
{
	ont a;

	for (a = o; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n);
=======
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
>>>>>>> 4367dfba55f07144b7792186af4a28801ec8e345
}
