#include "main.h"

/**
 * *_strncat -  function that concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int f;
	int g;
	
	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	g = 0;
	while (g < n && src[g] != '\0')
	{
		dest[f] = src[g];
		f++;
		g++;
	}
	dest[f] = '\0';
	return (dest);
}
