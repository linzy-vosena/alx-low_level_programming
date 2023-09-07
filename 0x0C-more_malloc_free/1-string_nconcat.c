#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings where
 * the second one is an n value
 * @s1: string one
 * @s2: string two
 * @n: number of elements to concatenate from s2
 * Return: pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t e, f, g;
	char *c;

	if (s1 == NULL)
		e = 0;
	else
	{
		for (e = 0; s1[e] != '\0' ; e++)
		;
	}
	if (s2 == NULL)
		f = 0;
	else
	{
		for (f = 0 ; s2[f] != '\0' ; f++)
		;
	}
	if (f > n)
		f = n;
	c = malloc(sizeof(char) * (e + f + 1));
	if (c == NULL)
		return (NULL);
	for (g = 0 ; g < e ; g++)
		c[g] = s1[g];
	for (g = 0 ; g < f ; g++)
		c[g + e] = s2[g];
	c[e + f] = '\0';
	return (c);
}
