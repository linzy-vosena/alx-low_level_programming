#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command-line arguments into a single string
 * @ac: number of command-line arguments
 * @av: array of command-line arguments
 * Return: Pointer to the concatenated string,
 * or NULL if allocation fails or if ac is 0 or av is NULL
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0, a, b, c = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			total_length++;
	}

	total_length += ac;

	str = malloc(sizeof(char) * total_length + 1);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}

		str[c] = '\n';
		c++;
	}

	str[c] = '\0';

	return (str);
}
