#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * followed by a new line
 * @argv: array containing the program command line arguements
 * @argc: number of arguements in command line
 * Return: 0 when successful, 1 unsuccessful
 */

int main(int argc, char *argv[])
{
	int f, g, sum = 0;

	for (f = 1; f < argc; f++)
	{
		for (g = 0; argv[f][g] != '\0'; g++)
		{
			if (!isdigit(argv[f][g]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[f]);
	}
	printf("%d\n", sum);
	return (0);
}
