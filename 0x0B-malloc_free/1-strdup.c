#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - function that returns a duplicate of string str
 * @str: the pointer to string
 * Return: pointer to the duplicate, NULL if fails
 */

char *_strdup(char *str)
{
	char *duplicate;
	int length;
	int f;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (f = 0; f < length; f++)
		duplicate[f] = str[f];

	duplicate[length] = '\0';

	return (duplicate);
}
