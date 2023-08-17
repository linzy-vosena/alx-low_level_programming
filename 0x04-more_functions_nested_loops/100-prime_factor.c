#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int d;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (d = 3; d <= sqrt(n); d = d + 2)
	{
		while (n % d == 0)
		{
			max = d;
			n = n / d;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
