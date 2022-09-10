/*
 * File: 2-print_alphabet.c
 * Auth: Aniseti Sanya
 */

#include <stdio.h>

/**
 * main - Prints the alphbet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
