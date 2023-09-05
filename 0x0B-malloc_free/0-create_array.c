#include "main.h"
#include <stdlib.h>

/**
 *create_array - function creates an array of size and assign char c
 *@size: size of array
 *@c: char to assign
 *Return: pointer to array,NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int f;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (f = 0 ; f < size ; f++)
		arr[f] = c;
	return (arr);
}
