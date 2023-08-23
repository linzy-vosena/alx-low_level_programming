#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int f;
	int g;

	f = 0;
	while (dest [f] != '\0')
	{
		f++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[f] = src[g];
		f++;
		g++;
	}
	dest[f] = '\0';
	return (dest);
}
