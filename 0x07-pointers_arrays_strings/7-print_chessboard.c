#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 Successful
 */
void print_chessboard(char (*a)[8])
{
	int f;
	int g;

	for (f = 0; f < 8; f++)
	{
		for (g = 0; g < 8; g++)
			_putchar(a[f][g]);
		_putchar('\n');
	}
}
