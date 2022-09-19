#include<stdio.h>

/**
 * print_array - print integers
 * @a: pass by ref
 * @n: pass by value
 */
void print_array(int *a, int n)
{
	for (int in = 0 ; i < n ; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
