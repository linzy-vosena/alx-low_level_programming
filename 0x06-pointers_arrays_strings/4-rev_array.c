#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int l;

	for (i = 0 ; i < n-- ; i++)
	{
		l = a[i];
		a[i] = a[n];
		a[n] = l;
	}
}
