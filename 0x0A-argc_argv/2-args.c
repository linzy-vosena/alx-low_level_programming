#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argv: the array
 * @argc: the number of arguements
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int f;

	for (f = 0 ; f < argc ; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}
