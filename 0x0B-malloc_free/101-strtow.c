#include "main.h"
#include <stdlib.h>


/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, d;

	flag = 0;
	d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			d++;
		}
	}
	return (d);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings when Successful
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int f, g = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (f = 0; f <= length; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (c)
			{
				end = f;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[g] = tmp - c;
				g++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = f;
	}

	matrix[g] = NULL;

	return (matrix);
}

