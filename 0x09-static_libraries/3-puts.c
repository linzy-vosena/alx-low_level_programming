#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 *Return: void
 */

void _puts(char *str)
{
	int f;

	for (f = 0 ; str[f] != '\0' ; f++)
		_putchar(str[f]);
	_putchar('\n');
}
