#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string to be copied from
 * @s2: string to be copied from
 * Return: 0 when successful, NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int leng1, leng2, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	leng1 = 0;
	while (s1[leng1] != '\0')
		leng1++;
	leng2 = 0;
	while (s2[leng2] != '\0')
		leng2++;

	conc = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (conc == NULL)
		return (NULL);

	for (f = 0; f < leng1; f++)
		conc[f] = s1[f];
	for (f = 0; f < leng2; f++)
		conc[f + leng1] = s2[f];
	conc[leng1 + leng2] = '\0';

	return (conc);
}
