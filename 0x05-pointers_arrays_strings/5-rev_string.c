#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int f;
	int count = 0;

	for (f = 0 ; s[f] != '\0' ; f++)
		count++;
	for (f = 0 ; f < count / 2 ; f++)
	{
		char j;

		j = s[f];
		s[f] = s[count - 1 - f];
		s[count - 1 - f] = j;
	}
}
