#include <stdio.h>
/**
 * main - prints all possible different combination of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int n, m;

	for (n = 48 ; n <= 56 ; n++)
	{
		for (m = 49 ; m <= 57 ; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n != 98 || m != 99)
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
