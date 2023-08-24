#include "main.h"

/**
 * *string_toupper - change all the lower case to upper case
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int f;

	f = 0;
	while (n[f] != '\0')
	{
		if (n[f] >= 'a' && n[f] <= 'z')
			n[f] = n[f] - 32;
		f++;
	}
	return (n);
}
