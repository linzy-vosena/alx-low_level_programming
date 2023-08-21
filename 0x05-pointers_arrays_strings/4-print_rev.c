#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int f;
	int count = 0;

	for (f = 0; s[f] != '\0' ; f++)
		count++;
	for (f = count - 1 ; f >= 0 ; f--)
		_putchar(s[f]);
	_putchar('\n');
}
