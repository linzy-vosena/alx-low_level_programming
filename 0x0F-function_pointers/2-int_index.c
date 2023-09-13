#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element,-1 if not succesfull
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (t = 0; t < size; t++)
	{
		if (cmp(array[t]))
			return (t);
	}
	return (-1);
}
