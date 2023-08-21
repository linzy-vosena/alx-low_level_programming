#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: the array name
 * @n: the number of elememnts inthe arrays to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < (n - 1); k++)
	{
		printf("%d, ", a[k]);
	}
	if (k == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
