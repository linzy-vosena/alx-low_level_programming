#include <stdio.h>
/**
 * main - prints all possible different combination of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int x, y;

	for (x = 48 ; x <= 56 ; x++)
	{
		for (y = 49 ; y <= 57 ; y++)
		{
			if (x > y)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
