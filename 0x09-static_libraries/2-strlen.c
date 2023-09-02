#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int f;
	int count = 0;

	for (f = 0 ; s[f] != '\0' ; f++)
		count++;
	return (count);
}
