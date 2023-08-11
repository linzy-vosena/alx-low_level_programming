#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int d;
	char j;

	for (d = 0 ; d < 10 ; d++)
		putchar(d + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
