#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character will be printed
 * Return: void
 */
void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int f;

		for (f = 0 ; f <= n ; f++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
