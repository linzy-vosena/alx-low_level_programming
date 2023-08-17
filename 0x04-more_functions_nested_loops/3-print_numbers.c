#include "main.h"

/**
 * print_numbers - function prints numbers from 0-9
 * Return: no return
 */
void print_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
