#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit number
 *
 * Return: always 0 when successful
 */

int main(void)
{
	int n, m;

	for (n = 0 ; n < 100 ; n++)
	{
		for (m = 0 ; m < 100 ; m++)
		{
			if (n < m)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
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
