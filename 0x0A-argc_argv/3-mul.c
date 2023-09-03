#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: the number of arguements in the command line
 * @argv: the arrays in the command line
 * Return: 0 when succesful, 1 unsuccessful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}
