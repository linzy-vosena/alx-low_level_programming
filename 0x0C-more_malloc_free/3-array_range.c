#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to the newly allocated array
 */

int *array_range(int min, int max)
{
	int f, j;
	int *c;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	c = malloc(sizeof(int) * j);
	if (c == NULL)
		return (NULL);
	for (f =  0 ; min <= max ; f++)
		c[f] = min++;
	return (c);
}
