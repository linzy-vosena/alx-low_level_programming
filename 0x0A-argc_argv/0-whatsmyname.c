#include "main.h"
#include <stdio.h>

/**
 * main - prints out a program name
 * @argv: array of arguements
 * @argc: number of arguements
 * Return: 0 when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
