#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array to be used
 *@n: number of elements to be printed
 *Return: void
 */

void print_array(int *a, int n)
{
	int f;

	for (f = 0 ; f < n ; f++)
	{
		printf("%d", a[f]);
		if (f < n - 1)
			printf(",");
	}
	printf("\n");
}
